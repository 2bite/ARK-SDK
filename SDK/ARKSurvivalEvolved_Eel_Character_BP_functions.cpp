// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Eel_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Eel_Character_BP.Eel_Character_BP_C.BPUnstasis
// ()

void AEel_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP.Eel_Character_BP_C.BPUnstasis");

	AEel_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Eel_Character_BP.Eel_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void AEel_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP.Eel_Character_BP_C.BPSetupTamed");

	AEel_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Eel_Character_BP.Eel_Character_BP_C.UpdateEmissive
// ()

void AEel_Character_BP_C::UpdateEmissive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP.Eel_Character_BP_C.UpdateEmissive");

	AEel_Character_BP_C_UpdateEmissive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Eel_Character_BP.Eel_Character_BP_C.OnRep_CanLightningAttack
// ()

void AEel_Character_BP_C::OnRep_CanLightningAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP.Eel_Character_BP_C.OnRep_CanLightningAttack");

	AEel_Character_BP_C_OnRep_CanLightningAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Eel_Character_BP.Eel_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEel_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP.Eel_Character_BP_C.BlueprintCanAttack");

	AEel_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Eel_Character_BP.Eel_Character_BP_C.CheckNearbyAndUpdateBeams
// ()

void AEel_Character_BP_C::CheckNearbyAndUpdateBeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP.Eel_Character_BP_C.CheckNearbyAndUpdateBeams");

	AEel_Character_BP_C_CheckNearbyAndUpdateBeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Eel_Character_BP.Eel_Character_BP_C.UpdateChainBeamEnds
// ()
// Parameters:
// TArray<class AActor*>          NearbyTeamEels                 (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AEel_Character_BP_C::UpdateChainBeamEnds(TArray<class AActor*>* NearbyTeamEels)
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP.Eel_Character_BP_C.UpdateChainBeamEnds");

	AEel_Character_BP_C_UpdateChainBeamEnds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NearbyTeamEels != nullptr)
		*NearbyTeamEels = params.NearbyTeamEels;
}


// Function Eel_Character_BP.Eel_Character_BP_C.BPTimerNonDedicated
// ()

void AEel_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP.Eel_Character_BP_C.BPTimerNonDedicated");

	AEel_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Eel_Character_BP.Eel_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AEel_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP.Eel_Character_BP_C.BPDoAttack");

	AEel_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Eel_Character_BP.Eel_Character_BP_C.UserConstructionScript
// ()

void AEel_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP.Eel_Character_BP_C.UserConstructionScript");

	AEel_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Eel_Character_BP.Eel_Character_BP_C.ClearParticles
// ()
// Parameters:
// float                          DelayTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AEel_Character_BP_C::ClearParticles(float DelayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP.Eel_Character_BP_C.ClearParticles");

	AEel_Character_BP_C_ClearParticles_Params params;
	params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Eel_Character_BP.Eel_Character_BP_C.StartParticles
// ()

void AEel_Character_BP_C::StartParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP.Eel_Character_BP_C.StartParticles");

	AEel_Character_BP_C_StartParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Eel_Character_BP.Eel_Character_BP_C.SetCanLightningAttackAfterDelay
// ()

void AEel_Character_BP_C::SetCanLightningAttackAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP.Eel_Character_BP_C.SetCanLightningAttackAfterDelay");

	AEel_Character_BP_C_SetCanLightningAttackAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Eel_Character_BP.Eel_Character_BP_C.AnimNotify_ShockAOEParticle
// ()

void AEel_Character_BP_C::AnimNotify_ShockAOEParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP.Eel_Character_BP_C.AnimNotify_ShockAOEParticle");

	AEel_Character_BP_C_AnimNotify_ShockAOEParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Eel_Character_BP.Eel_Character_BP_C.ReceiveBeginPlay
// ()

void AEel_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP.Eel_Character_BP_C.ReceiveBeginPlay");

	AEel_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Eel_Character_BP.Eel_Character_BP_C.UnsetFX
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AEel_Character_BP_C::UnsetFX(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP.Eel_Character_BP_C.UnsetFX");

	AEel_Character_BP_C_UnsetFX_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Eel_Character_BP.Eel_Character_BP_C.ExecuteUbergraph_Eel_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEel_Character_BP_C::ExecuteUbergraph_Eel_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Eel_Character_BP.Eel_Character_BP_C.ExecuteUbergraph_Eel_Character_BP");

	AEel_Character_BP_C_ExecuteUbergraph_Eel_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
