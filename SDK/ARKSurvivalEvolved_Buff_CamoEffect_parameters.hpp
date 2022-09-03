#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CamoEffect_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_CamoEffect.Buff_CamoEffect_C.Add Immune Actor
struct ABuff_CamoEffect_C_Add_Immune_Actor_Params
{
	class AActor*                                      Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CamoEffect.Buff_CamoEffect_C.PreventActorTargeting
struct ABuff_CamoEffect_C_PreventActorTargeting_Params
{
	class AActor**                                     ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_CamoEffect.Buff_CamoEffect_C.UserConstructionScript
struct ABuff_CamoEffect_C_UserConstructionScript_Params
{
};

// Function Buff_CamoEffect.Buff_CamoEffect_C.ExecuteUbergraph_Buff_CamoEffect
struct ABuff_CamoEffect_C_ExecuteUbergraph_Buff_CamoEffect_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
