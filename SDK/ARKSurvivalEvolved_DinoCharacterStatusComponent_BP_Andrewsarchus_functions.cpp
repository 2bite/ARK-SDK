// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_Andrewsarchus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoCharacterStatusComponent_BP_Andrewsarchus.DinoCharacterStatusComponent_BP_Andrewsarchus_C.BPAdjustStatusValueModification
// (NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue>* ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         amount                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bManualModification            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDinoCharacterStatusComponent_BP_Andrewsarchus_C::STATIC_BPAdjustStatusValueModification(TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* amount, class UClass** DamageTypeClass, bool* bManualModification)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Andrewsarchus.DinoCharacterStatusComponent_BP_Andrewsarchus_C.BPAdjustStatusValueModification");

	UDinoCharacterStatusComponent_BP_Andrewsarchus_C_BPAdjustStatusValueModification_Params params;
	params.ValueType = ValueType;
	params.amount = amount;
	params.DamageTypeClass = DamageTypeClass;
	params.bManualModification = bManualModification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoCharacterStatusComponent_BP_Andrewsarchus.DinoCharacterStatusComponent_BP_Andrewsarchus_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Andrewsarchus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoCharacterStatusComponent_BP_Andrewsarchus_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Andrewsarchus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Andrewsarchus.DinoCharacterStatusComponent_BP_Andrewsarchus_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Andrewsarchus");

	UDinoCharacterStatusComponent_BP_Andrewsarchus_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Andrewsarchus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
