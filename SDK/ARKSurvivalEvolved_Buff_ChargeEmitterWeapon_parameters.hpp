#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitterWeapon_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.IsWeaponFiring
struct ABuff_ChargeEmitterWeapon_C_IsWeaponFiring_Params
{
	bool                                               IsFiring;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.InitializeEmitter
struct ABuff_ChargeEmitterWeapon_C_InitializeEmitter_Params
{
};

// Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.GetEmitterForwardVector
struct ABuff_ChargeEmitterWeapon_C_GetEmitterForwardVector_Params
{
	struct FVector                                     ForwardVector;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.CanEmitCharge
struct ABuff_ChargeEmitterWeapon_C_CanEmitCharge_Params
{
	bool                                               canEmit;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.UserConstructionScript
struct ABuff_ChargeEmitterWeapon_C_UserConstructionScript_Params
{
};

// Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.DebugVector
struct ABuff_ChargeEmitterWeapon_C_DebugVector_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewParam1;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.DebugSphere
struct ABuff_ChargeEmitterWeapon_C_DebugSphere_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                NewParam1;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C.ExecuteUbergraph_Buff_ChargeEmitterWeapon
struct ABuff_ChargeEmitterWeapon_C_ExecuteUbergraph_Buff_ChargeEmitterWeapon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
