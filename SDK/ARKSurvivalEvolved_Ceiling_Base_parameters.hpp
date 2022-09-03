#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ceiling_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ceiling_Base.Ceiling_Base_C.BPAllowSnapRotationForStructure
struct ACeiling_Base_C_BPAllowSnapRotationForStructure_Params
{
	int*                                               ThisSnapPointIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ThisSnapPointName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalStructure**                           OtherStructure;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OtherStructureSnapPointIndex;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      OtherStructureSnapPointName;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ceiling_Base.Ceiling_Base_C.UserConstructionScript
struct ACeiling_Base_C_UserConstructionScript_Params
{
};

// Function Ceiling_Base.Ceiling_Base_C.ExecuteUbergraph_Ceiling_Base
struct ACeiling_Base_C_ExecuteUbergraph_Ceiling_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
