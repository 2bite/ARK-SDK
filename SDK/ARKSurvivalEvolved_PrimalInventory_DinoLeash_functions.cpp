// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventory_DinoLeash_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventory_DinoLeash.PrimalInventory_DinoLeash_C.BPPreInitDefaultInventory
// ()

void UPrimalInventory_DinoLeash_C::BPPreInitDefaultInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventory_DinoLeash.PrimalInventory_DinoLeash_C.BPPreInitDefaultInventory");

	UPrimalInventory_DinoLeash_C_BPPreInitDefaultInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventory_DinoLeash.PrimalInventory_DinoLeash_C.ExecuteUbergraph_PrimalInventory_DinoLeash
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventory_DinoLeash_C::ExecuteUbergraph_PrimalInventory_DinoLeash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventory_DinoLeash.PrimalInventory_DinoLeash_C.ExecuteUbergraph_PrimalInventory_DinoLeash");

	UPrimalInventory_DinoLeash_C_ExecuteUbergraph_PrimalInventory_DinoLeash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
