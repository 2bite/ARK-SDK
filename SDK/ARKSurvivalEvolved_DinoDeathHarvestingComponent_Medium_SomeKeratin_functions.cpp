// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Medium_SomeKeratin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Medium_SomeKeratin.DinoDeathHarvestingComponent_Medium_SomeKeratin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_SomeKeratin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Medium_SomeKeratin_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_SomeKeratin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Medium_SomeKeratin.DinoDeathHarvestingComponent_Medium_SomeKeratin_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_SomeKeratin");

	UDinoDeathHarvestingComponent_Medium_SomeKeratin_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Medium_SomeKeratin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
