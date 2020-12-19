// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BoneJerboa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_BoneJerboa.PrimalItemCostume_BoneJerboa_C.ExecuteUbergraph_PrimalItemCostume_BoneJerboa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_BoneJerboa_C::ExecuteUbergraph_PrimalItemCostume_BoneJerboa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_BoneJerboa.PrimalItemCostume_BoneJerboa_C.ExecuteUbergraph_PrimalItemCostume_BoneJerboa");

	UPrimalItemCostume_BoneJerboa_C_ExecuteUbergraph_PrimalItemCostume_BoneJerboa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
