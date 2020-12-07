// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_PlantSpeciesYTrap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_PlantSpeciesYTrap.PrimalItemStructure_PlantSpeciesYTrap_C.ExecuteUbergraph_PrimalItemStructure_PlantSpeciesYTrap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_PlantSpeciesYTrap_C::ExecuteUbergraph_PrimalItemStructure_PlantSpeciesYTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_PlantSpeciesYTrap.PrimalItemStructure_PlantSpeciesYTrap_C.ExecuteUbergraph_PrimalItemStructure_PlantSpeciesYTrap");

	UPrimalItemStructure_PlantSpeciesYTrap_C_ExecuteUbergraph_PrimalItemStructure_PlantSpeciesYTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
