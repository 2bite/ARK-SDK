// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TropeHUD_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TropeHUD_Interface.TropeHUD_Interface_C.GetHudData
// ()
// Parameters:
// bool                           HasSaddle                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UPrimalInventoryComponent* InventoryComponent             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  SaddleFuelItem                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FlakCannonAmmoItem             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsUsingSuperFlight             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsUsingSuperFlightBoost        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FuelPercent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CannonCooldownPercent          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          SpeedPercent                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTropeHUD_Interface_C::GetHudData(bool* HasSaddle, class UPrimalInventoryComponent** InventoryComponent, class UClass** SaddleFuelItem, class UClass** FlakCannonAmmoItem, bool* IsUsingSuperFlight, bool* IsUsingSuperFlightBoost, float* FuelPercent, float* CannonCooldownPercent, float* SpeedPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TropeHUD_Interface.TropeHUD_Interface_C.GetHudData");

	UTropeHUD_Interface_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasSaddle != nullptr)
		*HasSaddle = params.HasSaddle;
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
	if (SpeedPercent != nullptr)
		*SpeedPercent = params.SpeedPercent;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
