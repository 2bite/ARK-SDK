// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Mushroom_Auric_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Mushroom_Auric.PrimalItemConsumable_Mushroom_Auric_C.Add Immunity
// ()

void UPrimalItemConsumable_Mushroom_Auric_C::Add_Immunity()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mushroom_Auric.PrimalItemConsumable_Mushroom_Auric_C.Add Immunity");

	UPrimalItemConsumable_Mushroom_Auric_C_Add_Immunity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_Mushroom_Auric.PrimalItemConsumable_Mushroom_Auric_C.BlueprintUsed
// ()

void UPrimalItemConsumable_Mushroom_Auric_C::BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mushroom_Auric.PrimalItemConsumable_Mushroom_Auric_C.BlueprintUsed");

	UPrimalItemConsumable_Mushroom_Auric_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_Mushroom_Auric.PrimalItemConsumable_Mushroom_Auric_C.ExecuteUbergraph_PrimalItemConsumable_Mushroom_Auric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Mushroom_Auric_C::ExecuteUbergraph_PrimalItemConsumable_Mushroom_Auric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mushroom_Auric.PrimalItemConsumable_Mushroom_Auric_C.ExecuteUbergraph_PrimalItemConsumable_Mushroom_Auric");

	UPrimalItemConsumable_Mushroom_Auric_C_ExecuteUbergraph_PrimalItemConsumable_Mushroom_Auric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
