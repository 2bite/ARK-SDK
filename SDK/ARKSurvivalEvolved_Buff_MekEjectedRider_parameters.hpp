#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekEjectedRider_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MekEjectedRider.Buff_MekEjectedRider_C.BPOverrideCharacterNewFallVelocity
struct ABuff_MekEjectedRider_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MekEjectedRider.Buff_MekEjectedRider_C.UserConstructionScript
struct ABuff_MekEjectedRider_C_UserConstructionScript_Params
{
};

// Function Buff_MekEjectedRider.Buff_MekEjectedRider_C.ExecuteUbergraph_Buff_MekEjectedRider
struct ABuff_MekEjectedRider_C_ExecuteUbergraph_Buff_MekEjectedRider_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
