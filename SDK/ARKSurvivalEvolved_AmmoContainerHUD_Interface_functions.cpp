// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AmmoContainerHUD_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AmmoContainerHUD_Interface.AmmoContainerHUD_Interface_C.GetAmmoContainerIcon
// ()
// Parameters:
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAmmoContainerHUD_Interface_C::GetAmmoContainerIcon(class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmmoContainerHUD_Interface.AmmoContainerHUD_Interface_C.GetAmmoContainerIcon");

	UAmmoContainerHUD_Interface_C_GetAmmoContainerIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function AmmoContainerHUD_Interface.AmmoContainerHUD_Interface_C.ProvidedAmmoQuantity
// ()
// Parameters:
// class APrimalStructureItemContainer* TurretStructureItemContainer   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AmmoItemTemplate               (Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           AnyAmmoContainersInRange       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAmmoContainerHUD_Interface_C::ProvidedAmmoQuantity(class APrimalStructureItemContainer* TurretStructureItemContainer, class UClass* AmmoItemTemplate, int* Quantity, bool* AnyAmmoContainersInRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmmoContainerHUD_Interface.AmmoContainerHUD_Interface_C.ProvidedAmmoQuantity");

	UAmmoContainerHUD_Interface_C_ProvidedAmmoQuantity_Params params;
	params.TurretStructureItemContainer = TurretStructureItemContainer;
	params.AmmoItemTemplate = AmmoItemTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Quantity != nullptr)
		*Quantity = params.Quantity;
	if (AnyAmmoContainersInRange != nullptr)
		*AnyAmmoContainersInRange = params.AnyAmmoContainersInRange;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
