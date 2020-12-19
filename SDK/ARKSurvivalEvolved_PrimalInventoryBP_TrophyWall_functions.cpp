// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TrophyWall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TrophyWall.PrimalInventoryBP_TrophyWall_C.ExecuteUbergraph_PrimalInventoryBP_TrophyWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_TrophyWall_C::ExecuteUbergraph_PrimalInventoryBP_TrophyWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TrophyWall.PrimalInventoryBP_TrophyWall_C.ExecuteUbergraph_PrimalInventoryBP_TrophyWall");

	UPrimalInventoryBP_TrophyWall_C_ExecuteUbergraph_PrimalInventoryBP_TrophyWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
