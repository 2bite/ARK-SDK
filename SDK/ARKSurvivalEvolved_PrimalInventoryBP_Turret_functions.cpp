// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Turret_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_Turret.PrimalInventoryBP_Turret_C.BPCustomRemoteInventoryAllowAddItems
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           anItemQuantityOverride         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRequestedByPlayer             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryBP_Turret_C::BPCustomRemoteInventoryAllowAddItems(class AShooterPlayerController** PC, class UPrimalItem** anItem, int* anItemQuantityOverride, bool* bRequestedByPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_Turret.PrimalInventoryBP_Turret_C.BPCustomRemoteInventoryAllowAddItems");

	UPrimalInventoryBP_Turret_C_BPCustomRemoteInventoryAllowAddItems_Params params;
	params.PC = PC;
	params.anItem = anItem;
	params.anItemQuantityOverride = anItemQuantityOverride;
	params.bRequestedByPlayer = bRequestedByPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventoryBP_Turret.PrimalInventoryBP_Turret_C.ExecuteUbergraph_PrimalInventoryBP_Turret
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_Turret_C::ExecuteUbergraph_PrimalInventoryBP_Turret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_Turret.PrimalInventoryBP_Turret_C.ExecuteUbergraph_PrimalInventoryBP_Turret");

	UPrimalInventoryBP_Turret_C_ExecuteUbergraph_PrimalInventoryBP_Turret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
