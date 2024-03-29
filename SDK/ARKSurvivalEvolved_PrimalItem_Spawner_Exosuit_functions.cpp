// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Spawner_Exosuit_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.BPCanUse
// ()
// Parameters:
// bool*                          bIgnoreCooldown                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItem_Spawner_Exosuit_C::BPCanUse(bool* bIgnoreCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.BPCanUse");

	UPrimalItem_Spawner_Exosuit_C_BPCanUse_Params params;
	params.bIgnoreCooldown = bIgnoreCooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.GetStatDisplayString
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue>* Stat                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StatConvertMapIndex            (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  StatDisplay                    (Parm, OutParm, ZeroConstructor)
// class FString                  ValueDisplay                   (Parm, OutParm, ZeroConstructor)
// bool                           ShowInTooltip                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Spawner_Exosuit_C::GetStatDisplayString(TEnumAsByte<EPrimalCharacterStatusValue>* Stat, int* Value, int* StatConvertMapIndex, class FString* StatDisplay, class FString* ValueDisplay, bool* ShowInTooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.GetStatDisplayString");

	UPrimalItem_Spawner_Exosuit_C_GetStatDisplayString_Params params;
	params.Stat = Stat;
	params.Value = Value;
	params.StatConvertMapIndex = StatConvertMapIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatDisplay != nullptr)
		*StatDisplay = params.StatDisplay;
	if (ValueDisplay != nullptr)
		*ValueDisplay = params.ValueDisplay;
	if (ShowInTooltip != nullptr)
		*ShowInTooltip = params.ShowInTooltip;
}


// Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.ExecuteUbergraph_PrimalItem_Spawner_Exosuit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Spawner_Exosuit_C::ExecuteUbergraph_PrimalItem_Spawner_Exosuit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.ExecuteUbergraph_PrimalItem_Spawner_Exosuit");

	UPrimalItem_Spawner_Exosuit_C_ExecuteUbergraph_PrimalItem_Spawner_Exosuit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
