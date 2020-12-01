// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Tiny_SuperChitinLeech_Diseased_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Tiny_SuperChitinLeech_Diseased.DinoDeathHarvestingComponent_Tiny_SuperChitinLeech_Diseased_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_SuperChitinLeech_Diseased
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Tiny_SuperChitinLeech_Diseased_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_SuperChitinLeech_Diseased(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Tiny_SuperChitinLeech_Diseased.DinoDeathHarvestingComponent_Tiny_SuperChitinLeech_Diseased_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_SuperChitinLeech_Diseased");

	UDinoDeathHarvestingComponent_Tiny_SuperChitinLeech_Diseased_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_SuperChitinLeech_Diseased_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
