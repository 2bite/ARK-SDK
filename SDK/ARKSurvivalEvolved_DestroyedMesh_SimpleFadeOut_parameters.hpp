#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DestroyedMesh_SimpleFadeOut_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.SetFadingSkeletalMesh
struct ADestroyedMesh_SimpleFadeOut_C_SetFadingSkeletalMesh_Params
{
	class USkeletalMesh**                              TheMesh;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.SetFadingStaticMesh
struct ADestroyedMesh_SimpleFadeOut_C_SetFadingStaticMesh_Params
{
	class UStaticMesh**                                TheMesh;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.GetFadingMeshComponent
struct ADestroyedMesh_SimpleFadeOut_C_GetFadingMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.UserConstructionScript
struct ADestroyedMesh_SimpleFadeOut_C_UserConstructionScript_Params
{
};

// Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.ReceiveTick
struct ADestroyedMesh_SimpleFadeOut_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DestroyedMesh_SimpleFadeOut.DestroyedMesh_SimpleFadeOut_C.ExecuteUbergraph_DestroyedMesh_SimpleFadeOut
struct ADestroyedMesh_SimpleFadeOut_C_ExecuteUbergraph_DestroyedMesh_SimpleFadeOut_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
