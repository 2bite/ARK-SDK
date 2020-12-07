// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CorruptWave_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_CorruptWave.Buff_CorruptWave_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CorruptWave_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CorruptWave.Buff_CorruptWave_C.BuffTickServer");

	ABuff_CorruptWave_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CorruptWave.Buff_CorruptWave_C.BPAdjustStatusValueModification
// ()
// Parameters:
// class UPrimalCharacterStatusComponent** ForComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalCharacterStatusValue>* ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InAmount                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bManualModification            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_CorruptWave_C::BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CorruptWave.Buff_CorruptWave_C.BPAdjustStatusValueModification");

	ABuff_CorruptWave_C_BPAdjustStatusValueModification_Params params;
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


// Function Buff_CorruptWave.Buff_CorruptWave_C.UserConstructionScript
// ()

void ABuff_CorruptWave_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CorruptWave.Buff_CorruptWave_C.UserConstructionScript");

	ABuff_CorruptWave_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CorruptWave.Buff_CorruptWave_C.ExecuteUbergraph_Buff_CorruptWave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CorruptWave_C::ExecuteUbergraph_Buff_CorruptWave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CorruptWave.Buff_CorruptWave_C.ExecuteUbergraph_Buff_CorruptWave");

	ABuff_CorruptWave_C_ExecuteUbergraph_Buff_CorruptWave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
