// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_GasBursts_Bog_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_GasBursts_Bog.Buff_GasBursts_Bog_C.BPAdjustStatusValueModification
// ()
// Parameters:
// class UPrimalCharacterStatusComponent** ForComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalCharacterStatusValue>* ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InAmount                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bManualModification            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_GasBursts_Bog_C::BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GasBursts_Bog.Buff_GasBursts_Bog_C.BPAdjustStatusValueModification");

	ABuff_GasBursts_Bog_C_BPAdjustStatusValueModification_Params params;
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


// Function Buff_GasBursts_Bog.Buff_GasBursts_Bog_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GasBursts_Bog_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GasBursts_Bog.Buff_GasBursts_Bog_C.BPDeactivated");

	ABuff_GasBursts_Bog_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GasBursts_Bog.Buff_GasBursts_Bog_C.UserConstructionScript
// ()

void ABuff_GasBursts_Bog_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GasBursts_Bog.Buff_GasBursts_Bog_C.UserConstructionScript");

	ABuff_GasBursts_Bog_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GasBursts_Bog.Buff_GasBursts_Bog_C.ExecuteUbergraph_Buff_GasBursts_Bog
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GasBursts_Bog_C::ExecuteUbergraph_Buff_GasBursts_Bog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GasBursts_Bog.Buff_GasBursts_Bog_C.ExecuteUbergraph_Buff_GasBursts_Bog");

	ABuff_GasBursts_Bog_C_ExecuteUbergraph_Buff_GasBursts_Bog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
