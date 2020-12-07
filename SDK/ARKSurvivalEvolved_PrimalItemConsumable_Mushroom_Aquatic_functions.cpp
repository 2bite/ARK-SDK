// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Mushroom_Aquatic_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Mushroom_Aquatic.PrimalItemConsumable_Mushroom_Aquatic_C.Add Immunity
// ()

void UPrimalItemConsumable_Mushroom_Aquatic_C::Add_Immunity()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mushroom_Aquatic.PrimalItemConsumable_Mushroom_Aquatic_C.Add Immunity");

	UPrimalItemConsumable_Mushroom_Aquatic_C_Add_Immunity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_Mushroom_Aquatic.PrimalItemConsumable_Mushroom_Aquatic_C.BlueprintUsed
// ()

void UPrimalItemConsumable_Mushroom_Aquatic_C::BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mushroom_Aquatic.PrimalItemConsumable_Mushroom_Aquatic_C.BlueprintUsed");

	UPrimalItemConsumable_Mushroom_Aquatic_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_Mushroom_Aquatic.PrimalItemConsumable_Mushroom_Aquatic_C.ExecuteUbergraph_PrimalItemConsumable_Mushroom_Aquatic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Mushroom_Aquatic_C::ExecuteUbergraph_PrimalItemConsumable_Mushroom_Aquatic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Mushroom_Aquatic.PrimalItemConsumable_Mushroom_Aquatic_C.ExecuteUbergraph_PrimalItemConsumable_Mushroom_Aquatic");

	UPrimalItemConsumable_Mushroom_Aquatic_C_ExecuteUbergraph_PrimalItemConsumable_Mushroom_Aquatic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
