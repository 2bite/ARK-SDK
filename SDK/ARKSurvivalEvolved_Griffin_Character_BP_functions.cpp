// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Griffin_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Griffin_Character_BP.Griffin_Character_BP_C.UpdateDivingFX
// ()

void AGriffin_Character_BP_C::UpdateDivingFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.UpdateDivingFX");

	AGriffin_Character_BP_C_UpdateDivingFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Griffin_Character_BP.Griffin_Character_BP_C.OnDiveSwipe
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, HasOutParms, NetClient)

void AGriffin_Character_BP_C::STATIC_OnDiveSwipe()
{
	static auto fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.OnDiveSwipe");

	AGriffin_Character_BP_C_OnDiveSwipe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Griffin_Character_BP.Griffin_Character_BP_C.Update WindMaterial
// ()

void AGriffin_Character_BP_C::Update_WindMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.Update WindMaterial");

	AGriffin_Character_BP_C_Update_WindMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Griffin_Character_BP.Griffin_Character_BP_C.Update Trail Particle System
// ()
// Parameters:
// class UParticleSystemComponent* ParticleSystem                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void AGriffin_Character_BP_C::Update_Trail_Particle_System(class UParticleSystemComponent* ParticleSystem, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.Update Trail Particle System");

	AGriffin_Character_BP_C_Update_Trail_Particle_System_Params params;
	params.ParticleSystem = ParticleSystem;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Griffin_Character_BP.Griffin_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGriffin_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.BlueprintCanRiderAttack");

	AGriffin_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Griffin_Character_BP.Griffin_Character_BP_C.UpdateDivingParticleSystem
// ()
// Parameters:
// class UParticleSystemComponent* ParticleSystem                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void AGriffin_Character_BP_C::UpdateDivingParticleSystem(class UParticleSystemComponent* ParticleSystem, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.UpdateDivingParticleSystem");

	AGriffin_Character_BP_C_UpdateDivingParticleSystem_Params params;
	params.ParticleSystem = ParticleSystem;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Griffin_Character_BP.Griffin_Character_BP_C.Update Diving Audio
// ()
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           LocallyCarried                 (Parm, ZeroConstructor, IsPlainOldData)

void AGriffin_Character_BP_C::Update_Diving_Audio(bool Active, bool LocallyCarried)
{
	static auto fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.Update Diving Audio");

	AGriffin_Character_BP_C_Update_Diving_Audio_Params params;
	params.Active = Active;
	params.LocallyCarried = LocallyCarried;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Griffin_Character_BP.Griffin_Character_BP_C.Update Diving Effects
// ()

void AGriffin_Character_BP_C::Update_Diving_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.Update Diving Effects");

	AGriffin_Character_BP_C_Update_Diving_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Griffin_Character_BP.Griffin_Character_BP_C.CheckGroundForWingFlap
// (NetReliable, Exec, Native, NetResponse, Public, Private, HasOutParms, NetClient)

void AGriffin_Character_BP_C::CheckGroundForWingFlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.CheckGroundForWingFlap");

	AGriffin_Character_BP_C_CheckGroundForWingFlap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Griffin_Character_BP.Griffin_Character_BP_C.UserConstructionScript
// ()

void AGriffin_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.UserConstructionScript");

	AGriffin_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Griffin_Character_BP.Griffin_Character_BP_C.AnimNotify_WingFlap
// ()

void AGriffin_Character_BP_C::AnimNotify_WingFlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.AnimNotify_WingFlap");

	AGriffin_Character_BP_C_AnimNotify_WingFlap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Griffin_Character_BP.Griffin_Character_BP_C.ReceiveBeginPlay
// ()

void AGriffin_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.ReceiveBeginPlay");

	AGriffin_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Griffin_Character_BP.Griffin_Character_BP_C.AnimNotify_DiveSwipe
// ()

void AGriffin_Character_BP_C::AnimNotify_DiveSwipe()
{
	static auto fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.AnimNotify_DiveSwipe");

	AGriffin_Character_BP_C_AnimNotify_DiveSwipe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Griffin_Character_BP.Griffin_Character_BP_C.DropCarriedCharacter_AfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void AGriffin_Character_BP_C::DropCarriedCharacter_AfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.DropCarriedCharacter_AfterDelay");

	AGriffin_Character_BP_C_DropCarriedCharacter_AfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Griffin_Character_BP.Griffin_Character_BP_C.ExecuteUbergraph_Griffin_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGriffin_Character_BP_C::ExecuteUbergraph_Griffin_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Griffin_Character_BP.Griffin_Character_BP_C.ExecuteUbergraph_Griffin_Character_BP");

	AGriffin_Character_BP_C_ExecuteUbergraph_Griffin_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
