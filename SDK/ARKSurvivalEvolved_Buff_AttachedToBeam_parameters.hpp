#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AttachedToBeam_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.BuffTickServer
struct ABuff_AttachedToBeam_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.UpdatePreventInstigatorAttack
struct ABuff_AttachedToBeam_C_UpdatePreventInstigatorAttack_Params
{
	class AActor*                                      ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.BPSetupForInstigator
struct ABuff_AttachedToBeam_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.DoStruggle
struct ABuff_AttachedToBeam_C_DoStruggle_Params
{
};

// Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.BPCheckPreventInput
struct ABuff_AttachedToBeam_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.UserConstructionScript
struct ABuff_AttachedToBeam_C_UserConstructionScript_Params
{
};

// Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.Server_Struggle
struct ABuff_AttachedToBeam_C_Server_Struggle_Params
{
};

// Function Buff_AttachedToBeam.Buff_AttachedToBeam_C.ExecuteUbergraph_Buff_AttachedToBeam
struct ABuff_AttachedToBeam_C_ExecuteUbergraph_Buff_AttachedToBeam_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
