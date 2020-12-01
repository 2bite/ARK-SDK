// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_HatRack_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_HatRack.PrimalInventoryBP_HatRack_C.ExecuteUbergraph_PrimalInventoryBP_HatRack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_HatRack_C::ExecuteUbergraph_PrimalInventoryBP_HatRack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_HatRack.PrimalInventoryBP_HatRack_C.ExecuteUbergraph_PrimalInventoryBP_HatRack");

	UPrimalInventoryBP_HatRack_C_ExecuteUbergraph_PrimalInventoryBP_HatRack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
