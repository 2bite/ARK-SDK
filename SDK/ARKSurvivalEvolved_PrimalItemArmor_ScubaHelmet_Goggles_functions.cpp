// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ScubaHelmet_Goggles_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ScubaHelmet_Goggles.PrimalItemArmor_ScubaHelmet_Goggles_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ScubaHelmet_Goggles_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ScubaHelmet_Goggles.PrimalItemArmor_ScubaHelmet_Goggles_C.BlueprintEquipped");

	UPrimalItemArmor_ScubaHelmet_Goggles_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_ScubaHelmet_Goggles.PrimalItemArmor_ScubaHelmet_Goggles_C.BlueprintUnequipped
// ()

void UPrimalItemArmor_ScubaHelmet_Goggles_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ScubaHelmet_Goggles.PrimalItemArmor_ScubaHelmet_Goggles_C.BlueprintUnequipped");

	UPrimalItemArmor_ScubaHelmet_Goggles_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_ScubaHelmet_Goggles.PrimalItemArmor_ScubaHelmet_Goggles_C.ExecuteUbergraph_PrimalItemArmor_ScubaHelmet_Goggles
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_ScubaHelmet_Goggles_C::ExecuteUbergraph_PrimalItemArmor_ScubaHelmet_Goggles(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ScubaHelmet_Goggles.PrimalItemArmor_ScubaHelmet_Goggles_C.ExecuteUbergraph_PrimalItemArmor_ScubaHelmet_Goggles");

	UPrimalItemArmor_ScubaHelmet_Goggles_C_ExecuteUbergraph_PrimalItemArmor_ScubaHelmet_Goggles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
