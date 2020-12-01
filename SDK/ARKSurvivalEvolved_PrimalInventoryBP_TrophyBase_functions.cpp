// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TrophyBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TrophyBase.PrimalInventoryBP_TrophyBase_C.ExecuteUbergraph_PrimalInventoryBP_TrophyBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TrophyBase_C::ExecuteUbergraph_PrimalInventoryBP_TrophyBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TrophyBase.PrimalInventoryBP_TrophyBase_C.ExecuteUbergraph_PrimalInventoryBP_TrophyBase");

	UPrimalInventoryBP_TrophyBase_C_ExecuteUbergraph_PrimalInventoryBP_TrophyBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
