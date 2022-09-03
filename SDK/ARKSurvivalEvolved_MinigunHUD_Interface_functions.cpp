// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MinigunHUD_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MinigunHUD_Interface.MinigunHUD_Interface_C.GetHudData
// ()
// Parameters:
// class UTexture2D*              AmmoIcon                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CurrentAmmoCount               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AmmoPerClip                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsInTurretMode                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HideAmmoCountHUDElement        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  AmmoItemTemplate               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMinigunHUD_Interface_C::GetHudData(class UTexture2D** AmmoIcon, int* CurrentAmmoCount, int* AmmoPerClip, bool* IsInTurretMode, bool* HideAmmoCountHUDElement, class UClass** AmmoItemTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigunHUD_Interface.MinigunHUD_Interface_C.GetHudData");

	UMinigunHUD_Interface_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoIcon != nullptr)
		*AmmoIcon = params.AmmoIcon;
	if (CurrentAmmoCount != nullptr)
		*CurrentAmmoCount = params.CurrentAmmoCount;
	if (AmmoPerClip != nullptr)
		*AmmoPerClip = params.AmmoPerClip;
	if (IsInTurretMode != nullptr)
		*IsInTurretMode = params.IsInTurretMode;
	if (HideAmmoCountHUDElement != nullptr)
		*HideAmmoCountHUDElement = params.HideAmmoCountHUDElement;
	if (AmmoItemTemplate != nullptr)
		*AmmoItemTemplate = params.AmmoItemTemplate;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
