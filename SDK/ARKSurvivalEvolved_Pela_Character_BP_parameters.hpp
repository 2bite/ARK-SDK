#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pela_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Pela_Character_BP.Pela_Character_BP_C.BP_ForceAllowMountedWeapon
struct APela_Character_BP_C_BP_ForceAllowMountedWeapon_Params
{
	class UClass**                                     WeaponTemplate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pela_Character_BP.Pela_Character_BP_C.GetDefaultPela
struct APela_Character_BP_C_GetDefaultPela_Params
{
	class APela_Character_BP_C*                        Default;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Pela_Character_BP.Pela_Character_BP_C.BPNotifyClearRider
struct APela_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pela_Character_BP.Pela_Character_BP_C.InterpCamera TPV
struct APela_Character_BP_C_InterpCamera_TPV_Params
{
	struct FVector                                     TargetOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pela_Character_BP.Pela_Character_BP_C.UserConstructionScript
struct APela_Character_BP_C_UserConstructionScript_Params
{
};

// Function Pela_Character_BP.Pela_Character_BP_C.ReceiveTick
struct APela_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pela_Character_BP.Pela_Character_BP_C.ExecuteUbergraph_Pela_Character_BP
struct APela_Character_BP_C_ExecuteUbergraph_Pela_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
