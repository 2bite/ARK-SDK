// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_PlantSpeciesZ_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Seed_PlantSpeciesZ.PrimalItemConsumable_Seed_PlantSpeciesZ_C.ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesZ
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_PlantSpeciesZ_C::ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesZ(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_PlantSpeciesZ.PrimalItemConsumable_Seed_PlantSpeciesZ_C.ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesZ");

	UPrimalItemConsumable_Seed_PlantSpeciesZ_C_ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesZ_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
