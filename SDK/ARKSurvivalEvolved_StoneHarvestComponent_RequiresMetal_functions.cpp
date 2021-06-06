// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StoneHarvestComponent_RequiresMetal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StoneHarvestComponent_RequiresMetal.StoneHarvestComponent_RequiresMetal_C.ExecuteUbergraph_StoneHarvestComponent_RequiresMetal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStoneHarvestComponent_RequiresMetal_C::ExecuteUbergraph_StoneHarvestComponent_RequiresMetal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoneHarvestComponent_RequiresMetal.StoneHarvestComponent_RequiresMetal_C.ExecuteUbergraph_StoneHarvestComponent_RequiresMetal");

	UStoneHarvestComponent_RequiresMetal_C_ExecuteUbergraph_StoneHarvestComponent_RequiresMetal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
