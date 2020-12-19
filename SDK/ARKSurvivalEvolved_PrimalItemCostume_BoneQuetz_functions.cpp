// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BoneQuetz_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_BoneQuetz.PrimalItemCostume_BoneQuetz_C.ExecuteUbergraph_PrimalItemCostume_BoneQuetz
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_BoneQuetz_C::ExecuteUbergraph_PrimalItemCostume_BoneQuetz(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_BoneQuetz.PrimalItemCostume_BoneQuetz_C.ExecuteUbergraph_PrimalItemCostume_BoneQuetz");

	UPrimalItemCostume_BoneQuetz_C_ExecuteUbergraph_PrimalItemCostume_BoneQuetz_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
