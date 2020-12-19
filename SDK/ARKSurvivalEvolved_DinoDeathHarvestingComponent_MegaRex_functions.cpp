// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_MegaRex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_MegaRex.DinoDeathHarvestingComponent_MegaRex_C.ExecuteUbergraph_DinoDeathHarvestingComponent_MegaRex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_MegaRex_C::ExecuteUbergraph_DinoDeathHarvestingComponent_MegaRex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_MegaRex.DinoDeathHarvestingComponent_MegaRex_C.ExecuteUbergraph_DinoDeathHarvestingComponent_MegaRex");

	UDinoDeathHarvestingComponent_MegaRex_C_ExecuteUbergraph_DinoDeathHarvestingComponent_MegaRex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
