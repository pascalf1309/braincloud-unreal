// Copyright 2015 bitHeads, Inc. All Rights Reserved.

#pragma once

#include "BCBlueprintCallProxyBase.h"
#include "IServerCallback.h"
#include "BrainCloudACL.h"

#include "BCWrapperProxy.generated.h"

class BrainCloudWrapper;
class ABrainCloudActor;

UCLASS(BlueprintType)
class UBCWrapperProxy : public UBCBlueprintCallProxyBase, public IServerCallback
{
  GENERATED_BODY()

public:
  static ABrainCloudActor *DefaultBrainCloudInstance;

  UBCWrapperProxy(const FObjectInitializer &ObjectInitializer);

  /**
	* Create an actor that contains its own instance of the brainCloud Wrapper
	* This actor will destory itself on EndPlay
	*
	* @param brainCloud - An actor that contains its own instance of the brainCloud Wrapper
	*/
  UFUNCTION(BlueprintCallable, Category = "BrainCloud")
  static ABrainCloudActor *CreateBrainCloudActor(const FString &wrapperName);

  /**
	* Set a default brainCloud instance to be used when none is provided.
	* When not set, the brainCloud Singleton will be used
	* @param brainCloud - An actor that contains its own instance of the brainCloud Wrapper
	*/
  UFUNCTION(BlueprintCallable, Category = "BrainCloud")
  static void SetDefaultBrainCloudInstance(ABrainCloudActor *brainCloud);

