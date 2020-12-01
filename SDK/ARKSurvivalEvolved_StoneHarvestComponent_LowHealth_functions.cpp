// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StoneHarvestComponent_LowHealth_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StoneHarvestComponent_LowHealth.StoneHarvestComponent_LowHealth_C.ExecuteUbergraph_StoneHarvestComponent_LowHealth
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStoneHarvestComponent_LowHealth_C::ExecuteUbergraph_StoneHarvestComponent_LowHealth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoneHarvestComponent_LowHealth.StoneHarvestComponent_LowHealth_C.ExecuteUbergraph_StoneHarvestComponent_LowHealth");

	UStoneHarvestComponent_LowHealth_C_ExecuteUbergraph_StoneHarvestComponent_LowHealth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
