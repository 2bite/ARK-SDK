#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Griffin_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Griffin_Character_BP.Griffin_Character_BP_C.UpdateDivingFX
struct AGriffin_Character_BP_C_UpdateDivingFX_Params
{
};

// Function Griffin_Character_BP.Griffin_Character_BP_C.OnDiveSwipe
struct AGriffin_Character_BP_C_OnDiveSwipe_Params
{
};

// Function Griffin_Character_BP.Griffin_Character_BP_C.Update WindMaterial
struct AGriffin_Character_BP_C_Update_WindMaterial_Params
{
};

// Function Griffin_Character_BP.Griffin_Character_BP_C.Update Trail Particle System
struct AGriffin_Character_BP_C_Update_Trail_Particle_System_Params
{
	class UParticleSystemComponent*                    ParticleSystem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Griffin_Character_BP.Griffin_Character_BP_C.BlueprintCanRiderAttack
struct AGriffin_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Griffin_Character_BP.Griffin_Character_BP_C.UpdateDivingParticleSystem
struct AGriffin_Character_BP_C_UpdateDivingParticleSystem_Params
{
	class UParticleSystemComponent*                    ParticleSystem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Griffin_Character_BP.Griffin_Character_BP_C.Update Diving Audio
struct AGriffin_Character_BP_C_Update_Diving_Audio_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LocallyCarried;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Griffin_Character_BP.Griffin_Character_BP_C.Update Diving Effects
struct AGriffin_Character_BP_C_Update_Diving_Effects_Params
{
};

// Function Griffin_Character_BP.Griffin_Character_BP_C.CheckGroundForWingFlap
struct AGriffin_Character_BP_C_CheckGroundForWingFlap_Params
{
};

// Function Griffin_Character_BP.Griffin_Character_BP_C.UserConstructionScript
struct AGriffin_Character_BP_C_UserConstructionScript_Params
{
};

// Function Griffin_Character_BP.Griffin_Character_BP_C.AnimNotify_WingFlap
struct AGriffin_Character_BP_C_AnimNotify_WingFlap_Params
{
};

// Function Griffin_Character_BP.Griffin_Character_BP_C.ReceiveBeginPlay
struct AGriffin_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Griffin_Character_BP.Griffin_Character_BP_C.AnimNotify_DiveSwipe
struct AGriffin_Character_BP_C_AnimNotify_DiveSwipe_Params
{
};

// Function Griffin_Character_BP.Griffin_Character_BP_C.DropCarriedCharacter_AfterDelay
struct AGriffin_Character_BP_C_DropCarriedCharacter_AfterDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Griffin_Character_BP.Griffin_Character_BP_C.ExecuteUbergraph_Griffin_Character_BP
struct AGriffin_Character_BP_C_ExecuteUbergraph_Griffin_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
