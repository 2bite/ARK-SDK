// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StoneHarvestComponent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StoneHarvestComponent.StoneHarvestComponent_C.ExecuteUbergraph_StoneHarvestComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStoneHarvestComponent_C::ExecuteUbergraph_StoneHarvestComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoneHarvestComponent.StoneHarvestComponent_C.ExecuteUbergraph_StoneHarvestComponent");

	UStoneHarvestComponent_C_ExecuteUbergraph_StoneHarvestComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
