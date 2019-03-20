// Copyright 2018 bitHeads, Inc. All Rights Reserved.

#include "BCClientPluginPrivatePCH.h"
#include "OperationParam.h"

OperationParam::OperationParam(const FString &operation)
{
	_value = operation;
}

//Push Notification Service - Send Params
const OperationParam OperationParam::PushNotificationSendParamToPlayerId = OperationParam("toPlayerId");
const OperationParam OperationParam::PushNotificationSendParamProfileId = OperationParam("profileId");
const OperationParam OperationParam::PushNotificationSendParamMessage = OperationParam("message");
const OperationParam OperationParam::PushNotificationSendParamNotificationTemplateId = OperationParam("notificationTemplateId");
const OperationParam OperationParam::PushNotificationSendParamSubstitution = OperationParam("substitutions");
const OperationParam OperationParam::AlertContent = OperationParam("alertContent");
const OperationParam OperationParam::CustomData = OperationParam("customData");
const OperationParam OperationParam::StartTimeUTC = OperationParam("startDateUTC");
const OperationParam OperationParam::MinutesFromNow = OperationParam("minutesFromNow");
const OperationParam OperationParam::FcmContent = OperationParam("fcmContent");
const OperationParam OperationParam::IosContent = OperationParam("iosContent");
const OperationParam OperationParam::FacebookContent = OperationParam("facebookContent");

//Push Notification Service - Register Params
const OperationParam OperationParam::PushNotificationRegisterParamDeviceType = OperationParam("deviceType");
const OperationParam OperationParam::PushNotificationRegisterParamDeviceToken = OperationParam("deviceToken");
const OperationParam OperationParam::PushNotificationRegisterParamPushId = OperationParam("pushId");
const OperationParam OperationParam::PushNotificationRegisterParamToPlayerId = OperationParam("toPlayerId");
const OperationParam OperationParam::PushNotificationRegisterParamContent = OperationParam("content");
const OperationParam OperationParam::PushNotificationRegisterParamSendInterval = OperationParam("sendInterval");
const OperationParam OperationParam::PushNotificationRegisterParamScheduleIn = OperationParam("scheduleIn");

// Twitter Service - Verify Params
const OperationParam OperationParam::TwitterServiceVerifyToken = OperationParam("token");
const OperationParam OperationParam::TwitterServiceVerifyVerifier = OperationParam("verifier");

// Twitter Service - Tweet Params
const OperationParam OperationParam::TwitterServiceTweetToken = OperationParam("token");
const OperationParam OperationParam::TwitterServiceTweetSecret = OperationParam("secret");
const OperationParam OperationParam::TwitterServiceTweetTweet = OperationParam("tweet");
const OperationParam OperationParam::TwitterServiceTweetPic = OperationParam("pic");

