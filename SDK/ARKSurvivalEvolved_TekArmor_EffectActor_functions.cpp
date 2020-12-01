// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekArmor_EffectActor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_ParticleScale
// ()

void ATekArmor_EffectActor_C::OnRep_ParticleScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_ParticleScale");

	ATekArmor_EffectActor_C_OnRep_ParticleScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_bParticlesOn
// ()

void ATekArmor_EffectActor_C::OnRep_bParticlesOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_bParticlesOn");

	ATekArmor_EffectActor_C_OnRep_bParticlesOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_bSoundOn
// ()

void ATekArmor_EffectActor_C::OnRep_bSoundOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_bSoundOn");

	ATekArmor_EffectActor_C_OnRep_bSoundOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_TekSoundRef
// ()

void ATekArmor_EffectActor_C::OnRep_TekSoundRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_TekSoundRef");

	ATekArmor_EffectActor_C_OnRep_TekSoundRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_TekParticleTemplate
// ()

void ATekArmor_EffectActor_C::OnRep_TekParticleTemplate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_TekParticleTemplate");

	ATekArmor_EffectActor_C_OnRep_TekParticleTemplate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetSoundActive
// ()
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekArmor_EffectActor_C::SetSoundActive(bool Active, float StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetSoundActive");

	ATekArmor_EffectActor_C_SetSoundActive_Params params;
	params.Active = Active;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.Set ParticleActive
// ()
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekArmor_EffectActor_C::Set_ParticleActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.Set ParticleActive");

	ATekArmor_EffectActor_C_Set_ParticleActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.UserConstructionScript
// ()

void ATekArmor_EffectActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.UserConstructionScript");

	ATekArmor_EffectActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.InitTekEffect
// ()
// Parameters:
// class UParticleSystem*         particle                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 particleScale                  (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekArmor_EffectActor_C::InitTekEffect(class UParticleSystem* particle, const struct FVector& particleScale, class USoundBase* Sound, class APrimalCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.InitTekEffect");

	ATekArmor_EffectActor_C_InitTekEffect_Params params;
	params.particle = particle;
	params.particleScale = particleScale;
	params.Sound = Sound;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.PlayerDied
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void ATekArmor_EffectActor_C::PlayerDied(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.PlayerDied");

	ATekArmor_EffectActor_C_PlayerDied_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetTekFX
// ()
// Parameters:
// class UParticleSystem*         particle                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 particleScale                  (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void ATekArmor_EffectActor_C::SetTekFX(class UParticleSystem* particle, const struct FVector& particleScale, class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetTekFX");

	ATekArmor_EffectActor_C_SetTekFX_Params params;
	params.particle = particle;
	params.particleScale = particleScale;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetSoundState
// ()
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekArmor_EffectActor_C::Replicate_SetSoundState(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetSoundState");

	ATekArmor_EffectActor_C_Replicate_SetSoundState_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetParticleState
// ()
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void ATekArmor_EffectActor_C::Replicate_SetParticleState(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetParticleState");

	ATekArmor_EffectActor_C_Replicate_SetParticleState_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekArmor_EffectActor.TekArmor_EffectActor_C.ExecuteUbergraph_TekArmor_EffectActor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekArmor_EffectActor_C::ExecuteUbergraph_TekArmor_EffectActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekArmor_EffectActor.TekArmor_EffectActor_C.ExecuteUbergraph_TekArmor_EffectActor");

	ATekArmor_EffectActor_C_ExecuteUbergraph_TekArmor_EffectActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
