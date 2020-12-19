// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlantTrapStructureSettings_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlantTrapStructureSettings.PlantTrapStructureSettings_C.ExecuteUbergraph_PlantTrapStructureSettings
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlantTrapStructureSettings_C::ExecuteUbergraph_PlantTrapStructureSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlantTrapStructureSettings.PlantTrapStructureSettings_C.ExecuteUbergraph_PlantTrapStructureSettings");

	UPlantTrapStructureSettings_C_ExecuteUbergraph_PlantTrapStructureSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
