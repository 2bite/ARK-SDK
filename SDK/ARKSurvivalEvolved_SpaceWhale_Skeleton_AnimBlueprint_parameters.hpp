#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceWhale_Skeleton_AnimBlueprint_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C.GetFlyingBlendspaceCoords
struct USpaceWhale_Skeleton_AnimBlueprint_C_GetFlyingBlendspaceCoords_Params
{
	class APrimalDinoCharacter**                       ForDino;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BlendspaceCoords;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
struct USpaceWhale_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpaceWhale_Skeleton_AnimBlueprint.SpaceWhale_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SpaceWhale_Skeleton_AnimBlueprint
struct USpaceWhale_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SpaceWhale_Skeleton_AnimBlueprint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
