// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Light_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_Light_Base.PrimalInventoryBP_Light_Base_C.ExecuteUbergraph_PrimalInventoryBP_Light_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_Light_Base_C::ExecuteUbergraph_PrimalInventoryBP_Light_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_Light_Base.PrimalInventoryBP_Light_Base_C.ExecuteUbergraph_PrimalInventoryBP_Light_Base");

	UPrimalInventoryBP_Light_Base_C_ExecuteUbergraph_PrimalInventoryBP_Light_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
