// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_ProcopBunny_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_ProcopBunny.PrimalItemCostume_ProcopBunny_C.ExecuteUbergraph_PrimalItemCostume_ProcopBunny
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_ProcopBunny_C::ExecuteUbergraph_PrimalItemCostume_ProcopBunny(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_ProcopBunny.PrimalItemCostume_ProcopBunny_C.ExecuteUbergraph_PrimalItemCostume_ProcopBunny");

	UPrimalItemCostume_ProcopBunny_C_ExecuteUbergraph_PrimalItemCostume_ProcopBunny_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
