#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OnlineSubsystemUtils_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemUtils.OnlineSessionClient
// 0x00D8 (0x0100 - 0x0028)
class UOnlineSessionClient : public UOnlineSession
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET
	bool                                               bIsFromInvite;                                            // 0x00F8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHandlingDisconnect;                                      // 0x00F9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00FA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineSessionClient");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementBlueprintLibrary");
		return ptr;
	}


	void GetCachedAchievementProgress(class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, float* Progress);
	void GetCachedAchievementDescription(class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden);
};


// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// 0x0088 (0x00B0 - 0x0028)
class UInAppPurchaseCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0048(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy");
		return ptr;
	}


	void InAppPurchaseResult__DelegateSignature(TEnumAsByte<EInAppPurchaseState> CompletionStatus, const struct FInAppPurchaseProductInfo& InAppPurchaseInformation);
	class UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const class FString& ProductIdentifier);
};


// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// 0x0058 (0x0080 - 0x0028)
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy");
		return ptr;
	}


	void InAppPurchaseQueryResult__DelegateSignature(TArray<struct FInAppPurchaseProductInfo> InAppPurchaseInformation);
	class UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<class FString> ProductIdentifiers);
};


// Class OnlineSubsystemUtils.IpConnection
// 0x0020 (0x34328 - 0x34308)
class UIpConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x34308(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpConnection");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.IpNetDriver
// 0x0020 (0x03C0 - 0x03A0)
class UIpNetDriver : public UNetDriver
{
public:
	unsigned char                                      LogPortUnreach : 1;                                       // 0x03A0(0x0001) (Config)
	unsigned char                                      AllowPlayerPortUnreach : 1;                               // 0x03A0(0x0001) (Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	uint32_t                                           MaxPortCountToTry;                                        // 0x03A4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x03A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpNetDriver");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary");
		return ptr;
	}


	bool WriteLeaderboardInteger(class APlayerController* PlayerController, const struct FName& StatName, int StatValue);
};


// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// 0x0030 (0x0058 - 0x0028)
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy");
		return ptr;
	}


	void OnLeaderboardFlushed__DelegateSignature(const struct FName& SessionName);
	class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, const struct FName& SessionName);
};


// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// 0x0058 (0x0080 - 0x0028)
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy");
		return ptr;
	}


	void LeaderboardQueryResult__DelegateSignature(int LeaderboardValue);
	class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const struct FName& StatName);
};


// Class OnlineSubsystemUtils.OnlineBeacon
// 0x0028 (0x0490 - 0x0468)
class AOnlineBeacon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET
	class UNetDriver*                                  NetDriver;                                                // 0x0470(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BeaconNetDriverName;                                      // 0x0478(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	class UNetConnection*                              BeaconConnection;                                         // 0x0480(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0488(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeacon");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineBeaconClient
// 0x0008 (0x0498 - 0x0490)
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	class AOnlineBeaconHostObject*                     BeaconOwner;                                              // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconClient");
		return ptr;
	}


	void ClientOnConnected();
};


// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// 0x0010 (0x0478 - 0x0468)
class AOnlineBeaconHostObject : public AActor
{
public:
	class FString                                      BeaconTypeName;                                           // 0x0468(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHostObject");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineBeaconHost
// 0x00B8 (0x0548 - 0x0490)
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int                                                ListenPort;                                               // 0x0490(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                             // 0x0498(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x04A8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHost");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.PartyBeaconState
// 0x0040 (0x0068 - 0x0028)
class UPartyBeaconState : public UObject
{
public:
	struct FName                                       SessionName;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumConsumedReservations;                                  // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MaxReservations;                                          // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumTeams;                                                 // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumPlayersPerTeam;                                        // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ReservedHostTeamNum;                                      // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ForceTeamNum;                                             // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FPartyReservation>                   Reservations;                                             // 0x0048(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconState");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.PartyBeaconHost
// 0x0048 (0x04C0 - 0x0478)
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                           State;                                                    // 0x0478(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                             // 0x0480(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0490(0x0028) MISSED OFFSET
	float                                              SessionTimeoutSecs;                                       // 0x04B8(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	float                                              TravelSessionTimeoutSecs;                                 // 0x04BC(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconHost");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.PartyBeaconClient
// 0x0050 (0x04E8 - 0x0498)
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0498(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconClient");
		return ptr;
	}


	void ServerReservationRequest(const class FString& SessionId, const struct FPartyReservation& Reservation);
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader);
	void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);
};


// Class OnlineSubsystemUtils.TestBeaconClient
// 0x0000 (0x0498 - 0x0498)
class ATestBeaconClient : public AOnlineBeaconClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconClient");
		return ptr;
	}


	void ServerPong();
	void ClientPing();
};


// Class OnlineSubsystemUtils.TestBeaconHost
// 0x0000 (0x0478 - 0x0478)
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconHost");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineBlueprintCallProxyBase
// 0x0000 (0x0028 - 0x0028)
class UOnlineBlueprintCallProxyBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBlueprintCallProxyBase");
		return ptr;
	}


	void EmptyOnlineDelegate__DelegateSignature();
	void Activate();
};


// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// 0x0030 (0x0058 - 0x0028)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementQueryCallbackProxy");
		return ptr;
	}


	class UAchievementQueryCallbackProxy* CacheAchievements(class APlayerController* PlayerController);
	class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class APlayerController* PlayerController);
};


// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementWriteCallbackProxy");
		return ptr;
	}


	class UAchievementWriteCallbackProxy* WriteAchievementProgress(class APlayerController* PlayerController, const struct FName& AchievementName, float Progress, int UserTag);
	void AchievementWriteDelegate__DelegateSignature(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
};


// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// 0x0030 (0x0058 - 0x0028)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.ConnectionCallbackProxy");
		return ptr;
	}


	void OnlineConnectionResult__DelegateSignature(int ErrorCode);
	class UConnectionCallbackProxy* ConnectToService(class APlayerController* PlayerController);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
