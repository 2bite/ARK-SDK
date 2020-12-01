// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EndBossMorph_Dissolve_In_BossForm_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.PlayTauntAnims
// ()

void ABuff_EndBossMorph_Dissolve_In_BossForm_C::PlayTauntAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.PlayTauntAnims");

	ABuff_EndBossMorph_Dissolve_In_BossForm_C_PlayTauntAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.Additional Set Dissolve
// ()
// Parameters:
// float*                         NewPercent                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  DissolveParameterName          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossMorph_Dissolve_In_BossForm_C::Additional_Set_Dissolve(float* NewPercent, struct FName* DissolveParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.Additional Set Dissolve");

	ABuff_EndBossMorph_Dissolve_In_BossForm_C_Additional_Set_Dissolve_Params params;
	params.NewPercent = NewPercent;
	params.DissolveParameterName = DissolveParameterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.AdditionalDissolveFunc
// ()
// Parameters:
// class UObject**                Object                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  DissolveParamName              (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossMorph_Dissolve_In_BossForm_C::AdditionalDissolveFunc(class UObject** Object, float* Rate, struct FName* DissolveParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.AdditionalDissolveFunc");

	ABuff_EndBossMorph_Dissolve_In_BossForm_C_AdditionalDissolveFunc_Params params;
	params.Object = Object;
	params.Rate = Rate;
	params.DissolveParamName = DissolveParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_EndBossMorph_Dissolve_In_BossForm_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.BuffAdjustDamage");

	ABuff_EndBossMorph_Dissolve_In_BossForm_C_BuffAdjustDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;

	return params.ReturnValue;
}


// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.Activate Boss In Effects
// ()

void ABuff_EndBossMorph_Dissolve_In_BossForm_C::Activate_Boss_In_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.Activate Boss In Effects");

	ABuff_EndBossMorph_Dissolve_In_BossForm_C_Activate_Boss_In_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.Disable Boss Visuals
// ()
// Parameters:
// class APrimalDinoCharacter*    InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossMorph_Dissolve_In_BossForm_C::Disable_Boss_Visuals(class APrimalDinoCharacter* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.Disable Boss Visuals");

	ABuff_EndBossMorph_Dissolve_In_BossForm_C_Disable_Boss_Visuals_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossMorph_Dissolve_In_BossForm_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.BPDeactivated");

	ABuff_EndBossMorph_Dissolve_In_BossForm_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.UpdateAdditionalParameters
// ()

void ABuff_EndBossMorph_Dissolve_In_BossForm_C::UpdateAdditionalParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.UpdateAdditionalParameters");

	ABuff_EndBossMorph_Dissolve_In_BossForm_C_UpdateAdditionalParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.UserConstructionScript
// ()

void ABuff_EndBossMorph_Dissolve_In_BossForm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.UserConstructionScript");

	ABuff_EndBossMorph_Dissolve_In_BossForm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.ReceiveBeginPlay
// ()

void ABuff_EndBossMorph_Dissolve_In_BossForm_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.ReceiveBeginPlay");

	ABuff_EndBossMorph_Dissolve_In_BossForm_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.ExecuteUbergraph_Buff_EndBossMorph_Dissolve_In_BossForm
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossMorph_Dissolve_In_BossForm_C::ExecuteUbergraph_Buff_EndBossMorph_Dissolve_In_BossForm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve_In_BossForm.Buff_EndBossMorph_Dissolve_In_BossForm_C.ExecuteUbergraph_Buff_EndBossMorph_Dissolve_In_BossForm");

	ABuff_EndBossMorph_Dissolve_In_BossForm_C_ExecuteUbergraph_Buff_EndBossMorph_Dissolve_In_BossForm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
