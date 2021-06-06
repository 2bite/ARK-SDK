// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Medium_PeltAndKeratin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Medium_PeltAndKeratin.DinoDeathHarvestingComponent_Medium_PeltAndKeratin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_PeltAndKeratin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Medium_PeltAndKeratin_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_PeltAndKeratin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Medium_PeltAndKeratin.DinoDeathHarvestingComponent_Medium_PeltAndKeratin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_PeltAndKeratin");

	UDinoDeathHarvestingComponent_Medium_PeltAndKeratin_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_PeltAndKeratin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
