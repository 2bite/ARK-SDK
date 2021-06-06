// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Spawner_Mek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_Spawner_Mek.PrimalItem_Spawner_Mek_C.BPCanUse
// ()
// Parameters:
// bool*                          bIgnoreCooldown                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItem_Spawner_Mek_C::BPCanUse(bool* bIgnoreCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_Mek.PrimalItem_Spawner_Mek_C.BPCanUse");

	UPrimalItem_Spawner_Mek_C_BPCanUse_Params params;
	params.bIgnoreCooldown = bIgnoreCooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_Spawner_Mek.PrimalItem_Spawner_Mek_C.GetStatDisplayString
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue>* Stat                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StatConvertMapIndex            (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  StatDisplay                    (Parm, OutParm, ZeroConstructor)
// class FString                  ValueDisplay                   (Parm, OutParm, ZeroConstructor)
// bool                           ShowInTooltip                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Spawner_Mek_C::GetStatDisplayString(TEnumAsByte<EPrimalCharacterStatusValue>* Stat, int* Value, int* StatConvertMapIndex, class FString* StatDisplay, class FString* ValueDisplay, bool* ShowInTooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_Mek.PrimalItem_Spawner_Mek_C.GetStatDisplayString");

	UPrimalItem_Spawner_Mek_C_GetStatDisplayString_Params params;
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


// Function PrimalItem_Spawner_Mek.PrimalItem_Spawner_Mek_C.ExecuteUbergraph_PrimalItem_Spawner_Mek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Spawner_Mek_C::ExecuteUbergraph_PrimalItem_Spawner_Mek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_Mek.PrimalItem_Spawner_Mek_C.ExecuteUbergraph_PrimalItem_Spawner_Mek");

	UPrimalItem_Spawner_Mek_C_ExecuteUbergraph_PrimalItem_Spawner_Mek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
