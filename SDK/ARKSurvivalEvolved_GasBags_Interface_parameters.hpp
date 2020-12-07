#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GasBags_Interface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GasBags_Interface.GasBags_Interface_C.ModifyInflationValue
struct UGasBags_Interface_C_ModifyInflationValue_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DeltaIsPercent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Subtract;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewInflationPercent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GasBags_Interface.GasBags_Interface_C.GetInflationValue
struct UGasBags_Interface_C_GetInflationValue_Params
{
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
