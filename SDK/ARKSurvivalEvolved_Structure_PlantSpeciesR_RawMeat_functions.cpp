// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_PlantSpeciesR_RawMeat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_PlantSpeciesR_RawMeat.Structure_PlantSpeciesR_RawMeat_C.UserConstructionScript
// ()

void AStructure_PlantSpeciesR_RawMeat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR_RawMeat.Structure_PlantSpeciesR_RawMeat_C.UserConstructionScript");

	AStructure_PlantSpeciesR_RawMeat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesR_RawMeat.Structure_PlantSpeciesR_RawMeat_C.ExecuteUbergraph_Structure_PlantSpeciesR_RawMeat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesR_RawMeat_C::ExecuteUbergraph_Structure_PlantSpeciesR_RawMeat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR_RawMeat.Structure_PlantSpeciesR_RawMeat_C.ExecuteUbergraph_Structure_PlantSpeciesR_RawMeat");

	AStructure_PlantSpeciesR_RawMeat_C_ExecuteUbergraph_Structure_PlantSpeciesR_RawMeat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
