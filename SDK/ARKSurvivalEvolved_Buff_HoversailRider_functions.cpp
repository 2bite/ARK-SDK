// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HoversailRider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_HoversailRider.Buff_HoversailRider_C.BPAdjustStatusValueModification
// ()
// Parameters:
// class UPrimalCharacterStatusComponent** ForComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalCharacterStatusValue>* ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InAmount                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bManualModification            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_HoversailRider_C::BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HoversailRider.Buff_HoversailRider_C.BPAdjustStatusValueModification");

	ABuff_HoversailRider_C_BPAdjustStatusValueModification_Params params;
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


// Function Buff_HoversailRider.Buff_HoversailRider_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_HoversailRider_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HoversailRider.Buff_HoversailRider_C.BPPreventAddingOtherBuff");

	ABuff_HoversailRider_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_HoversailRider.Buff_HoversailRider_C.UserConstructionScript
// ()

void ABuff_HoversailRider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HoversailRider.Buff_HoversailRider_C.UserConstructionScript");

	ABuff_HoversailRider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HoversailRider.Buff_HoversailRider_C.ExecuteUbergraph_Buff_HoversailRider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HoversailRider_C::ExecuteUbergraph_Buff_HoversailRider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HoversailRider.Buff_HoversailRider_C.ExecuteUbergraph_Buff_HoversailRider");

	ABuff_HoversailRider_C_ExecuteUbergraph_Buff_HoversailRider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
