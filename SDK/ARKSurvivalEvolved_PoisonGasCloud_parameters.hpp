#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PoisonGasCloud_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PoisonGasCloud.PoisonGasCloud_C.BPCustomAllowAddBuff
struct APoisonGasCloud_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PoisonGasCloud.PoisonGasCloud_C.UserConstructionScript
struct APoisonGasCloud_C_UserConstructionScript_Params
{
};

// Function PoisonGasCloud.PoisonGasCloud_C.ExecuteUbergraph_PoisonGasCloud
struct APoisonGasCloud_C_ExecuteUbergraph_PoisonGasCloud_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
