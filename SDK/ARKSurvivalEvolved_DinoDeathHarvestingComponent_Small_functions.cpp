// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Small.DinoDeathHarvestingComponent_Small_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Small_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Small.DinoDeathHarvestingComponent_Small_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Small");

	UDinoDeathHarvestingComponent_Small_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