// Authenticate Service - Authenticate Params
const OperationParam OperationParam::AuthenticateServiceAuthenticateAuthenticationType = OperationParam("authenticationType");
const OperationParam OperationParam::AuthenticateServiceAuthenticateAuthenticationToken = OperationParam("authenticationToken");
const OperationParam OperationParam::AuthenticateServiceAuthenticateExternalId = OperationParam("externalId");
const OperationParam OperationParam::AuthenticateServiceAuthenticateEmailAddress = OperationParam("emailAddress");
const OperationParam OperationParam::AuthenticateServiceAuthenticateGameId = OperationParam("gameId");
const OperationParam OperationParam::AuthenticateServiceAuthenticateServiceParams = OperationParam("serviceParams");
const OperationParam OperationParam::AuthenticateServiceAuthenticateDeviceId = OperationParam("deviceId");
const OperationParam OperationParam::AuthenticateServiceAuthenticateForceMergeFlag = OperationParam("forceMergeFlag");
const OperationParam OperationParam::AuthenticateServiceAuthenticateReleasePlatform = OperationParam("releasePlatform");
const OperationParam OperationParam::AuthenticateServiceAuthenticateGameVersion = OperationParam("gameVersion");
const OperationParam OperationParam::AuthenticateServiceAuthenticateBrainCloudVersion = OperationParam("clientLibVersion");
const OperationParam OperationParam::AuthenticateServiceAuthenticateAuthFacebook = OperationParam("Facebook");
const OperationParam OperationParam::AuthenticateServiceAuthenticateAuthEmail = OperationParam("Email");
const OperationParam OperationParam::AuthenticateServiceAuthenticateAuthGameCenter = OperationParam("GameCenter");
const OperationParam OperationParam::AuthenticateServiceAuthenticateAuthUniversal = OperationParam("Universal");
const OperationParam OperationParam::AuthenticateServiceAuthenticateAuthSteam = OperationParam("Steam");
const OperationParam OperationParam::AuthenticateServiceAuthenticateAuthGoogle = OperationParam("Google");
const OperationParam OperationParam::AuthenticateServiceAuthenticateAuthParse = OperationParam("Parse");
const OperationParam OperationParam::AuthenticateServiceAuthenticateAuthUpgradeId = OperationParam("upgradeAppId");
const OperationParam OperationParam::AuthenticateServiceAuthenticateAuthAnonymous = OperationParam("Anonymous");
const OperationParam OperationParam::AuthenticateServiceAuthenticateAuthExternal = OperationParam("External");
const OperationParam OperationParam::AuthenticateServiceAuthenticateAnonymousId = OperationParam("anonymousId");
const OperationParam OperationParam::AuthenticateServiceAuthenticateProfileId = OperationParam("profileId");
const OperationParam OperationParam::AuthenticateServiceAuthenticateForceCreate = OperationParam("forceCreate");
const OperationParam OperationParam::AuthenticateServiceAuthenticateExternalAuthName = OperationParam("externalAuthName");
const OperationParam OperationParam::AuthenticateServiceAuthenticateRegion = OperationParam("region");
const OperationParam OperationParam::AuthenticateServiceAuthenticateCountryCode = OperationParam("countryCode");
const OperationParam OperationParam::AuthenticateServiceAuthenticateLanguageCode = OperationParam("languageCode");
const OperationParam OperationParam::AuthenticateServiceAuthenticateTimeZoneOffset = OperationParam("timeZoneOffset");
const OperationParam OperationParam::AuthenticateServiceAuthenticateAuthTwitter = OperationParam("Twitter");
const OperationParam OperationParam::Peer = OperationParam("peer");

// Authenticate Service - Authenticate Params
const OperationParam OperationParam::IdentityServiceExternalId = OperationParam("externalId");
const OperationParam OperationParam::IdentityServiceAuthenticationType = OperationParam("authenticationType");
const OperationParam OperationParam::IdentityServiceConfirmAnonymous = OperationParam("confirmAnonymous");

const OperationParam OperationParam::IdentityServiceOldEmailAddress = OperationParam("oldEmailAddress");
const OperationParam OperationParam::IdentityServiceNewEmailAddress = OperationParam("newEmailAddress");
const OperationParam OperationParam::IdentityServiceUpdateContactEmail = OperationParam("updateContactEmail");

// Async Match Service - Async Match Params
const OperationParam OperationParam::AsyncMatchServicePlayers = OperationParam("players");
const OperationParam OperationParam::AsyncMatchServiceMatchState = OperationParam("matchState");
const OperationParam OperationParam::AsyncMatchServiceMatchId = OperationParam("matchId");
const OperationParam OperationParam::AsyncMatchServiceCurrentPlayer = OperationParam("currentPlayer");
const OperationParam OperationParam::AsyncMatchServiceMatchSummary = OperationParam("summary");
const OperationParam OperationParam::AsyncMatchServicePushMessage = OperationParam("pushContent");
const OperationParam OperationParam::AsyncMatchServiceOwnerId = OperationParam("ownerId");
const OperationParam OperationParam::AsyncMatchServiceVersion = OperationParam("version");
const OperationParam OperationParam::AsyncMatchServiceStatistics = OperationParam("statistics");
const OperationParam OperationParam::AsyncMatchServiceMatchStatus = OperationParam("status");

// Entity Service
const OperationParam OperationParam::EntityServiceEntityId = OperationParam("entityId");
const OperationParam OperationParam::EntityServiceEntityType = OperationParam("entityType");
const OperationParam OperationParam::EntityServiceEntitySubtype = OperationParam("entitySubtype");
const OperationParam OperationParam::EntityServiceData = OperationParam("data");
const OperationParam OperationParam::EntityServiceAcl = OperationParam("acl");
const OperationParam OperationParam::EntityServiceVersion = OperationParam("version");
const OperationParam OperationParam::EntityServiceFriendData = OperationParam("friendData");
const OperationParam OperationParam::EntityServiceTargetPlayerId = OperationParam("targetPlayerId");
const OperationParam OperationParam::EntityServiceUpdateOps = OperationParam("updateOps");

