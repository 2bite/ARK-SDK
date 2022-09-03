// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_CrystalWyvern_Fertilized_WS_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_CrystalWyvern_Fertilized_WS.PrimalItemConsumable_Egg_CrystalWyvern_Fertilized_WS_C.ExecuteUbergraph_PrimalItemConsumable_Egg_CrystalWyvern_Fertilized_WS
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_CrystalWyvern_Fertilized_WS_C::ExecuteUbergraph_PrimalItemConsumable_Egg_CrystalWyvern_Fertilized_WS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_CrystalWyvern_Fertilized_WS.PrimalItemConsumable_Egg_CrystalWyvern_Fertilized_WS_C.ExecuteUbergraph_PrimalItemConsumable_Egg_CrystalWyvern_Fertilized_WS");

	UPrimalItemConsumable_Egg_CrystalWyvern_Fertilized_WS_C_ExecuteUbergraph_PrimalItemConsumable_Egg_CrystalWyvern_Fertilized_WS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
