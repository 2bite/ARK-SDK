// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekBow_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekBow_Interface.TekBow_Interface_C.GetAmmoMultiuseEntries
// ()
// Parameters:
// TArray<struct FMultiUseEntry>  AmmoWheelEntries               (Parm, OutParm, ZeroConstructor)

void UTekBow_Interface_C::GetAmmoMultiuseEntries(TArray<struct FMultiUseEntry>* AmmoWheelEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBow_Interface.TekBow_Interface_C.GetAmmoMultiuseEntries");

	UTekBow_Interface_C_GetAmmoMultiuseEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoWheelEntries != nullptr)
		*AmmoWheelEntries = params.AmmoWheelEntries;
}


// Function TekBow_Interface.TekBow_Interface_C.GetHudData
// ()
// Parameters:
// class FString                  AmmoName                       (Parm, OutParm, ZeroConstructor)
// class UTexture2D*              AmmoIcon                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CurrentAmmoCount               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CurrentAmmoCost                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AmmoPerClip                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AmmoTypeIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            CurrentAmmoTypeColor           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsAccessoryActive              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTekBow_Interface_C::GetHudData(class FString* AmmoName, class UTexture2D** AmmoIcon, int* CurrentAmmoCount, int* CurrentAmmoCost, int* AmmoPerClip, int* AmmoTypeIndex, struct FLinearColor* CurrentAmmoTypeColor, bool* IsAccessoryActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBow_Interface.TekBow_Interface_C.GetHudData");

	UTekBow_Interface_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoName != nullptr)
		*AmmoName = params.AmmoName;
	if (AmmoIcon != nullptr)
		*AmmoIcon = params.AmmoIcon;
	if (CurrentAmmoCount != nullptr)
		*CurrentAmmoCount = params.CurrentAmmoCount;
	if (CurrentAmmoCost != nullptr)
		*CurrentAmmoCost = params.CurrentAmmoCost;
	if (AmmoPerClip != nullptr)
		*AmmoPerClip = params.AmmoPerClip;
	if (AmmoTypeIndex != nullptr)
		*AmmoTypeIndex = params.AmmoTypeIndex;
	if (CurrentAmmoTypeColor != nullptr)
		*CurrentAmmoTypeColor = params.CurrentAmmoTypeColor;
	if (IsAccessoryActive != nullptr)
		*IsAccessoryActive = params.IsAccessoryActive;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
