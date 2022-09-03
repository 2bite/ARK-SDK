// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_GhostBasilisk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_GhostBasilisk.PrimalItemCostume_GhostBasilisk_C.ExecuteUbergraph_PrimalItemCostume_GhostBasilisk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_GhostBasilisk_C::ExecuteUbergraph_PrimalItemCostume_GhostBasilisk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_GhostBasilisk.PrimalItemCostume_GhostBasilisk_C.ExecuteUbergraph_PrimalItemCostume_GhostBasilisk");

	UPrimalItemCostume_GhostBasilisk_C_ExecuteUbergraph_PrimalItemCostume_GhostBasilisk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
