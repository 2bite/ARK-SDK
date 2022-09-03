#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_Fjordhawk_ReturnLoot_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C.GetHorizontalDistance
struct UBTT_Fjordhawk_ReturnLoot_C_GetHorizontalDistance_Params
{
	class AActor*                                      Actor1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C.ReceiveExecute
struct UBTT_Fjordhawk_ReturnLoot_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C.ExecuteUbergraph_BTT_Fjordhawk_ReturnLoot
struct UBTT_Fjordhawk_ReturnLoot_C_ExecuteUbergraph_BTT_Fjordhawk_ReturnLoot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