// Global Entity Service - Params
const OperationParam OperationParam::GlobalEntityServiceEntityId = OperationParam("entityId");
const OperationParam OperationParam::GlobalEntityServiceEntityType = OperationParam("entityType");
const OperationParam OperationParam::GlobalEntityServiceIndexedId = OperationParam("entityIndexedId");
const OperationParam OperationParam::GlobalEntityServiceTimeToLive = OperationParam("timeToLive");
const OperationParam OperationParam::GlobalEntityServiceData = OperationParam("data");
const OperationParam OperationParam::GlobalEntityServiceAcl = OperationParam("acl");
const OperationParam OperationParam::GlobalEntityServiceVersion = OperationParam("version");
const OperationParam OperationParam::GlobalEntityServiceMaxReturn = OperationParam("maxReturn");
const OperationParam OperationParam::GlobalEntityServiceWhere = OperationParam("where");
const OperationParam OperationParam::GlobalEntityServiceOrderBy = OperationParam("orderBy");
const OperationParam OperationParam::GlobalEntityServiceContext = OperationParam("context");
const OperationParam OperationParam::GlobalEntityServicePageOffset = OperationParam("pageOffset");
const OperationParam OperationParam::OwnerId = OperationParam("ownerId");

// Event Service - Send Params
const OperationParam OperationParam::EventServiceSendToId = OperationParam("toId");
const OperationParam OperationParam::EventServiceSendEventType = OperationParam("eventType");
const OperationParam OperationParam::EventServiceSendEventId = OperationParam("eventId");
const OperationParam OperationParam::EventServiceSendEventData = OperationParam("eventData");
const OperationParam OperationParam::EventServiceSendRecordLocally = OperationParam("recordLocally");

// Event Service - Update Event Data Params
const OperationParam OperationParam::EventServiceUpdateEventDataFromId = OperationParam("fromId");
const OperationParam OperationParam::EventServiceUpdateEventDataEventId = OperationParam("eventId");
const OperationParam OperationParam::EventServiceUpdateEventDataData = OperationParam("eventData");
const OperationParam OperationParam::EvId = OperationParam("evId");

// Event Service - Delete Incoming Params
const OperationParam OperationParam::EventServiceDeleteIncomingEventId = OperationParam("eventId");
const OperationParam OperationParam::EventServiceDeleteIncomingFromId = OperationParam("fromId");

// Event Service - Delete Sent Params
const OperationParam OperationParam::EventServiceDeleteSentEventId = OperationParam("eventId");
const OperationParam OperationParam::EventServiceDeleteSentToId = OperationParam("toId");
const OperationParam OperationParam::EventServiceIncludeIncomingEvents = OperationParam("includeIncomingEvents");
const OperationParam OperationParam::EventServiceIncludeSentEvents = OperationParam("includeSentEvents");

// Friend Service - Params
const OperationParam OperationParam::FriendServiceAuthenticationType = OperationParam("authenticationType");
const OperationParam OperationParam::FriendServiceEntityId = OperationParam("entityId");
const OperationParam OperationParam::FriendServiceExternalId = OperationParam("externalId");
const OperationParam OperationParam::FriendServiceProfileId = OperationParam("profileId");
const OperationParam OperationParam::FriendServiceFriendId = OperationParam("friendId");
const OperationParam OperationParam::FriendServiceEntityType = OperationParam("entityType");
const OperationParam OperationParam::FriendServiceEntitySubType = OperationParam("entitySubtype");
const OperationParam OperationParam::FriendServiceIncludeSummaryData = OperationParam("includeSummaryData");
const OperationParam OperationParam::FriendServiceReadPlayerStateFriendId = OperationParam("friendId");
const OperationParam OperationParam::FriendServiceSearchText = OperationParam("searchText");
const OperationParam OperationParam::FriendServiceMaxResults = OperationParam("maxResults");
const OperationParam OperationParam::FriendServiceFriendPlatform = OperationParam("friendPlatform");
const OperationParam OperationParam::FriendServiceProfileIds = OperationParam("profileIds");
const OperationParam OperationParam::ExternalAuthType = OperationParam("externalAuthType");

