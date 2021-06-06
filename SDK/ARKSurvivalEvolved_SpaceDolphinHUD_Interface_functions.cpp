// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceDolphinHUD_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpaceDolphinHUD_Interface.SpaceDolphinHUD_Interface_C.GetHudData
// ()
// Parameters:
// bool                           HasSaddle                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsFPV                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HideHUDinFPV                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            LaserLevel                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MaxLaserLevel                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LaserDowngradeTime             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LaserDowngradeTimerRemaining   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsLaserDowngradeTimerActive    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         LastLaserLevelChangedTime      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UPrimalInventoryComponent* InventoryComponent             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  SaddleFuelItem                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FlakCannonAmmoItem             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsUsingSuperFlight             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsUsingSuperFlightBoost        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FuelPercent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CannonCooldownPercent          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          EchoOrChaffCooldownPercent     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsSubmerged                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USpaceDolphinHUD_Interface_C::GetHudData(bool* HasSaddle, bool* IsFPV, bool* HideHUDinFPV, int* LaserLevel, int* MaxLaserLevel, float* LaserDowngradeTime, float* LaserDowngradeTimerRemaining, bool* IsLaserDowngradeTimerActive, double* LastLaserLevelChangedTime, class UPrimalInventoryComponent** InventoryComponent, class UClass** SaddleFuelItem, class UClass** FlakCannonAmmoItem, bool* IsUsingSuperFlight, bool* IsUsingSuperFlightBoost, float* FuelPercent, float* CannonCooldownPercent, float* EchoOrChaffCooldownPercent, bool* IsSubmerged)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphinHUD_Interface.SpaceDolphinHUD_Interface_C.GetHudData");

	USpaceDolphinHUD_Interface_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasSaddle != nullptr)
		*HasSaddle = params.HasSaddle;
	if (IsFPV != nullptr)
		*IsFPV = params.IsFPV;
	if (HideHUDinFPV != nullptr)
		*HideHUDinFPV = params.HideHUDinFPV;
	if (LaserLevel != nullptr)
		*LaserLevel = params.LaserLevel;
	if (MaxLaserLevel != nullptr)
		*MaxLaserLevel = params.MaxLaserLevel;
	if (LaserDowngradeTime != nullptr)
		*LaserDowngradeTime = params.LaserDowngradeTime;
	if (LaserDowngradeTimerRemaining != nullptr)
		*LaserDowngradeTimerRemaining = params.LaserDowngradeTimerRemaining;
	if (IsLaserDowngradeTimerActive != nullptr)
		*IsLaserDowngradeTimerActive = params.IsLaserDowngradeTimerActive;
	if (LastLaserLevelChangedTime != nullptr)
		*LastLaserLevelChangedTime = params.LastLaserLevelChangedTime;
	if (InventoryComponent != nullptr)
		*InventoryComponent = params.InventoryComponent;
	if (SaddleFuelItem != nullptr)
		*SaddleFuelItem = params.SaddleFuelItem;
	if (FlakCannonAmmoItem != nullptr)
		*FlakCannonAmmoItem = params.FlakCannonAmmoItem;
	if (IsUsingSuperFlight != nullptr)
		*IsUsingSuperFlight = params.IsUsingSuperFlight;
	if (IsUsingSuperFlightBoost != nullptr)
		*IsUsingSuperFlightBoost = params.IsUsingSuperFlightBoost;
	if (FuelPercent != nullptr)
		*FuelPercent = params.FuelPercent;
	if (CannonCooldownPercent != nullptr)
		*CannonCooldownPercent = params.CannonCooldownPercent;
	if (EchoOrChaffCooldownPercent != nullptr)
		*EchoOrChaffCooldownPercent = params.EchoOrChaffCooldownPercent;
	if (IsSubmerged != nullptr)
		*IsSubmerged = params.IsSubmerged;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
