// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDeathHarvestingComponent_Small_Silk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDeathHarvestingComponent_Small_Silk.DinoDeathHarvestingComponent_Small_Silk_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Small_Silk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDeathHarvestingComponent_Small_Silk_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Small_Silk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Small_Silk.DinoDeathHarvestingComponent_Small_Silk_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Small_Silk");

	UDinoDeathHarvestingComponent_Small_Silk_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Small_Silk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
