// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Small_LessPelt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Small_LessPelt.DinoDeathHarvestingComponent_Small_LessPelt_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Small_LessPelt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Small_LessPelt_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Small_LessPelt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Small_LessPelt.DinoDeathHarvestingComponent_Small_LessPelt_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Small_LessPelt");

	UDinoDeathHarvestingComponent_Small_LessPelt_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Small_LessPelt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
