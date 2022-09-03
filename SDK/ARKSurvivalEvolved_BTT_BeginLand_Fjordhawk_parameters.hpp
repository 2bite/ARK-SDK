#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_BeginLand_Fjordhawk_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.ReceiveExecute
struct UBTT_BeginLand_Fjordhawk_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.ReceiveTick
struct UBTT_BeginLand_Fjordhawk_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.StartLanding
struct UBTT_BeginLand_Fjordhawk_C_StartLanding_Params
{
	class AFjordhawk_Character_BP_C*                   Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AFjordhawk_AIController_BP_C*                Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_BeginLand_Fjordhawk.BTT_BeginLand_Fjordhawk_C.ExecuteUbergraph_BTT_BeginLand_Fjordhawk
struct UBTT_BeginLand_Fjordhawk_C_ExecuteUbergraph_BTT_BeginLand_Fjordhawk_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
