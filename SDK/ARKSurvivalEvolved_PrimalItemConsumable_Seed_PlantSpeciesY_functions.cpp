// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_PlantSpeciesY_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Seed_PlantSpeciesY.PrimalItemConsumable_Seed_PlantSpeciesY_C.ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesY
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_PlantSpeciesY_C::ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesY(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_PlantSpeciesY.PrimalItemConsumable_Seed_PlantSpeciesY_C.ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesY");

	UPrimalItemConsumable_Seed_PlantSpeciesY_C_ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesY_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
