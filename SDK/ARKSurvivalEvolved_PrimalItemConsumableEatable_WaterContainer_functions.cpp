// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumableEatable_WaterContainer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumableEatable_WaterContainer.PrimalItemConsumableEatable_WaterContainer_C.ExecuteUbergraph_PrimalItemConsumableEatable_WaterContainer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumableEatable_WaterContainer_C::ExecuteUbergraph_PrimalItemConsumableEatable_WaterContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableEatable_WaterContainer.PrimalItemConsumableEatable_WaterContainer_C.ExecuteUbergraph_PrimalItemConsumableEatable_WaterContainer");

	UPrimalItemConsumableEatable_WaterContainer_C_ExecuteUbergraph_PrimalItemConsumableEatable_WaterContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
