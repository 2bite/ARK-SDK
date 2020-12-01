#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OnlineSubsystemUtils_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
struct UAchievementBlueprintLibrary_GetCachedAchievementProgress_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AchievementID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
struct UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AchievementID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm, OutParm)
	struct FText                                       LockedDescription;                                        // (Parm, OutParm)
	struct FText                                       UnlockedDescription;                                      // (Parm, OutParm)
	bool                                               bHidden;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.InAppPurchaseResult__DelegateSignature
struct UInAppPurchaseCallbackProxy_InAppPurchaseResult__DelegateSignature_Params
{
	TEnumAsByte<EInAppPurchaseState>                   CompletionStatus;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInAppPurchaseProductInfo                   InAppPurchaseInformation;                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
struct UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ProductIdentifier;                                        // (Parm, ZeroConstructor)
	class UInAppPurchaseCallbackProxy*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.InAppPurchaseQueryResult__DelegateSignature
struct UInAppPurchaseQueryCallbackProxy_InAppPurchaseQueryResult__DelegateSignature_Params
{
	TArray<struct FInAppPurchaseProductInfo>           InAppPurchaseInformation;                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
struct UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              ProductIdentifiers;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UInAppPurchaseQueryCallbackProxy*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
struct ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StatValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.OnLeaderboardFlushed__DelegateSignature
struct ULeaderboardFlushCallbackProxy_OnLeaderboardFlushed__DelegateSignature_Params
{
	struct FName                                       SessionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
struct ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SessionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ULeaderboardFlushCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.LeaderboardQueryResult__DelegateSignature
struct ULeaderboardQueryCallbackProxy_LeaderboardQueryResult__DelegateSignature_Params
{
	int                                                LeaderboardValue;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
struct ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ULeaderboardQueryCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
struct AOnlineBeaconClient_ClientOnConnected_Params
{
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
struct APartyBeaconClient_ServerReservationRequest_Params
{
	class FString                                      SessionId;                                                // (Parm, ZeroConstructor)
	struct FPartyReservation                           Reservation;                                              // (Parm)
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
struct APartyBeaconClient_ServerCancelReservationRequest_Params
{
	struct FUniqueNetIdRepl                            PartyLeader;                                              // (Parm)
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
struct APartyBeaconClient_ClientReservationResponse_Params
{
	TEnumAsByte<EPartyReservationResult>               ReservationResponse;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
struct ATestBeaconClient_ServerPong_Params
{
};

// Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
struct ATestBeaconClient_ClientPing_Params
{
};

// Function OnlineSubsystemUtils.OnlineBlueprintCallProxyBase.EmptyOnlineDelegate__DelegateSignature
struct UOnlineBlueprintCallProxyBase_EmptyOnlineDelegate__DelegateSignature_Params
{
};

// Function OnlineSubsystemUtils.OnlineBlueprintCallProxyBase.Activate
struct UOnlineBlueprintCallProxyBase_Activate_Params
{
};

// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
struct UAchievementQueryCallbackProxy_CacheAchievements_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAchievementQueryCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
struct UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAchievementQueryCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
struct UAchievementWriteCallbackProxy_WriteAchievementProgress_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AchievementName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UserTag;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAchievementWriteCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.AchievementWriteDelegate__DelegateSignature
struct UAchievementWriteCallbackProxy_AchievementWriteDelegate__DelegateSignature_Params
{
	struct FName                                       WrittenAchievementName;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WrittenProgress;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WrittenUserTag;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.ConnectionCallbackProxy.OnlineConnectionResult__DelegateSignature
struct UConnectionCallbackProxy_OnlineConnectionResult__DelegateSignature_Params
{
	int                                                ErrorCode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
struct UConnectionCallbackProxy_ConnectToService_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UConnectionCallbackProxy*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
