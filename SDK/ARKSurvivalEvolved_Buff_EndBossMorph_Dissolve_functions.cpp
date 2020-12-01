// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EndBossMorph_Dissolve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.Dissolve
// ()
// Parameters:
// float                          DissolveRate                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DissolveParam                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseOverrideDeltaTime           (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideDeltaTime              (Parm, ZeroConstructor, IsPlainOldData)
// float                          LastPercentValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossMorph_Dissolve_C::Dissolve(float DissolveRate, const struct FName& DissolveParam, bool UseOverrideDeltaTime, float OverrideDeltaTime, float* LastPercentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.Dissolve");

	ABuff_EndBossMorph_Dissolve_C_Dissolve_Params params;
	params.DissolveRate = DissolveRate;
	params.DissolveParam = DissolveParam;
	params.UseOverrideDeltaTime = UseOverrideDeltaTime;
	params.OverrideDeltaTime = OverrideDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastPercentValue != nullptr)
		*LastPercentValue = params.LastPercentValue;
}


// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.Set Dissolve Percent
// ()
// Parameters:
// float                          NewPercent                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DissolveParameter              (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossMorph_Dissolve_C::Set_Dissolve_Percent(float NewPercent, const struct FName& DissolveParameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.Set Dissolve Percent");

	ABuff_EndBossMorph_Dissolve_C_Set_Dissolve_Percent_Params params;
	params.NewPercent = NewPercent;
	params.DissolveParameter = DissolveParameter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.Additional Set Dissolve
// ()
// Parameters:
// float                          NewPercent                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DissolveParameterName          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossMorph_Dissolve_C::Additional_Set_Dissolve(float NewPercent, const struct FName& DissolveParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.Additional Set Dissolve");

	ABuff_EndBossMorph_Dissolve_C_Additional_Set_Dissolve_Params params;
	params.NewPercent = NewPercent;
	params.DissolveParameterName = DissolveParameterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.AdditionalDissolveFunc
// ()
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DissolveParamName              (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossMorph_Dissolve_C::AdditionalDissolveFunc(class UObject* Object, float Rate, const struct FName& DissolveParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.AdditionalDissolveFunc");

	ABuff_EndBossMorph_Dissolve_C_AdditionalDissolveFunc_Params params;
	params.Object = Object;
	params.Rate = Rate;
	params.DissolveParamName = DissolveParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.ReceiveDestroyed
// ()

void ABuff_EndBossMorph_Dissolve_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.ReceiveDestroyed");

	ABuff_EndBossMorph_Dissolve_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossMorph_Dissolve_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.BPDeactivated");

	ABuff_EndBossMorph_Dissolve_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.UpdateAdditionalParameters
// ()

void ABuff_EndBossMorph_Dissolve_C::UpdateAdditionalParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.UpdateAdditionalParameters");

	ABuff_EndBossMorph_Dissolve_C_UpdateAdditionalParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.GetOwningPrimalCharacter
// ()
// Parameters:
// class APrimalCharacter*        Owner                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossMorph_Dissolve_C::GetOwningPrimalCharacter(class APrimalCharacter** Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.GetOwningPrimalCharacter");

	ABuff_EndBossMorph_Dissolve_C_GetOwningPrimalCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Owner != nullptr)
		*Owner = params.Owner;
}


// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.UserConstructionScript
// ()

void ABuff_EndBossMorph_Dissolve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.UserConstructionScript");

	ABuff_EndBossMorph_Dissolve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.ReceiveBeginPlay
// ()

void ABuff_EndBossMorph_Dissolve_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.ReceiveBeginPlay");

	ABuff_EndBossMorph_Dissolve_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossMorph_Dissolve_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.ReceiveTick");

	ABuff_EndBossMorph_Dissolve_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.ExecuteUbergraph_Buff_EndBossMorph_Dissolve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EndBossMorph_Dissolve_C::ExecuteUbergraph_Buff_EndBossMorph_Dissolve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.ExecuteUbergraph_Buff_EndBossMorph_Dissolve");

	ABuff_EndBossMorph_Dissolve_C_ExecuteUbergraph_Buff_EndBossMorph_Dissolve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
