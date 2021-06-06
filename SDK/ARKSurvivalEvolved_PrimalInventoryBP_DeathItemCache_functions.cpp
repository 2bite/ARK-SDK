// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_DeathItemCache_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_DeathItemCache.PrimalInventoryBP_DeathItemCache_C.ExecuteUbergraph_PrimalInventoryBP_DeathItemCache
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_DeathItemCache_C::ExecuteUbergraph_PrimalInventoryBP_DeathItemCache(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_DeathItemCache.PrimalInventoryBP_DeathItemCache_C.ExecuteUbergraph_PrimalInventoryBP_DeathItemCache");

	UPrimalInventoryBP_DeathItemCache_C_ExecuteUbergraph_PrimalInventoryBP_DeathItemCache_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
