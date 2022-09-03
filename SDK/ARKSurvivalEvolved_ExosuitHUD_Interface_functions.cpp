// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExosuitHUD_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExosuitHUD_Interface.ExosuitHUD_Interface_C.GetHudData
// ()
// Parameters:
// bool                           bUsesChestBeam                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bCanUseChestBeam               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ChestBeamEnergyPercent         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ChestBeamState                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UPrimalInventoryComponent* InventoryComponent             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FuelItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          EnergyPercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CurrentMode                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPreparingJump               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UExosuitHUD_Interface_C::GetHudData(bool* bUsesChestBeam, bool* bCanUseChestBeam, float* ChestBeamEnergyPercent, int* ChestBeamState, class UPrimalInventoryComponent** InventoryComponent, class UClass** FuelItem, float* EnergyPercent, int* CurrentMode, bool* bIsPreparingJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExosuitHUD_Interface.ExosuitHUD_Interface_C.GetHudData");

	UExosuitHUD_Interface_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUsesChestBeam != nullptr)
		*bUsesChestBeam = params.bUsesChestBeam;
	if (bCanUseChestBeam != nullptr)
		*bCanUseChestBeam = params.bCanUseChestBeam;
	if (ChestBeamEnergyPercent != nullptr)
		*ChestBeamEnergyPercent = params.ChestBeamEnergyPercent;
	if (ChestBeamState != nullptr)
		*ChestBeamState = params.ChestBeamState;
	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;
	if (FuelItem != nullptr)
		*FuelItem = params.FuelItem;
	if (EnergyPercent != nullptr)
		*EnergyPercent = params.EnergyPercent;
	if (CurrentMode != nullptr)
		*CurrentMode = params.CurrentMode;
	if (bIsPreparingJump != nullptr)
		*bIsPreparingJump = params.bIsPreparingJump;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
