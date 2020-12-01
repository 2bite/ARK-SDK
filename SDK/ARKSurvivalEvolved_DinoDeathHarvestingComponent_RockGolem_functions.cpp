// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_RockGolem_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_RockGolem.DinoDeathHarvestingComponent_RockGolem_C.ExecuteUbergraph_DinoDeathHarvestingComponent_RockGolem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_RockGolem_C::ExecuteUbergraph_DinoDeathHarvestingComponent_RockGolem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_RockGolem.DinoDeathHarvestingComponent_RockGolem_C.ExecuteUbergraph_DinoDeathHarvestingComponent_RockGolem");

	UDinoDeathHarvestingComponent_RockGolem_C_ExecuteUbergraph_DinoDeathHarvestingComponent_RockGolem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
