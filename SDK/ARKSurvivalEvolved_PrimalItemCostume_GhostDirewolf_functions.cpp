// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_GhostDirewolf_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_GhostDirewolf.PrimalItemCostume_GhostDirewolf_C.ExecuteUbergraph_PrimalItemCostume_GhostDirewolf
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_GhostDirewolf_C::ExecuteUbergraph_PrimalItemCostume_GhostDirewolf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_GhostDirewolf.PrimalItemCostume_GhostDirewolf_C.ExecuteUbergraph_PrimalItemCostume_GhostDirewolf");

	UPrimalItemCostume_GhostDirewolf_C_ExecuteUbergraph_PrimalItemCostume_GhostDirewolf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
