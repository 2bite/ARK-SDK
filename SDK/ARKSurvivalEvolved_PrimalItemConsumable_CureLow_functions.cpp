// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_CureLow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_CureLow.PrimalItemConsumable_CureLow_C.BlueprintUsed
// ()

void UPrimalItemConsumable_CureLow_C::BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_CureLow.PrimalItemConsumable_CureLow_C.BlueprintUsed");

	UPrimalItemConsumable_CureLow_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_CureLow.PrimalItemConsumable_CureLow_C.ExecuteUbergraph_PrimalItemConsumable_CureLow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_CureLow_C::ExecuteUbergraph_PrimalItemConsumable_CureLow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_CureLow.PrimalItemConsumable_CureLow_C.ExecuteUbergraph_PrimalItemConsumable_CureLow");

	UPrimalItemConsumable_CureLow_C_ExecuteUbergraph_PrimalItemConsumable_CureLow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
