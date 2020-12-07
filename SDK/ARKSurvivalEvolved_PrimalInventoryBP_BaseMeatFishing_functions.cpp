// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_BaseMeatFishing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_BaseMeatFishing.PrimalInventoryBP_BaseMeatFishing_C.ExecuteUbergraph_PrimalInventoryBP_BaseMeatFishing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_BaseMeatFishing_C::ExecuteUbergraph_PrimalInventoryBP_BaseMeatFishing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_BaseMeatFishing.PrimalInventoryBP_BaseMeatFishing_C.ExecuteUbergraph_PrimalInventoryBP_BaseMeatFishing");

	UPrimalInventoryBP_BaseMeatFishing_C_ExecuteUbergraph_PrimalInventoryBP_BaseMeatFishing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
