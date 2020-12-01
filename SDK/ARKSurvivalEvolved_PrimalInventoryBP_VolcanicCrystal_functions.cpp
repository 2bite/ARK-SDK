// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_VolcanicCrystal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_VolcanicCrystal.PrimalInventoryBP_VolcanicCrystal_C.BPAccessedInventory
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_VolcanicCrystal_C::BPAccessedInventory(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_VolcanicCrystal.PrimalInventoryBP_VolcanicCrystal_C.BPAccessedInventory");

	UPrimalInventoryBP_VolcanicCrystal_C_BPAccessedInventory_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalInventoryBP_VolcanicCrystal.PrimalInventoryBP_VolcanicCrystal_C.ExecuteUbergraph_PrimalInventoryBP_VolcanicCrystal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_VolcanicCrystal_C::ExecuteUbergraph_PrimalInventoryBP_VolcanicCrystal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_VolcanicCrystal.PrimalInventoryBP_VolcanicCrystal_C.ExecuteUbergraph_PrimalInventoryBP_VolcanicCrystal");

	UPrimalInventoryBP_VolcanicCrystal_C_ExecuteUbergraph_PrimalInventoryBP_VolcanicCrystal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