//Achievements Event Data Params
const OperationParam OperationParam::GamificationServiceAchievementsName = OperationParam("achievements");
const OperationParam OperationParam::GamificationServiceAchievementsData = OperationParam("data");
const OperationParam OperationParam::GamificationServiceAchievementsGranted = OperationParam("achievementsGranted");
const OperationParam OperationParam::GamificationServiceCategory = OperationParam("category");
const OperationParam OperationParam::GamificationServiceIncludeMetaData = OperationParam("includeMetaData");
const OperationParam OperationParam::GamificationServiceMilestonesName = OperationParam("milestones");

// Player Statistics Event Params
const OperationParam OperationParam::PlayerStatisticEventServiceEventName = OperationParam("eventName");
const OperationParam OperationParam::PlayerStatisticEventServiceEventMultiplier = OperationParam("eventMultiplier");
const OperationParam OperationParam::PlayerStatisticEventServiceEvents = OperationParam("events");

// Presence Params
const OperationParam OperationParam::PresenceServicePlatform = OperationParam("platform");
const OperationParam OperationParam::PresenceServiceIncludeOffline = OperationParam("includeOffline");
const OperationParam OperationParam::PresenceServiceGroupId = OperationParam("groupId");
const OperationParam OperationParam::PresenceServiceProfileIds = OperationParam("profileIds");
const OperationParam OperationParam::PresenceServiceBidirectional = OperationParam("bidirectional");
const OperationParam OperationParam::PresenceServiceVisible = OperationParam("visible");
const OperationParam OperationParam::PresenceServiceActivity = OperationParam("activity");

// Player State Service - Read Params
const OperationParam OperationParam::PlayerStateServiceReadEntitySubtype = OperationParam("entitySubType");

// Player State Service - Update Summary Params
const OperationParam OperationParam::PlayerStateServiceUpdateSummaryFriendData = OperationParam("summaryFriendData");

// Player State Service - Update Name Params
const OperationParam OperationParam::PlayerStateServiceUpdateNameData = OperationParam("playerName");

// Player State Service - Atributes
const OperationParam OperationParam::PlayerStateServiceAttributes = OperationParam("attributes");
const OperationParam OperationParam::PlayerStateServiceWipeExisting = OperationParam("wipeExisting");

// Player State Service - Atributes
const OperationParam OperationParam::PlayerStateServicePictureUrl = OperationParam("playerPictureUrl");
const OperationParam OperationParam::PlayerStateServiceContactEmail = OperationParam("contactEmail");

// Player Statistics Service - Update Increment Params
const OperationParam OperationParam::PlayerStatisticsServiceStats = OperationParam("statistics");
const OperationParam OperationParam::PlayerStatisticsServiceStatNames = OperationParam("statNames");
const OperationParam OperationParam::PlayerStatisticsExperiencePoints = OperationParam("xp_points");

// Player Statistics Service - Read Params
const OperationParam OperationParam::PlayerStatisticsServiceReadEntitySubType = OperationParam("entitySubType");

