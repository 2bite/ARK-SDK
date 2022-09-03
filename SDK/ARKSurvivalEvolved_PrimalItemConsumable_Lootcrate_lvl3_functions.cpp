// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Lootcrate_lvl3_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Lootcrate_lvl3.PrimalItemConsumable_Lootcrate_lvl3_C.ExecuteUbergraph_PrimalItemConsumable_Lootcrate_lvl3
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Lootcrate_lvl3_C::ExecuteUbergraph_PrimalItemConsumable_Lootcrate_lvl3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Lootcrate_lvl3.PrimalItemConsumable_Lootcrate_lvl3_C.ExecuteUbergraph_PrimalItemConsumable_Lootcrate_lvl3");

	UPrimalItemConsumable_Lootcrate_lvl3_C_ExecuteUbergraph_PrimalItemConsumable_Lootcrate_lvl3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
