// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_CrystalWyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_CrystalWyvern.PrimalItemConsumable_Egg_CrystalWyvern_C.ExecuteUbergraph_PrimalItemConsumable_Egg_CrystalWyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_CrystalWyvern_C::ExecuteUbergraph_PrimalItemConsumable_Egg_CrystalWyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_CrystalWyvern.PrimalItemConsumable_Egg_CrystalWyvern_C.ExecuteUbergraph_PrimalItemConsumable_Egg_CrystalWyvern");

	UPrimalItemConsumable_Egg_CrystalWyvern_C_ExecuteUbergraph_PrimalItemConsumable_Egg_CrystalWyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