// Leaderboard Service - Get Leaderboard Params
const OperationParam OperationParam::LeaderboardServiceLeaderboardId = OperationParam("leaderboardId");
const OperationParam OperationParam::LeaderboardServiceLeaderboardIds = OperationParam("leaderboardIds");
const OperationParam OperationParam::LeaderboardServiceReplaceName = OperationParam("replaceName");
const OperationParam OperationParam::LeaderboardServiceScore = OperationParam("score");
const OperationParam OperationParam::LeaderboardServiceData = OperationParam("data");
const OperationParam OperationParam::LeaderboardServiceEventName = OperationParam("eventName");
const OperationParam OperationParam::LeaderboardServiceEventMultiplier = OperationParam("eventMultiplier");
const OperationParam OperationParam::LeaderboardServiceLeaderboardType = OperationParam("leaderboardType");
const OperationParam OperationParam::LeaderboardServiceRotationType = OperationParam("rotationType");
const OperationParam OperationParam::LeaderboardServiceRotationReset = OperationParam("rotationReset");
const OperationParam OperationParam::LeaderboardServiceRotationResetTime = OperationParam("rotationResetTime");
const OperationParam OperationParam::LeaderboardServiceRetainedCount = OperationParam("retainedCount");
const OperationParam OperationParam::LeaderboardServiceFetchType = OperationParam("fetchType");
const OperationParam OperationParam::LeaderboardServiceSortOrder = OperationParam("sort");
const OperationParam OperationParam::LeaderboardServiceMaxResults = OperationParam("maxResults");
const OperationParam OperationParam::LeaderboardServiceStartIndex = OperationParam("startIndex");
const OperationParam OperationParam::LeaderboardServiceEndIndex = OperationParam("endIndex");
const OperationParam OperationParam::LeaderboardServiceBeforeCount = OperationParam("beforeCount");
const OperationParam OperationParam::LeaderboardServiceAfterCount = OperationParam("afterCount");
const OperationParam OperationParam::LeaderboardServiceIncludeLeaderboardSize = OperationParam("includeLeaderboardSize");
const OperationParam OperationParam::LeaderboardServiceVersionId = OperationParam("versionId");
const OperationParam OperationParam::LeaderboardServiceLeaderboardResultCount = OperationParam("leaderboardResultCount");
const OperationParam OperationParam::ProfileIds = OperationParam("profileIds");
const OperationParam OperationParam::NumDaysToRotate = OperationParam("numDaysToRotate");

// Product service
const OperationParam OperationParam::ProductServiceVCId = OperationParam("vc_id");
const OperationParam OperationParam::ProductServiceVCAmount = OperationParam("vc_amount");

// Product Service - Get Inventory Params
const OperationParam OperationParam::ProductServiceGetInventoryPlatform = OperationParam("platform");
const OperationParam OperationParam::ProductServiceGetInventoryUserCurrency = OperationParam("user_currency");
const OperationParam OperationParam::ProductServiceGetInventoryCategory = OperationParam("category");

// Product Service - Op Cash In Receipt Params
const OperationParam OperationParam::ProductServiceOpCashInReceiptReceipt = OperationParam("receipt");
const OperationParam OperationParam::ProductServiceOpCashInReceiptUrl = OperationParam("url");

// Server Time Service - Read Params
const OperationParam OperationParam::ServerTimeServiceRead = OperationParam("");

// data creation parms
const OperationParam OperationParam::ServiceMessageService = OperationParam("service");
const OperationParam OperationParam::ServiceMessageOperation = OperationParam("operation");
const OperationParam OperationParam::ServiceMessageData = OperationParam("data");

// data bundle creation parms
const OperationParam OperationParam::ServiceMessagePacketId = OperationParam("packetId");
const OperationParam OperationParam::ServiceMessageProfileId = OperationParam("profileId");
const OperationParam OperationParam::ServiceMessageSessionId = OperationParam("sessionId");
const OperationParam OperationParam::ServiceMessageMessages = OperationParam("messages");

// Error Params
const OperationParam OperationParam::ServiceMessageReasonCode = OperationParam("reasoncode");
const OperationParam OperationParam::ServiceMessageStatusMessage = OperationParam("statusmessage");

// bad place to define these constants...
const OperationParam OperationParam::ReleasePlatformIos = OperationParam("IOS");
const OperationParam OperationParam::ReleasePlatformFacebook = OperationParam("FB");
const OperationParam OperationParam::ReleasePlatformBlackberry = OperationParam("BB");
const OperationParam OperationParam::ReleasePlatformGoogleAndroid = OperationParam("ANG");
const OperationParam OperationParam::ReleasePlatformWindowsPhone = OperationParam("WINP");
const OperationParam OperationParam::ReleasePlatformWindows = OperationParam("WINDOWS");
const OperationParam OperationParam::ReleasePlatformMac = OperationParam("MAC");
const OperationParam OperationParam::ReleasePlatformLinux = OperationParam("LINUX");

const OperationParam OperationParam::ScriptServiceRunScriptName = OperationParam("scriptName");
const OperationParam OperationParam::ScriptServiceRunScriptData = OperationParam("scriptData");
const OperationParam OperationParam::ScriptServiceStartDateUTC = OperationParam("startDateUTC");
const OperationParam OperationParam::ScriptServiceStartMinutesFromNow = OperationParam("minutesFromNow");
const OperationParam OperationParam::ScriptServiceJobId = OperationParam("jobId");

