#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvern_Character_BP_WS_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.SpawnWaterOverlapVFX
struct ACrystalWyvern_Character_BP_WS_C_SpawnWaterOverlapVFX_Params
{
	class AActor*                                      WaterActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.UserConstructionScript
struct ACrystalWyvern_Character_BP_WS_C_UserConstructionScript_Params
{
};

// Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.ReceiveActorBeginOverlap
struct ACrystalWyvern_Character_BP_WS_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.ReceiveActorEndOverlap
struct ACrystalWyvern_Character_BP_WS_C_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.Multi_UpdateBuffTime
struct ACrystalWyvern_Character_BP_WS_C_Multi_UpdateBuffTime_Params
{
	bool                                               bIsActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CrystalWyvern_Character_BP_WS.CrystalWyvern_Character_BP_WS_C.ExecuteUbergraph_CrystalWyvern_Character_BP_WS
struct ACrystalWyvern_Character_BP_WS_C_ExecuteUbergraph_CrystalWyvern_Character_BP_WS_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
