// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_SaddleGeneric_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_SaddleGeneric_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.BlueprintEquipped");

	UPrimalItemArmor_SaddleGeneric_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.ExecuteUbergraph_PrimalItemArmor_SaddleGeneric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_SaddleGeneric_C::ExecuteUbergraph_PrimalItemArmor_SaddleGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.ExecuteUbergraph_PrimalItemArmor_SaddleGeneric");

	UPrimalItemArmor_SaddleGeneric_C_ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
