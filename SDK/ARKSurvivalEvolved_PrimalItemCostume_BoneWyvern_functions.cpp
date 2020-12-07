// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BoneWyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_BoneWyvern.PrimalItemCostume_BoneWyvern_C.ExecuteUbergraph_PrimalItemCostume_BoneWyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_BoneWyvern_C::ExecuteUbergraph_PrimalItemCostume_BoneWyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_BoneWyvern.PrimalItemCostume_BoneWyvern_C.ExecuteUbergraph_PrimalItemCostume_BoneWyvern");

	UPrimalItemCostume_BoneWyvern_C_ExecuteUbergraph_PrimalItemCostume_BoneWyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
