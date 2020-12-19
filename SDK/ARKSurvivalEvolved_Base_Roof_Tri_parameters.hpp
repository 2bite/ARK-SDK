#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Roof_Tri_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Base_Roof_Tri.Base_Roof_Tri_C.IsValidSnapPointTo
struct ABase_Roof_Tri_C_IsValidSnapPointTo_Params
{
	class APrimalStructure**                           childStructure;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MySnapPointToIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Base_Roof_Tri.Base_Roof_Tri_C.BPOverrideSnappedToTransform
struct ABase_Roof_Tri_C_BPOverrideSnappedToTransform_Params
{
	class APrimalStructure**                           childStructure;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ChildSnapFromIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ChildSnapFromName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    UnsnappedPlacementPos;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   UnsnappedPlacementRot;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    SnappedPlacementPos;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   SnappedPlacementRot;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SnapToIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SnapToName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                bForceInvalidateSnap;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Base_Roof_Tri.Base_Roof_Tri_C.UserConstructionScript
struct ABase_Roof_Tri_C_UserConstructionScript_Params
{
};

// Function Base_Roof_Tri.Base_Roof_Tri_C.ExecuteUbergraph_Base_Roof_Tri
struct ABase_Roof_Tri_C_ExecuteUbergraph_Base_Roof_Tri_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
