// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_RobotLightResource_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_RobotLightResource.DinoDeathHarvestingComponent_RobotLightResource_C.ExecuteUbergraph_DinoDeathHarvestingComponent_RobotLightResource
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_RobotLightResource_C::ExecuteUbergraph_DinoDeathHarvestingComponent_RobotLightResource(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_RobotLightResource.DinoDeathHarvestingComponent_RobotLightResource_C.ExecuteUbergraph_DinoDeathHarvestingComponent_RobotLightResource");

	UDinoDeathHarvestingComponent_RobotLightResource_C_ExecuteUbergraph_DinoDeathHarvestingComponent_RobotLightResource_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
