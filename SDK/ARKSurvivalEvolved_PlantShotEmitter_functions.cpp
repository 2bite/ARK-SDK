// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlantShotEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlantShotEmitter.PlantShotEmitter_C.UserConstructionScript
// ()

void APlantShotEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlantShotEmitter.PlantShotEmitter_C.UserConstructionScript");

	APlantShotEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlantShotEmitter.PlantShotEmitter_C.ExecuteUbergraph_PlantShotEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlantShotEmitter_C::ExecuteUbergraph_PlantShotEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlantShotEmitter.PlantShotEmitter_C.ExecuteUbergraph_PlantShotEmitter");

	APlantShotEmitter_C_ExecuteUbergraph_PlantShotEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
