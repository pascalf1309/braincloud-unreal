// Copyright 2018 bitHeads, Inc. All Rights Reserved.

#pragma once

class BrainCloudClient;
class IServerCallback;

class BCCLIENTPLUGIN_API BrainCloudUtil
{
  public:
    BrainCloudUtil(BrainCloudClient *client);

    static int64 ToUTCEpochTime(FDateTime dateTime);
    static FDateTime ToDateTimeFromUTCEpoch(int64 utcDateTime);
      
  private:
    BrainCloudClient *_client = nullptr;
};
