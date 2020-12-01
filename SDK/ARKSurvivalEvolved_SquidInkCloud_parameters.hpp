#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SquidInkCloud_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SquidInkCloud.SquidInkCloud_C.BPCustomAllowAddBuff
struct ASquidInkCloud_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SquidInkCloud.SquidInkCloud_C.UserConstructionScript
struct ASquidInkCloud_C_UserConstructionScript_Params
{
};

// Function SquidInkCloud.SquidInkCloud_C.ExecuteUbergraph_SquidInkCloud
struct ASquidInkCloud_C_ExecuteUbergraph_SquidInkCloud_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
