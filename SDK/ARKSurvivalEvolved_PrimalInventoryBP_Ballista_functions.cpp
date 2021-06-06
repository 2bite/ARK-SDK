// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Ballista_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_Ballista.PrimalInventoryBP_Ballista_C.ExecuteUbergraph_PrimalInventoryBP_Ballista
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_Ballista_C::ExecuteUbergraph_PrimalInventoryBP_Ballista(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_Ballista.PrimalInventoryBP_Ballista_C.ExecuteUbergraph_PrimalInventoryBP_Ballista");

	UPrimalInventoryBP_Ballista_C_ExecuteUbergraph_PrimalInventoryBP_Ballista_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
