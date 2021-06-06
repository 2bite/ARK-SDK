// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Grill_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_Grill.PrimalInventoryBP_Grill_C.ExecuteUbergraph_PrimalInventoryBP_Grill
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_Grill_C::ExecuteUbergraph_PrimalInventoryBP_Grill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_Grill.PrimalInventoryBP_Grill_C.ExecuteUbergraph_PrimalInventoryBP_Grill");

	UPrimalInventoryBP_Grill_C_ExecuteUbergraph_PrimalInventoryBP_Grill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
