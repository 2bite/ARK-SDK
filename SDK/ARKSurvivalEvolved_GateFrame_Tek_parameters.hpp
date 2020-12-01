#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GateFrame_Tek_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GateFrame_Tek.GateFrame_Tek_C.BPAllowSnappingWith
struct AGateFrame_Tek_C_BPAllowSnappingWith_Params
{
	class APrimalStructure**                           OtherStructure;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GateFrame_Tek.GateFrame_Tek_C.UserConstructionScript
struct AGateFrame_Tek_C_UserConstructionScript_Params
{
};

// Function GateFrame_Tek.GateFrame_Tek_C.ExecuteUbergraph_GateFrame_Tek
struct AGateFrame_Tek_C_ExecuteUbergraph_GateFrame_Tek_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
