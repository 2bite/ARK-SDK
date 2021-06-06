#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_UberpounceTag_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UberpounceTag.UberpounceTag_C.ReceiveTick
struct AUberpounceTag_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UberpounceTag.UberpounceTag_C.UserConstructionScript
struct AUberpounceTag_C_UserConstructionScript_Params
{
};

// Function UberpounceTag.UberpounceTag_C.ExecuteUbergraph_UberpounceTag
struct AUberpounceTag_C_ExecuteUbergraph_UberpounceTag_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
