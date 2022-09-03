// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Lootcrate_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Lootcrate.PrimalItemConsumable_Lootcrate_C.BlueprintUsed
// ()

void UPrimalItemConsumable_Lootcrate_C::BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Lootcrate.PrimalItemConsumable_Lootcrate_C.BlueprintUsed");

	UPrimalItemConsumable_Lootcrate_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_Lootcrate.PrimalItemConsumable_Lootcrate_C.BPPostInitializeItem
// ()
// Parameters:
// class UWorld**                 OptionalInitWorld              (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Lootcrate_C::BPPostInitializeItem(class UWorld** OptionalInitWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Lootcrate.PrimalItemConsumable_Lootcrate_C.BPPostInitializeItem");

	UPrimalItemConsumable_Lootcrate_C_BPPostInitializeItem_Params params;
	params.OptionalInitWorld = OptionalInitWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemConsumable_Lootcrate.PrimalItemConsumable_Lootcrate_C.ExecuteUbergraph_PrimalItemConsumable_Lootcrate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Lootcrate_C::ExecuteUbergraph_PrimalItemConsumable_Lootcrate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Lootcrate.PrimalItemConsumable_Lootcrate_C.ExecuteUbergraph_PrimalItemConsumable_Lootcrate");

	UPrimalItemConsumable_Lootcrate_C_ExecuteUbergraph_PrimalItemConsumable_Lootcrate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
