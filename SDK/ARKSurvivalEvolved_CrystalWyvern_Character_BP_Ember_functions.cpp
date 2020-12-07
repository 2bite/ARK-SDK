// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvern_Character_BP_Ember_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.BPGetHUDOverrideBuffProgressBarPercent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACrystalWyvern_Character_BP_Ember_C::BPGetHUDOverrideBuffProgressBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.BPGetHUDOverrideBuffProgressBarPercent");

	ACrystalWyvern_Character_BP_Ember_C_BPGetHUDOverrideBuffProgressBarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.ExtraFlameFXSetup
// ()
// Parameters:
// class UParticleSystemComponent** ParticleSystem                 (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_Character_BP_Ember_C::ExtraFlameFXSetup(class UParticleSystemComponent** ParticleSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.ExtraFlameFXSetup");

	ACrystalWyvern_Character_BP_Ember_C_ExtraFlameFXSetup_Params params;
	params.ParticleSystem = ParticleSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_Character_BP_Ember_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.BPDoAttack");

	ACrystalWyvern_Character_BP_Ember_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.UserConstructionScript
// ()

void ACrystalWyvern_Character_BP_Ember_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.UserConstructionScript");

	ACrystalWyvern_Character_BP_Ember_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.ExecuteUbergraph_CrystalWyvern_Character_BP_Ember
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_Character_BP_Ember_C::ExecuteUbergraph_CrystalWyvern_Character_BP_Ember(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Ember.CrystalWyvern_Character_BP_Ember_C.ExecuteUbergraph_CrystalWyvern_Character_BP_Ember");

	ACrystalWyvern_Character_BP_Ember_C_ExecuteUbergraph_CrystalWyvern_Character_BP_Ember_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
