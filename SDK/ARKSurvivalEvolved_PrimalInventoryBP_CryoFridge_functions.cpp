// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_CryoFridge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_CryoFridge.PrimalInventoryBP_CryoFridge_C.ExecuteUbergraph_PrimalInventoryBP_CryoFridge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_CryoFridge_C::ExecuteUbergraph_PrimalInventoryBP_CryoFridge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_CryoFridge.PrimalInventoryBP_CryoFridge_C.ExecuteUbergraph_PrimalInventoryBP_CryoFridge");

	UPrimalInventoryBP_CryoFridge_C_ExecuteUbergraph_PrimalInventoryBP_CryoFridge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
