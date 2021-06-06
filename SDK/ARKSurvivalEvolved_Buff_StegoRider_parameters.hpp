#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_StegoRider_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_StegoRider.Buff_StegoRider_C.BPPreventAddingOtherBuff
struct ABuff_StegoRider_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_StegoRider.Buff_StegoRider_C.BPNotifyPreventDismounting
struct ABuff_StegoRider_C_BPNotifyPreventDismounting_Params
{
	class APrimalDinoCharacter**                       FromDino;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StegoRider.Buff_StegoRider_C.UserConstructionScript
struct ABuff_StegoRider_C_UserConstructionScript_Params
{
};

// Function Buff_StegoRider.Buff_StegoRider_C.ExecuteUbergraph_Buff_StegoRider
struct ABuff_StegoRider_C_ExecuteUbergraph_Buff_StegoRider_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
