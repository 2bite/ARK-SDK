// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BoneRex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_BoneRex.PrimalItemCostume_BoneRex_C.ExecuteUbergraph_PrimalItemCostume_BoneRex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_BoneRex_C::ExecuteUbergraph_PrimalItemCostume_BoneRex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_BoneRex.PrimalItemCostume_BoneRex_C.ExecuteUbergraph_PrimalItemCostume_BoneRex");

	UPrimalItemCostume_BoneRex_C_ExecuteUbergraph_PrimalItemCostume_BoneRex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
