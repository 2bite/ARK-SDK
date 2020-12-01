#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Doorframe_Tek_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Doorframe_Tek.Doorframe_Tek_C.BPAllowSnappingWith
struct ADoorframe_Tek_C_BPAllowSnappingWith_Params
{
	class APrimalStructure**                           OtherStructure;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Doorframe_Tek.Doorframe_Tek_C.UserConstructionScript
struct ADoorframe_Tek_C_UserConstructionScript_Params
{
};

// Function Doorframe_Tek.Doorframe_Tek_C.ExecuteUbergraph_Doorframe_Tek
struct ADoorframe_Tek_C_ExecuteUbergraph_Doorframe_Tek_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
