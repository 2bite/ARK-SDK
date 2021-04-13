#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TestGameMode_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TestGameMode.TestGameMode_C.BPPreSpawnedDino
struct ATestGameMode_C_BPPreSpawnedDino_Params
{
	class APrimalDinoCharacter**                       theDino;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TestGameMode.TestGameMode_C.UserConstructionScript
struct ATestGameMode_C_UserConstructionScript_Params
{
};

// Function TestGameMode.TestGameMode_C.ReceiveBeginPlay
struct ATestGameMode_C_ReceiveBeginPlay_Params
{
};

// Function TestGameMode.TestGameMode_C.OnShooterCharacterSpawned_Event
struct ATestGameMode_C_OnShooterCharacterSpawned_Event_Params
{
	class AShooterCharacter*                           TheShooterCharacter;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TestGameMode.TestGameMode_C.ReceiveTick
struct ATestGameMode_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TestGameMode.TestGameMode_C.ExecuteUbergraph_TestGameMode
struct ATestGameMode_C_ExecuteUbergraph_TestGameMode_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
