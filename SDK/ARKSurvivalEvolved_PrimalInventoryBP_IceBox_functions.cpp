// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_IceBox_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_IceBox.PrimalInventoryBP_IceBox_C.ExecuteUbergraph_PrimalInventoryBP_IceBox
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_IceBox_C::ExecuteUbergraph_PrimalInventoryBP_IceBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_IceBox.PrimalInventoryBP_IceBox_C.ExecuteUbergraph_PrimalInventoryBP_IceBox");

	UPrimalInventoryBP_IceBox_C_ExecuteUbergraph_PrimalInventoryBP_IceBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
