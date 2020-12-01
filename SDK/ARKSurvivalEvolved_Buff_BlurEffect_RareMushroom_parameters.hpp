#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BlurEffect_RareMushroom_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_BlurEffect_RareMushroom.Buff_BlurEffect_RareMushroom_C.BPCustomAllowAddBuff
struct ABuff_BlurEffect_RareMushroom_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BlurEffect_RareMushroom.Buff_BlurEffect_RareMushroom_C.UserConstructionScript
struct ABuff_BlurEffect_RareMushroom_C_UserConstructionScript_Params
{
};

// Function Buff_BlurEffect_RareMushroom.Buff_BlurEffect_RareMushroom_C.ExecuteUbergraph_Buff_BlurEffect_RareMushroom
struct ABuff_BlurEffect_RareMushroom_C_ExecuteUbergraph_Buff_BlurEffect_RareMushroom_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
