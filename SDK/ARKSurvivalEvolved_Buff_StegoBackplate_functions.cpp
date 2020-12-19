// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_StegoBackplate_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_StegoBackplate.Buff_StegoBackplate_C.BPAdjustStatusValueModification
// ()
// Parameters:
// class UPrimalCharacterStatusComponent** ForComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalCharacterStatusValue>* ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InAmount                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bManualModification            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_StegoBackplate_C::BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StegoBackplate.Buff_StegoBackplate_C.BPAdjustStatusValueModification");

	ABuff_StegoBackplate_C_BPAdjustStatusValueModification_Params params;
	params.ForComponent = ForComponent;
	params.ValueType = ValueType;
	params.InAmount = InAmount;
	params.DamageTypeClass = DamageTypeClass;
	params.bManualModification = bManualModification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_StegoBackplate.Buff_StegoBackplate_C.GetBuffDescription
// (NetRequest, Static, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// struct FStatusValueModifierDescription ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStatusValueModifierDescription ABuff_StegoBackplate_C::STATIC_GetBuffDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StegoBackplate.Buff_StegoBackplate_C.GetBuffDescription");

	ABuff_StegoBackplate_C_GetBuffDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_StegoBackplate.Buff_StegoBackplate_C.Set Backplate Mode
// (NetReliable, NetRequest, Native, Static, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// TEnumAsByte<E_StegoBackplateMode> StegoBackplateMode             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StegoBackplate_C::STATIC_Set_Backplate_Mode(TEnumAsByte<E_StegoBackplateMode> StegoBackplateMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StegoBackplate.Buff_StegoBackplate_C.Set Backplate Mode");

	ABuff_StegoBackplate_C_Set_Backplate_Mode_Params params;
	params.StegoBackplateMode = StegoBackplateMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StegoBackplate.Buff_StegoBackplate_C.GetBackplateMode
// ()
// Parameters:
// TEnumAsByte<E_StegoBackplateMode> BackplateMode                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_StegoBackplate_C::GetBackplateMode(TEnumAsByte<E_StegoBackplateMode>* BackplateMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StegoBackplate.Buff_StegoBackplate_C.GetBackplateMode");

	ABuff_StegoBackplate_C_GetBackplateMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BackplateMode != nullptr)
		*BackplateMode = params.BackplateMode;
}


// Function Buff_StegoBackplate.Buff_StegoBackplate_C.UserConstructionScript
// ()

void ABuff_StegoBackplate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StegoBackplate.Buff_StegoBackplate_C.UserConstructionScript");

	ABuff_StegoBackplate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_StegoBackplate.Buff_StegoBackplate_C.ExecuteUbergraph_Buff_StegoBackplate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_StegoBackplate_C::ExecuteUbergraph_Buff_StegoBackplate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_StegoBackplate.Buff_StegoBackplate_C.ExecuteUbergraph_Buff_StegoBackplate");

	ABuff_StegoBackplate_C_ExecuteUbergraph_Buff_StegoBackplate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