  /**
	* Clear the default brainCloud instance
	* When not set, the brainCloud Singleton will be used
	*/
  UFUNCTION(BlueprintCallable, Category = "BrainCloud")
  static void ClearDefaultBrainCloudInstance();
  /**
     * For non-anonymous authentication methods, a profile id will be passed in
     * when this value is set to false. This will generate an error on the server
     * if the profile id passed in does not match the profile associated with the
     * authentication credentials. By default, this value is true.
     *
     * @param alwaysAllow Controls whether the profile id is passed in with
     * non-anonymous authentications.
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *SetAlwaysAllowProfileSwitch(ABrainCloudActor *brainCloud, bool alwaysAllow);

  /**
     * Method initializes the BrainCloudClient.
     *
     * @param serverURL The url to the brainCloud server
     * @param secretKey The secret key for your app
     * @param appId The app's id
     * @param version The app's version
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *Initialize(ABrainCloudActor *brainCloud, FString serverUrl, FString secretKey, FString appId, FString version);

  /**
     * Authenticate a user anonymously with brainCloud
     *
     * Service Name - Authenticate
     * Service Operation - Authenticate
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *AuthenticateAnonymous(ABrainCloudActor *brainCloud);

  /*
     * Authenticate the user with a custom Email and Password.  
     *
     * Note that the password sent from the client to the server is protected via SSL.
     *
     * Service Name - Authenticate
     * Service Operation - Authenticate
     *
     * @param email  The e-mail address of the user
     * @param password  The password of the user
     * @param forceCreate Should a new profile be created for this user if the account does not exist?
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *AuthenticateEmailPassword(ABrainCloudActor *brainCloud, FString email, FString password, bool forceCreate);

  /**
     * Authenticate the user via cloud code (which in turn validates the supplied credentials against an external system).
     * This allows the developer to extend brainCloud authentication to support other backend authentication systems.
     *
     * Service Name - Authenticate
     * Server Operation - Authenticate
     *
     * @param userid The user id
     * @param token The user token (password etc)
     * @param externalAuthName The name of the cloud script to call for external authentication
     * @param force Should a new profile be created for this user if the account does not exist?
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *AuthenticateExternal(ABrainCloudActor *brainCloud, FString userid, FString token, FString externalAuthName, bool forceCreate);

  /*
     * Authenticate the user with brainCloud using their Facebook Credentials
     *
     * Service Name - Authenticate
     * Service Operation - Authenticate
     *
     * @param fbUserId The facebook id of the user
     * @param fbAuthToken The validated token from the Facebook SDK
     *   (that will be further validated when sent to the bC service)
     * @param forceCreate Should a new profile be created for this user if the account does not exist?
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *AuthenticateFacebook(ABrainCloudActor *brainCloud, FString fbUserId, FString fbAuthToken, bool forceCreate);

  /*
     * Authenticate the user using their Game Center id
     *
     * Service Name - Authenticate
     * Service Operation - Authenticate
     *
     * @param gameCenterId The player's game center id  (use the playerID property from the local GKPlayer object)
     * @param forceCreate Should a new profile be created for this user if the account does not exist?
     * @param success The method to call in event of successful login
     * @param failure The method to call in the event of an error during authentication
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *AuthenticateGameCenter(ABrainCloudActor *brainCloud, FString gameCenterId, bool forceCreate);

  /*
     * Authenticate the user using a google userid(email address) and google authentication token.
     *
     * Service Name - Authenticate
     * Service Operation - Authenticate
     *
     * @param userid  String representation of google+ userid (email)
     * @param token  The authentication token derived via the google apis.
     * @param forceCreate Should a new profile be created for this user if the account does not exist?
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *AuthenticateGoogle(ABrainCloudActor *brainCloud, FString userid, FString token, bool forceCreate);

  /*
     * Authenticate the user using a steam userid and session ticket (without any validation on the userid).
     *
     * Service Name - Authenticate
     * Service Operation - Authenticate
     *
     * @param userid  String representation of 64 bit steam id
     * @param sessionticket  The session ticket of the user (hex encoded)
     * @param forceCreate Should a new profile be created for this user if the account does not exist?
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *AuthenticateSteam(ABrainCloudActor *brainCloud, FString userid, FString sessionticket, bool forceCreate);

  /*
     * Authenticate the user using a Twitter userid, authentication token, and secret from Twitter.
     *
     * Service Name - Authenticate
     * Service Operation - Authenticate
     *
     * @param userid  String representation of Twitter userid
     * @param token  The authentication token derived via the Twitter apis.
     * @param secret  The secret given when attempting to link with Twitter
     * @param forceCreate Should a new profile be created for this user if the account does not exist?
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *AuthenticateTwitter(ABrainCloudActor *brainCloud, FString userid, FString token, FString secret, bool forceCreate);

  /*
     * Authenticate the user using a userid and password (without any validation on the userid).
     * Similar to AuthenticateEmailPassword - except that that method has additional features to
     * allow for e-mail validation, password resets, etc.
     *
     * Service Name - Authenticate
     * Service Operation - Authenticate
     *
     * @param email  The e-mail address of the user
     * @param password  The password of the user
     * @param forceCreate Should a new profile be created for this user if the account does not exist?
     *
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *AuthenticateUniversal(ABrainCloudActor *brainCloud, FString userid, FString password, bool forceCreate);

  /*
     * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.
     * In event the current session was previously an anonymous account, the smart switch will delete that profile.
     * Use this function to keep a clean designflow from anonymous to signed profiles
     *
     * Authenticate the user with a custom Email and Password.  Note that the client app
     * is responsible for collecting (and storing) the e-mail and potentially password
     * (for convenience) in the client data.  For the greatest security,
     * force the user to re-enter their * password at each login.
     * (Or at least give them that option).
     *
     * Note that the password sent from the client to the server is protected via SSL.
     *
     * Service Name - Authenticate
     * Service Operation - Authenticate
     *
     * @param email  The e-mail address of the user
     * @param password  The password of the user
     * @param forceCreate Should a new profile be created for this user if the account does not exist?
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *SmartSwitchAuthenticateEmailPassword(ABrainCloudActor *brainCloud, const FString &email, const FString &password, bool forceCreate);

  /**
     * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.
     * In event the current session was previously an anonymous account, the smart switch will delete that profile.
     * Use this function to keep a clean designflow from anonymous to signed profiles
     *
     * Authenticate the user via cloud code (which in turn validates the supplied credentials against an external system).
     * This allows the developer to extend brainCloud authentication to support other backend authentication systems.
     *
     * Service Name - Authenticate
     * Server Operation - Authenticate
     *
     * @param userid The user id
     * @param token The user token (password etc)
     * @param externalAuthName The name of the cloud script to call for external authentication
     * @param force Should a new profile be created for this user if the account does not exist?
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *SmartSwitchAuthenticateExternal(ABrainCloudActor *brainCloud, const FString &userid, const FString &token, const FString &externalAuthName, bool forceCreate);

  /*
     * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.
     * In event the current session was previously an anonymous account, the smart switch will delete that profile.
     * Use this function to keep a clean designflow from anonymous to signed profiles
     *
     * Authenticate the user with brainCloud using their Facebook Credentials
     *
     * Service Name - Authenticate
     * Service Operation - Authenticate
     *
     * @param fbUserId The facebook id of the user
     * @param fbAuthToken The validated token from the Facebook SDK
     *   (that will be further validated when sent to the bC service)
     * @param forceCreate Should a new profile be created for this user if the account does not exist?
     *
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *SmartSwitchAuthenticateFacebook(ABrainCloudActor *brainCloud, const FString &fbUserId, const FString &fbAuthToken, bool forceCreate);

  /*
     * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.
     * In event the current session was previously an anonymous account, the smart switch will delete that profile.
     * Use this function to keep a clean designflow from anonymous to signed profiles
     *
     * Authenticate the user using their Game Center id
     *
     * Service Name - Authenticate
     * Service Operation - Authenticate
     *
     * @param gameCenterId The player's game center id  (use the playerID property from the local GKPlayer object)
     * @param forceCreate Should a new profile be created for this user if the account does not exist?
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *SmartSwitchAuthenticateGameCenter(ABrainCloudActor *brainCloud, const FString &gameCenterId, bool forceCreate);

  /*
     * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.
     * In event the current session was previously an anonymous account, the smart switch will delete that profile.
     * Use this function to keep a clean designflow from anonymous to signed profiles
     *
     * Authenticate the user using a google userid(email address) and google authentication token.
     *
     * Service Name - Authenticate
     * Service Operation - Authenticate
     *
     * @param userid  String representation of google+ userid (email)
     * @param token  The authentication token derived via the google apis.
     * @param forceCreate Should a new profile be created for this user if the account does not exist?
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *SmartSwitchAuthenticateGoogle(ABrainCloudActor *brainCloud, const FString &userid, const FString &token, bool forceCreate);

  /*
     * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.
     * In event the current session was previously an anonymous account, the smart switch will delete that profile.
     * Use this function to keep a clean designflow from anonymous to signed profiles
     *
     * Authenticate the user using a steam userid and session ticket (without any validation on the userid).
     *
     * Service Name - Authenticate
     * Service Operation - Authenticate
     *
     * @param userid  String representation of 64 bit steam id
     * @param sessionticket  The session ticket of the user (hex encoded)
     * @param forceCreate Should a new profile be created for this user if the account does not exist?
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *SmartSwitchAuthenticateSteam(ABrainCloudActor *brainCloud, const FString &userid, const FString &sessionticket, bool forceCreate);

  /*
     * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.
     * In event the current session was previously an anonymous account, the smart switch will delete that profile.
     * Use this function to keep a clean designflow from anonymous to signed profiles
     *
     * Authenticate the user using a Twitter userid, authentication token, and secret from Twitter.
     *
     * Service Name - Authenticate
     * Service Operation - Authenticate
     *
     * @param userid  String representation of Twitter userid
     * @param token  The authentication token derived via the Twitter apis.
     * @param secret  The secret given when attempting to link with Twitter
     * @param forceCreate Should a new profile be created for this user if the account does not exist?
     * @param callback The method to be invoked when the server response is received
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *SmartSwitchAuthenticateTwitter(ABrainCloudActor *brainCloud, const FString &userid, const FString &token, const FString &secret, bool forceCreate);

  /*
     * Smart Switch Authenticate will logout of the current profile, and switch to the new authentication type.
     * In event the current session was previously an anonymous account, the smart switch will delete that profile.
     * Use this function to keep a clean designflow from anonymous to signed profiles
     *
     * Authenticate the user using a userid and password (without any validation on the userid).
     * Similar to AuthenticateEmailPassword - except that that method has additional features to
     * allow for e-mail validation, password resets, etc.
     *
     * Service Name - Authenticate
     * Service Operation - Authenticate
     *
     * @param email  The e-mail address of the user
     * @param password  The password of the user
     * @param forceCreate Should a new profile be created for this user if the account does not exist?
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *SmartSwitchAuthenticateUniversal(ABrainCloudActor *brainCloud, const FString &userid, const FString &password, bool forceCreate);

  /**
     * Sets the stored profile id, saves it as well
     * @param profileId The profile id to set
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *SetStoredProfileId(ABrainCloudActor *brainCloud, FString profileId);

  /**
     * Returns the stored anonymous id
     * @return The stored anonymous id
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static FString GetStoredProfileId(ABrainCloudActor *brainCloud);

  /**
     * Sets the stored anonymous id, saves it as well
     * @param anonymousId The anonymous id to set
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static UBCWrapperProxy *SetStoredAnonymousId(ABrainCloudActor *brainCloud, FString anonymousId);

  /**
     * Returns the stored anonymous id
     * @return The stored anonymous id
     */
  UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "BrainCloud|Wrapper")
  static FString GetStoredAnonymousId(ABrainCloudActor *brainCloud);

  /**
	* Returns a non null reference to brainCloud
	*
	* @param brainCloud - An actor that contains its own instance of the brainCloud Wrapper
	*/
  static BrainCloudWrapper *GetBrainCloudInstance(ABrainCloudActor *brainCloud);

  //Response delegates
  UPROPERTY(BlueprintAssignable)
  FBrainCloudCallbackDelegate OnSuccess;

  UPROPERTY(BlueprintAssignable)
  FBrainCloudCallbackDelegate OnFailure;

protected:
  // IServerCallback interface
  void serverCallback(ServiceName serviceName, ServiceOperation serviceOperation, const FString &jsonData);
  void serverError(ServiceName serviceName, ServiceOperation serviceOperation, int32 statusCode, int32 reasonCode, const FString &jsonError);
  // End of IServerCallback interface
};
