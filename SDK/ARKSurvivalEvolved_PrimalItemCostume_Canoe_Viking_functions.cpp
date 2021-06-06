// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_Canoe_Viking_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_Canoe_Viking.PrimalItemCostume_Canoe_Viking_C.ExecuteUbergraph_PrimalItemCostume_Canoe_Viking
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_Canoe_Viking_C::ExecuteUbergraph_PrimalItemCostume_Canoe_Viking(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_Canoe_Viking.PrimalItemCostume_Canoe_Viking_C.ExecuteUbergraph_PrimalItemCostume_Canoe_Viking");

	UPrimalItemCostume_Canoe_Viking_C_ExecuteUbergraph_PrimalItemCostume_Canoe_Viking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
