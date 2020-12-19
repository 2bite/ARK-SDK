// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BoneCarno_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_BoneCarno.PrimalItemCostume_BoneCarno_C.ExecuteUbergraph_PrimalItemCostume_BoneCarno
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_BoneCarno_C::ExecuteUbergraph_PrimalItemCostume_BoneCarno(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_BoneCarno.PrimalItemCostume_BoneCarno_C.ExecuteUbergraph_PrimalItemCostume_BoneCarno");

	UPrimalItemCostume_BoneCarno_C_ExecuteUbergraph_PrimalItemCostume_BoneCarno_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
