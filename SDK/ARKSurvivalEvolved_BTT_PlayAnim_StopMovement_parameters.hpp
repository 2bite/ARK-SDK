#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_PlayAnim_StopMovement_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTT_PlayAnim_StopMovement.BTT_PlayAnim_StopMovement_C.ReceiveExecute
struct UBTT_PlayAnim_StopMovement_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayAnim_StopMovement.BTT_PlayAnim_StopMovement_C.ReceiveTick
struct UBTT_PlayAnim_StopMovement_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayAnim_StopMovement.BTT_PlayAnim_StopMovement_C.ExecuteUbergraph_BTT_PlayAnim_StopMovement
struct UBTT_PlayAnim_StopMovement_C_ExecuteUbergraph_BTT_PlayAnim_StopMovement_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
