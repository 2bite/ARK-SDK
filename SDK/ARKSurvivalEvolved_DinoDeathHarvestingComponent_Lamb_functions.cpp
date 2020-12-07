// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Lamb_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Lamb.DinoDeathHarvestingComponent_Lamb_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Lamb
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Lamb_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Lamb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Lamb.DinoDeathHarvestingComponent_Lamb_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Lamb");

	UDinoDeathHarvestingComponent_Lamb_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Lamb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
