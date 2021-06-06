#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Floor_Base_SM_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Floor_Base_SM.Floor_Base_SM_C.BPAllowSnapRotationForStructure
struct AFloor_Base_SM_C_BPAllowSnapRotationForStructure_Params
{
	int*                                               ThisSnapPointIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ThisSnapPointName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalStructure**                           OtherStructure;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OtherStructureSnapPointIndex;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      OtherStructureSnapPointName;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Floor_Base_SM.Floor_Base_SM_C.UserConstructionScript
struct AFloor_Base_SM_C_UserConstructionScript_Params
{
};

// Function Floor_Base_SM.Floor_Base_SM_C.ExecuteUbergraph_Floor_Base_SM
struct AFloor_Base_SM_C_ExecuteUbergraph_Floor_Base_SM_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
