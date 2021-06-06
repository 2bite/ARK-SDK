#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Electrocuted_eelTamed_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Electrocuted_eelTamed.Buff_Electrocuted_eelTamed_C.BPPreSetupForInstigator
struct ABuff_Electrocuted_eelTamed_C_BPPreSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Electrocuted_eelTamed.Buff_Electrocuted_eelTamed_C.BPSetupForInstigator
struct ABuff_Electrocuted_eelTamed_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Electrocuted_eelTamed.Buff_Electrocuted_eelTamed_C.BPActivated
struct ABuff_Electrocuted_eelTamed_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Electrocuted_eelTamed.Buff_Electrocuted_eelTamed_C.BPCustomAllowAddBuff
struct ABuff_Electrocuted_eelTamed_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Electrocuted_eelTamed.Buff_Electrocuted_eelTamed_C.BPPreventAddingOtherBuff
struct ABuff_Electrocuted_eelTamed_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Electrocuted_eelTamed.Buff_Electrocuted_eelTamed_C.BPDeactivated
struct ABuff_Electrocuted_eelTamed_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Electrocuted_eelTamed.Buff_Electrocuted_eelTamed_C.UserConstructionScript
struct ABuff_Electrocuted_eelTamed_C_UserConstructionScript_Params
{
};

// Function Buff_Electrocuted_eelTamed.Buff_Electrocuted_eelTamed_C.ExecuteUbergraph_Buff_Electrocuted_eelTamed
struct ABuff_Electrocuted_eelTamed_C_ExecuteUbergraph_Buff_Electrocuted_eelTamed_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
