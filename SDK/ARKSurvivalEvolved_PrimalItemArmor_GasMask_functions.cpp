// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_GasMask_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_GasMask.PrimalItemArmor_GasMask_C.BlueprintEquipped
// ()
// Parameters:
// bool*                          bIsFromSaveGame                (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_GasMask_C::BlueprintEquipped(bool* bIsFromSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_GasMask.PrimalItemArmor_GasMask_C.BlueprintEquipped");

	UPrimalItemArmor_GasMask_C_BlueprintEquipped_Params params;
	params.bIsFromSaveGame = bIsFromSaveGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_GasMask.PrimalItemArmor_GasMask_C.BlueprintUnequipped
// ()

void UPrimalItemArmor_GasMask_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_GasMask.PrimalItemArmor_GasMask_C.BlueprintUnequipped");

	UPrimalItemArmor_GasMask_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemArmor_GasMask.PrimalItemArmor_GasMask_C.ExecuteUbergraph_PrimalItemArmor_GasMask
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_GasMask_C::ExecuteUbergraph_PrimalItemArmor_GasMask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_GasMask.PrimalItemArmor_GasMask_C.ExecuteUbergraph_PrimalItemArmor_GasMask");

	UPrimalItemArmor_GasMask_C_ExecuteUbergraph_PrimalItemArmor_GasMask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
