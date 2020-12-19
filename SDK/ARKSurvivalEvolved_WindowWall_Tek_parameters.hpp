#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WindowWall_Tek_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WindowWall_Tek.WindowWall_Tek_C.BPAllowSnappingWith
struct AWindowWall_Tek_C_BPAllowSnappingWith_Params
{
	class APrimalStructure**                           OtherStructure;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WindowWall_Tek.WindowWall_Tek_C.UserConstructionScript
struct AWindowWall_Tek_C_UserConstructionScript_Params
{
};

// Function WindowWall_Tek.WindowWall_Tek_C.ExecuteUbergraph_WindowWall_Tek
struct AWindowWall_Tek_C_ExecuteUbergraph_WindowWall_Tek_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
