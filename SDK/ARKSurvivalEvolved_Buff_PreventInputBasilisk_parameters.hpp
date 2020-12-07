#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventInputBasilisk_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PreventInputBasilisk.Buff_PreventInputBasilisk_C.BPDeactivated
struct ABuff_PreventInputBasilisk_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PreventInputBasilisk.Buff_PreventInputBasilisk_C.BPSetupForInstigator
struct ABuff_PreventInputBasilisk_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PreventInputBasilisk.Buff_PreventInputBasilisk_C.BPPreventFirstPerson
struct ABuff_PreventInputBasilisk_C_BPPreventFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PreventInputBasilisk.Buff_PreventInputBasilisk_C.UserConstructionScript
struct ABuff_PreventInputBasilisk_C_UserConstructionScript_Params
{
};

// Function Buff_PreventInputBasilisk.Buff_PreventInputBasilisk_C.ExecuteUbergraph_Buff_PreventInputBasilisk
struct ABuff_PreventInputBasilisk_C_ExecuteUbergraph_Buff_PreventInputBasilisk_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