const OperationParam OperationParam::MatchMakingServicePlayerRating = OperationParam("playerRating");
const OperationParam OperationParam::MatchMakingServiceMinutes = OperationParam("minutes");
const OperationParam OperationParam::MatchMakingServiceRangeDelta = OperationParam("rangeDelta");
const OperationParam OperationParam::MatchMakingServiceNumMatches = OperationParam("numMatches");
const OperationParam OperationParam::MatchMakingServiceExtraParams = OperationParam("extraParms");
const OperationParam OperationParam::MatchMakingServiceAttributes = OperationParam("attributes");
const OperationParam OperationParam::MatchMakingServicePlayerId = OperationParam("playerId");
const OperationParam OperationParam::MatchMakingServicePlaybackStreamId = OperationParam("playbackStreamId");

const OperationParam OperationParam::OneWayMatchServicePlayerId = OperationParam("playerId");
const OperationParam OperationParam::OneWayMatchServiceRangeDelta = OperationParam("rangeDelta");
const OperationParam OperationParam::OneWayMatchServicePlaybackStreamId = OperationParam("playbackStreamId");

const OperationParam OperationParam::PlaybackStreamServicePlaybackStreamId = OperationParam("playbackStreamId");
const OperationParam OperationParam::PlaybackStreamServiceTargetPlayerId = OperationParam("targetPlayerId");
const OperationParam OperationParam::PlaybackStreamServiceInitiatingPlayerId = OperationParam("initiatingPlayerId");
const OperationParam OperationParam::PlaybackStreamServiceMaxNumberOfStreams = OperationParam("maxNumStreams");
const OperationParam OperationParam::PlaybackStreamServiceIncludeSharedData = OperationParam("includeSharedData");
const OperationParam OperationParam::PlaybackStreamServiceEventData = OperationParam("eventData");
const OperationParam OperationParam::PlaybackStreamServiceSummary = OperationParam("summary");

const OperationParam OperationParam::ProductServiceTransId = OperationParam("transId");
const OperationParam OperationParam::ProductServiceLanguage = OperationParam("language");
const OperationParam OperationParam::ProductServiceItemId = OperationParam("itemId");
const OperationParam OperationParam::ProductServiceReceipt = OperationParam("receipt");
const OperationParam OperationParam::ProductServiceOrderId = OperationParam("orderId");
const OperationParam OperationParam::ProductServiceProductId = OperationParam("productId");
const OperationParam OperationParam::ProductServiceToken = OperationParam("token");

// S3 handling service params
const OperationParam OperationParam::S3HandlingServiceCategory = OperationParam("category");
const OperationParam OperationParam::S3HandlingServiceFileDetails = OperationParam("fileDetails");
const OperationParam OperationParam::S3HandlingServiceFileId = OperationParam("fileId");

// Shared Identity params
const OperationParam OperationParam::AuthenticationServiceAuthenticationLevelName = OperationParam("levelName");
const OperationParam OperationParam::ScriptServiceParentLevelName = OperationParam("parentLevel");
const OperationParam OperationParam::PlayerStateServiceIncludeSummaryData = OperationParam("includePlayerSummaryData");
const OperationParam OperationParam::IdentityServiceForceSingleton = OperationParam("forceSingleton");

// Redemption Code
const OperationParam OperationParam::RedemptionCodeServiceScanCode = OperationParam("scanCode");
const OperationParam OperationParam::RedemptionCodeServiceCodeType = OperationParam("codeType");
const OperationParam OperationParam::RedemptionCodeServiceCustomRedemptionInfo = OperationParam("customRedemptionInfo");

// DataStream
const OperationParam OperationParam::DataStreamEventName = OperationParam("eventName");
const OperationParam OperationParam::DataStreamEventProperties = OperationParam("eventProperties");

// Profanity
const OperationParam OperationParam::ProfanityText = OperationParam("text");
const OperationParam OperationParam::ProfanityReplaceSymbol = OperationParam("replaceSymbol");
const OperationParam OperationParam::ProfanityFlagEmail = OperationParam("flagEmail");
const OperationParam OperationParam::ProfanityFlagPhone = OperationParam("flagPhone");
const OperationParam OperationParam::ProfanityFlagUrls = OperationParam("flagUrls");
const OperationParam OperationParam::ProfanityLanguages = OperationParam("languages");

