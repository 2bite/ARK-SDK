// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlantSpeciesZFlashbangEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlantSpeciesZFlashbangEmitter.PlantSpeciesZFlashbangEmitter_C.UserConstructionScript
// ()

void APlantSpeciesZFlashbangEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlantSpeciesZFlashbangEmitter.PlantSpeciesZFlashbangEmitter_C.UserConstructionScript");

	APlantSpeciesZFlashbangEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlantSpeciesZFlashbangEmitter.PlantSpeciesZFlashbangEmitter_C.ExecuteUbergraph_PlantSpeciesZFlashbangEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlantSpeciesZFlashbangEmitter_C::ExecuteUbergraph_PlantSpeciesZFlashbangEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlantSpeciesZFlashbangEmitter.PlantSpeciesZFlashbangEmitter_C.ExecuteUbergraph_PlantSpeciesZFlashbangEmitter");

	APlantSpeciesZFlashbangEmitter_C_ExecuteUbergraph_PlantSpeciesZFlashbangEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
