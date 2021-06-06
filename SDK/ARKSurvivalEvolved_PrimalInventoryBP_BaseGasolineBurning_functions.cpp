// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_BaseGasolineBurning_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_BaseGasolineBurning.PrimalInventoryBP_BaseGasolineBurning_C.ExecuteUbergraph_PrimalInventoryBP_BaseGasolineBurning
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_BaseGasolineBurning_C::ExecuteUbergraph_PrimalInventoryBP_BaseGasolineBurning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BaseGasolineBurning.PrimalInventoryBP_BaseGasolineBurning_C.ExecuteUbergraph_PrimalInventoryBP_BaseGasolineBurning");

	UPrimalInventoryBP_BaseGasolineBurning_C_ExecuteUbergraph_PrimalInventoryBP_BaseGasolineBurning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
