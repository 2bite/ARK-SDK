// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EggIncubatorInterface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EggIncubatorInterface.EggIncubatorInterface_C.IsEggItemAllowed
// ()
// Parameters:
// class UPrimalItemConsumable_Egg_C* eggItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAllowed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEggIncubatorInterface_C::IsEggItemAllowed(class UPrimalItemConsumable_Egg_C* eggItem, bool* IsAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubatorInterface.EggIncubatorInterface_C.IsEggItemAllowed");

	UEggIncubatorInterface_C_IsEggItemAllowed_Params params;
	params.eggItem = eggItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAllowed != nullptr)
		*IsAllowed = params.IsAllowed;
}


// Function EggIncubatorInterface.EggIncubatorInterface_C.GetItemDisplaySlot
// ()
// Parameters:
// class UPrimalItem*             ForItem                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InSlot                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           SlotFound                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEggIncubatorInterface_C::GetItemDisplaySlot(class UPrimalItem* ForItem, int* InSlot, bool* SlotFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function EggIncubatorInterface.EggIncubatorInterface_C.GetItemDisplaySlot");

	UEggIncubatorInterface_C_GetItemDisplaySlot_Params params;
	params.ForItem = ForItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSlot != nullptr)
		*InSlot = params.InSlot;
	if (SlotFound != nullptr)
		*SlotFound = params.SlotFound;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
