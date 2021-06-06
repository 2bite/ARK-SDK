#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSpyglass_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapSpyglass.WeapSpyglass_C.ForceDisableCameraOverrides
struct AWeapSpyglass_C_ForceDisableCameraOverrides_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapSpyglass.WeapSpyglass_C.BPCanToggleAccessory
struct AWeapSpyglass_C_BPCanToggleAccessory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapSpyglass.WeapSpyglass_C.UserConstructionScript
struct AWeapSpyglass_C_UserConstructionScript_Params
{
};

// Function WeapSpyglass.WeapSpyglass_C.ExecuteUbergraph_WeapSpyglass
struct AWeapSpyglass_C_ExecuteUbergraph_WeapSpyglass_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