// Upload
const OperationParam OperationParam::UploadLocalPath = OperationParam("localPath");
const OperationParam OperationParam::UploadCloudPath = OperationParam("cloudPath");
const OperationParam OperationParam::UploadCloudFilename = OperationParam("cloudFilename");
const OperationParam OperationParam::UploadShareable = OperationParam("shareable");
const OperationParam OperationParam::UploadReplaceIfExists = OperationParam("replaceIfExists");
const OperationParam OperationParam::UploadFileSize = OperationParam("fileSize");
const OperationParam OperationParam::UploadRecurse = OperationParam("recurse");

// Group
const OperationParam OperationParam::GroupId = OperationParam("groupId");
const OperationParam OperationParam::GroupProfileId = OperationParam("profileId");
const OperationParam OperationParam::GroupRole = OperationParam("role");
const OperationParam OperationParam::GroupAttributes = OperationParam("attributes");
const OperationParam OperationParam::GroupName = OperationParam("name");
const OperationParam OperationParam::GroupType = OperationParam("groupType");
const OperationParam OperationParam::GroupIsOpenGroup = OperationParam("isOpenGroup");
const OperationParam OperationParam::GroupAcl = OperationParam("acl");
const OperationParam OperationParam::GroupData = OperationParam("data");
const OperationParam OperationParam::GroupOwnerAttributes = OperationParam("ownerAttributes");
const OperationParam OperationParam::GroupDefaultMemberAttributes = OperationParam("defaultMemberAttributes");
const OperationParam OperationParam::GroupEntityType = OperationParam("entityType");
const OperationParam OperationParam::GroupIsOwnedByGroupMember = OperationParam("isOwnedByGroupMember");
const OperationParam OperationParam::GroupEntityId = OperationParam("entityId");
const OperationParam OperationParam::GroupVersion = OperationParam("version");
const OperationParam OperationParam::GroupContext = OperationParam("context");
const OperationParam OperationParam::GroupPageOffset = OperationParam("pageOffset");
const OperationParam OperationParam::GroupAutoJoinStrategy = OperationParam("autoJoinStrategy");
const OperationParam OperationParam::GroupWhere = OperationParam("where");

const OperationParam OperationParam::ProfileId = OperationParam("profileId");
const OperationParam OperationParam::EmailAddress = OperationParam("emailAddress");
const OperationParam OperationParam::Subject = OperationParam("subject");
const OperationParam OperationParam::Body = OperationParam("body");
const OperationParam OperationParam::ServiceParams = OperationParam("serviceParams");

const OperationParam OperationParam::LeaderboardId = OperationParam("leaderboardId");
const OperationParam OperationParam::DivSetId = OperationParam("divSetId");
const OperationParam OperationParam::VersionId = OperationParam("versionId");
const OperationParam OperationParam::TournamentCode = OperationParam("tournamentCode");
const OperationParam OperationParam::InitialScore = OperationParam("initialScore");
const OperationParam OperationParam::Score = OperationParam("score");
const OperationParam OperationParam::RoundStartedEpoch = OperationParam("roundStartedEpoch");
const OperationParam OperationParam::Data = OperationParam("data");

//virtual currency
const OperationParam OperationParam::VirtualCurrencyVcId = OperationParam("vcId");
const OperationParam OperationParam::VirtualCurrencyLevelName = OperationParam("levelName");
const OperationParam OperationParam::VirtualCurrencyPeerCode = OperationParam("peerCode");
const OperationParam OperationParam::VirtualCurrencyPriceInfoCriteria = OperationParam("priceInfoCriteria");
const OperationParam OperationParam::VirtualCurrencyAmount = OperationParam("vcAmount");

