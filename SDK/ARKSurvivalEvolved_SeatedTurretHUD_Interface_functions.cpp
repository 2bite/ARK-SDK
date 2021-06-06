// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SeatedTurretHUD_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SeatedTurretHUD_Interface.SeatedTurretHUD_Interface_C.GetHudData
// ()
// Parameters:
// class UPrimalInventoryComponent* InventoryComponent             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  CurrentAmmoItemTemplate        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          AmmoItemTemplates              (Parm, OutParm, ZeroConstructor)
// int                            LowAmmoWarningAmount           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USeatedTurretHUD_Interface_C::GetHudData(class UPrimalInventoryComponent** InventoryComponent, class UClass** CurrentAmmoItemTemplate, TArray<class UClass*>* AmmoItemTemplates, int* LowAmmoWarningAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeatedTurretHUD_Interface.SeatedTurretHUD_Interface_C.GetHudData");

	USeatedTurretHUD_Interface_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;
	if (CurrentAmmoItemTemplate != nullptr)
		*CurrentAmmoItemTemplate = params.CurrentAmmoItemTemplate;
	if (AmmoItemTemplates != nullptr)
		*AmmoItemTemplates = params.AmmoItemTemplates;
	if (LowAmmoWarningAmount != nullptr)
		*LowAmmoWarningAmount = params.LowAmmoWarningAmount;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
