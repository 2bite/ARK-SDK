// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OilHarvestComponent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OilHarvestComponent.OilHarvestComponent_C.ExecuteUbergraph_OilHarvestComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UOilHarvestComponent_C::ExecuteUbergraph_OilHarvestComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OilHarvestComponent.OilHarvestComponent_C.ExecuteUbergraph_OilHarvestComponent");

	UOilHarvestComponent_C_ExecuteUbergraph_OilHarvestComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
