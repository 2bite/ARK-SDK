// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoisonousMushroom_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PoisonousMushroom.Buff_PoisonousMushroom_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PoisonousMushroom_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonousMushroom.Buff_PoisonousMushroom_C.BuffTickServer");

	ABuff_PoisonousMushroom_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonousMushroom.Buff_PoisonousMushroom_C.BPAdjustStatusValueModification
// ()
// Parameters:
// class UPrimalCharacterStatusComponent** ForComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalCharacterStatusValue>* ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InAmount                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bManualModification            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_PoisonousMushroom_C::BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonousMushroom.Buff_PoisonousMushroom_C.BPAdjustStatusValueModification");

	ABuff_PoisonousMushroom_C_BPAdjustStatusValueModification_Params params;
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


// Function Buff_PoisonousMushroom.Buff_PoisonousMushroom_C.UserConstructionScript
// ()

void ABuff_PoisonousMushroom_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonousMushroom.Buff_PoisonousMushroom_C.UserConstructionScript");

	ABuff_PoisonousMushroom_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PoisonousMushroom.Buff_PoisonousMushroom_C.ExecuteUbergraph_Buff_PoisonousMushroom
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PoisonousMushroom_C::ExecuteUbergraph_Buff_PoisonousMushroom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PoisonousMushroom.Buff_PoisonousMushroom_C.ExecuteUbergraph_Buff_PoisonousMushroom");

	ABuff_PoisonousMushroom_C_ExecuteUbergraph_Buff_PoisonousMushroom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