//app store
const OperationParam OperationParam::AppStoreId = OperationParam("storeId");
const OperationParam OperationParam::AppStoreJsonReceiptData = OperationParam("receiptData");
const OperationParam OperationParam::AppStoreUserCurrency = OperationParam("userCurrency");
const OperationParam OperationParam::AppStoreCategory = OperationParam("category");
const OperationParam OperationParam::AppStoreJsonPurchaseData = OperationParam("purchaseData");
const OperationParam OperationParam::AppStoreTransactionId = OperationParam("transactionId");
const OperationParam OperationParam::AppStoreJsonTransactionData = OperationParam("transactionData");
const OperationParam OperationParam::AppStorePriceInfoCriteria = OperationParam("priceInfoCriteria");

// chat
const OperationParam OperationParam::ChatChannelId = OperationParam("channelId");
const OperationParam OperationParam::ChatMaxReturn = OperationParam("maxReturn");
const OperationParam OperationParam::ChatMessageId = OperationParam("msgId");
const OperationParam OperationParam::ChatVersion = OperationParam("version");
const OperationParam OperationParam::ChatChannelType = OperationParam("channelType");
const OperationParam OperationParam::ChatChannelSubId = OperationParam("channelSubId");
const OperationParam OperationParam::ChatContent = OperationParam("content");
const OperationParam OperationParam::ChatText = OperationParam("text");
const OperationParam OperationParam::ChatRich = OperationParam("rich");
const OperationParam OperationParam::ChatRecordInHistory = OperationParam("recordInHisory");

// chat channel types
const OperationParam OperationParam::AllChannelType = OperationParam("all");
const OperationParam OperationParam::GlobalChannelType = OperationParam("gl");
const OperationParam OperationParam::GroupChannelType = OperationParam("gr");

// messaging
const OperationParam OperationParam::MessagingMessageBox = OperationParam("msgbox");
const OperationParam OperationParam::MessagingMessageIds = OperationParam("msgIds");
const OperationParam OperationParam::MessagingMarkAsRead = OperationParam("markAsRead");
const OperationParam OperationParam::MessagingContext = OperationParam("context");
const OperationParam OperationParam::MessagingPageOffset = OperationParam("pageOffset");
const OperationParam OperationParam::MessagingFromName = OperationParam("fromName");
const OperationParam OperationParam::MessagingToProfileIds = OperationParam("toProfileIds");
const OperationParam OperationParam::MessagingContent = OperationParam("contentJson");
const OperationParam OperationParam::MessagingSubject = OperationParam("subject");
const OperationParam OperationParam::MessagingText = OperationParam("text");
const OperationParam OperationParam::InboxMessageType = OperationParam("inbox");
const OperationParam OperationParam::SentMessageType = OperationParam("sent");

// lobby
const OperationParam OperationParam::LobbyRoomType = OperationParam("lobbyType");
const OperationParam OperationParam::LobbyRating = OperationParam("rating");
const OperationParam OperationParam::LobbyAlgorithm = OperationParam("algo");
const OperationParam OperationParam::LobbyMaxSteps = OperationParam("maxSteps");
const OperationParam OperationParam::LobbyStrategy = OperationParam("strategy");
const OperationParam OperationParam::LobbyAlignment = OperationParam("alignment");
const OperationParam OperationParam::LobbyRanges = OperationParam("ranges");
const OperationParam OperationParam::LobbyFilterJson = OperationParam("filterJson");
const OperationParam OperationParam::LobbySettings = OperationParam("settings");
const OperationParam OperationParam::LobbyTimeoutSeconds = OperationParam("timeoutSecs");
const OperationParam OperationParam::LobbyIsReady = OperationParam("isReady");
const OperationParam OperationParam::LobbyOtherUserCxIds = OperationParam("otherUserCxIds");
const OperationParam OperationParam::LobbyExtraJson = OperationParam("extraJson");
const OperationParam OperationParam::LobbyTeamCode = OperationParam("toTeamCode");
const OperationParam OperationParam::LobbyIdentifier = OperationParam("lobbyId");
const OperationParam OperationParam::LobbyToTeamName = OperationParam("toTeamCode");
const OperationParam OperationParam::LobbySignalData = OperationParam("signalData");
const OperationParam OperationParam::LobbyConnectionId = OperationParam("cxId");

bool OperationParam::operator==(const OperationParam &s) const
{
	return _value == s.getValue();
}

void OperationParam::operator=(const OperationParam &s)
{
	_value = s.getValue();
}

bool OperationParam::isOptionalParamValid(const FString &param)
{
	return param.Len() > 0;
}