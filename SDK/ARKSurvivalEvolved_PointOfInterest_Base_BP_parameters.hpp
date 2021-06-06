#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PointOfInterest_Base_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PointOfInterest_Base_BP.PointOfInterest_Base_BP_C.GetPointOfInterestData
struct APointOfInterest_Base_BP_C_GetPointOfInterestData_Params
{
	struct FPointOfInterestData                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PointOfInterest_Base_BP.PointOfInterest_Base_BP_C.UserConstructionScript
struct APointOfInterest_Base_BP_C_UserConstructionScript_Params
{
};

// Function PointOfInterest_Base_BP.PointOfInterest_Base_BP_C.ExecuteUbergraph_PointOfInterest_Base_BP
struct APointOfInterest_Base_BP_C_ExecuteUbergraph_PointOfInterest_Base_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
