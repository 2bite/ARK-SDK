// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_PlantSpeciesR_SpoiledMeat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_PlantSpeciesR_SpoiledMeat.Structure_PlantSpeciesR_SpoiledMeat_C.UserConstructionScript
// ()

void AStructure_PlantSpeciesR_SpoiledMeat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR_SpoiledMeat.Structure_PlantSpeciesR_SpoiledMeat_C.UserConstructionScript");

	AStructure_PlantSpeciesR_SpoiledMeat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesR_SpoiledMeat.Structure_PlantSpeciesR_SpoiledMeat_C.ExecuteUbergraph_Structure_PlantSpeciesR_SpoiledMeat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesR_SpoiledMeat_C::ExecuteUbergraph_Structure_PlantSpeciesR_SpoiledMeat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR_SpoiledMeat.Structure_PlantSpeciesR_SpoiledMeat_C.ExecuteUbergraph_Structure_PlantSpeciesR_SpoiledMeat");

	AStructure_PlantSpeciesR_SpoiledMeat_C_ExecuteUbergraph_Structure_PlantSpeciesR_SpoiledMeat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
