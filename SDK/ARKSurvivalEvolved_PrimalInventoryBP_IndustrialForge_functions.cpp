// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_IndustrialForge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_IndustrialForge.PrimalInventoryBP_IndustrialForge_C.ExecuteUbergraph_PrimalInventoryBP_IndustrialForge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_IndustrialForge_C::ExecuteUbergraph_PrimalInventoryBP_IndustrialForge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_IndustrialForge.PrimalInventoryBP_IndustrialForge_C.ExecuteUbergraph_PrimalInventoryBP_IndustrialForge");

	UPrimalInventoryBP_IndustrialForge_C_ExecuteUbergraph_PrimalInventoryBP_IndustrialForge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
