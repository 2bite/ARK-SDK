#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basic.hpp"
#include "ARKSurvivalEvolved_CoreUObject_classes.hpp"
#include "ARKSurvivalEvolved_Engine_classes.hpp"
#include "ARKSurvivalEvolved_OnlineSubsystem_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystemUtils.PartyBeaconState.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	EPartyReservationResult__RequestPending = 0,
	EPartyReservationResult__GeneralError = 1,
	EPartyReservationResult__PartyLimitReached = 2,
	EPartyReservationResult__IncorrectPlayerCount = 3,
	EPartyReservationResult__RequestTimedOut = 4,
	EPartyReservationResult__ReservationDuplicate = 5,
	EPartyReservationResult__ReservationNotFound = 6,
	EPartyReservationResult__ReservationAccepted = 7,
	EPartyReservationResult__ReservationDenied = 8,
	EPartyReservationResult__ReservationDenied_Banned = 9,
	EPartyReservationResult__ReservationRequestCanceled = 10,
	EPartyReservationResult__EPartyReservationResult_MAX = 11
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemUtils.PartyBeaconState.PlayerReservation
// 0x0028
struct FPlayerReservation
{
	struct FUniqueNetIdRepl                            UniqueID;                                                 // 0x0000(0x0010) (Transient)
	class FString                                      ValidationStr;                                            // 0x0010(0x0010) (ZeroConstructor, Transient)
	float                                              ElapsedTime;                                              // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.PartyBeaconState.PartyReservation
// 0x0028
struct FPartyReservation
{
	int                                                TeamNum;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FUniqueNetIdRepl                            PartyLeader;                                              // 0x0008(0x0010) (Transient)
	TArray<struct FPlayerReservation>                  PartyMembers;                                             // 0x0018(0x0010) (ZeroConstructor, Transient)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
