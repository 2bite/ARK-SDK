// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlantSpeciesZDeathEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlantSpeciesZDeathEmitter.PlantSpeciesZDeathEmitter_C.UserConstructionScript
// ()

void APlantSpeciesZDeathEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlantSpeciesZDeathEmitter.PlantSpeciesZDeathEmitter_C.UserConstructionScript");

	APlantSpeciesZDeathEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlantSpeciesZDeathEmitter.PlantSpeciesZDeathEmitter_C.ExecuteUbergraph_PlantSpeciesZDeathEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlantSpeciesZDeathEmitter_C::ExecuteUbergraph_PlantSpeciesZDeathEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlantSpeciesZDeathEmitter.PlantSpeciesZDeathEmitter_C.ExecuteUbergraph_PlantSpeciesZDeathEmitter");

	APlantSpeciesZDeathEmitter_C_ExecuteUbergraph_PlantSpeciesZDeathEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
