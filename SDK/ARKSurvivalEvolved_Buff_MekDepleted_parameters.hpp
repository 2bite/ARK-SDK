#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekDepleted_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MekDepleted.Buff_MekDepleted_C.BuffTickServer
struct ABuff_MekDepleted_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekDepleted.Buff_MekDepleted_C.BPCustomAllowAddBuff
struct ABuff_MekDepleted_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MekDepleted.Buff_MekDepleted_C.BPDeactivated
struct ABuff_MekDepleted_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekDepleted.Buff_MekDepleted_C.BPSetupForInstigator
struct ABuff_MekDepleted_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekDepleted.Buff_MekDepleted_C.UserConstructionScript
struct ABuff_MekDepleted_C_UserConstructionScript_Params
{
};

// Function Buff_MekDepleted.Buff_MekDepleted_C.DepleteMek__FinishedFunc
struct ABuff_MekDepleted_C_DepleteMek__FinishedFunc_Params
{
};

// Function Buff_MekDepleted.Buff_MekDepleted_C.DepleteMek__UpdateFunc
struct ABuff_MekDepleted_C_DepleteMek__UpdateFunc_Params
{
};

// Function Buff_MekDepleted.Buff_MekDepleted_C.MultiStartDepleteMek
struct ABuff_MekDepleted_C_MultiStartDepleteMek_Params
{
};

// Function Buff_MekDepleted.Buff_MekDepleted_C.AutoDepleteMek
struct ABuff_MekDepleted_C_AutoDepleteMek_Params
{
};

// Function Buff_MekDepleted.Buff_MekDepleted_C.ExecuteUbergraph_Buff_MekDepleted
struct ABuff_MekDepleted_C_ExecuteUbergraph_Buff_MekDepleted_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
