// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_BaseFuelBurning_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_BaseFuelBurning.PrimalInventoryBP_BaseFuelBurning_C.ExecuteUbergraph_PrimalInventoryBP_BaseFuelBurning
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_BaseFuelBurning_C::ExecuteUbergraph_PrimalInventoryBP_BaseFuelBurning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BaseFuelBurning.PrimalInventoryBP_BaseFuelBurning_C.ExecuteUbergraph_PrimalInventoryBP_BaseFuelBurning");

	UPrimalInventoryBP_BaseFuelBurning_C_ExecuteUbergraph_PrimalInventoryBP_BaseFuelBurning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
