// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Catapult_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_Catapult.PrimalInventoryBP_Catapult_C.ExecuteUbergraph_PrimalInventoryBP_Catapult
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_Catapult_C::ExecuteUbergraph_PrimalInventoryBP_Catapult(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_Catapult.PrimalInventoryBP_Catapult_C.ExecuteUbergraph_PrimalInventoryBP_Catapult");

	UPrimalInventoryBP_Catapult_C_ExecuteUbergraph_PrimalInventoryBP_Catapult_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
