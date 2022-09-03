#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_MoveAroundTarget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.GetPointsAroundTarget
struct UBTT_MoveAroundTarget_C_GetPointsAroundTarget_Params
{
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLoc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.ReceiveTick
struct UBTT_MoveAroundTarget_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.ReceiveExecute
struct UBTT_MoveAroundTarget_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveAroundTarget.BTT_MoveAroundTarget_C.ExecuteUbergraph_BTT_MoveAroundTarget
struct UBTT_MoveAroundTarget_C_ExecuteUbergraph_BTT_MoveAroundTarget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
