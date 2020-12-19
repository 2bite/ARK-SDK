// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Cannon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_Cannon.PrimalInventoryBP_Cannon_C.ExecuteUbergraph_PrimalInventoryBP_Cannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_Cannon_C::ExecuteUbergraph_PrimalInventoryBP_Cannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_Cannon.PrimalInventoryBP_Cannon_C.ExecuteUbergraph_PrimalInventoryBP_Cannon");

	UPrimalInventoryBP_Cannon_C_ExecuteUbergraph_PrimalInventoryBP_Cannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
