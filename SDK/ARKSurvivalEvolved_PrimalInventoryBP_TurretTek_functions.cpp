// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TurretTek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TurretTek.PrimalInventoryBP_TurretTek_C.BPCustomRemoteInventoryAllowAddItems
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            anItem                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           anItemQuantityOverride         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRequestedByPlayer             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalInventoryBP_TurretTek_C::BPCustomRemoteInventoryAllowAddItems(class AShooterPlayerController** PC, class UPrimalItem** anItem, int* anItemQuantityOverride, bool* bRequestedByPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TurretTek.PrimalInventoryBP_TurretTek_C.BPCustomRemoteInventoryAllowAddItems");

	UPrimalInventoryBP_TurretTek_C_BPCustomRemoteInventoryAllowAddItems_Params params;
	params.PC = PC;
	params.anItem = anItem;
	params.anItemQuantityOverride = anItemQuantityOverride;
	params.bRequestedByPlayer = bRequestedByPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalInventoryBP_TurretTek.PrimalInventoryBP_TurretTek_C.ExecuteUbergraph_PrimalInventoryBP_TurretTek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TurretTek_C::ExecuteUbergraph_PrimalInventoryBP_TurretTek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TurretTek.PrimalInventoryBP_TurretTek_C.ExecuteUbergraph_PrimalInventoryBP_TurretTek");

	UPrimalInventoryBP_TurretTek_C_ExecuteUbergraph_PrimalInventoryBP_TurretTek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
