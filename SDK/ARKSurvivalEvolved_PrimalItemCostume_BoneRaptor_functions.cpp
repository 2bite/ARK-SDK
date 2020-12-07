// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCostume_BoneRaptor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemCostume_BoneRaptor.PrimalItemCostume_BoneRaptor_C.ExecuteUbergraph_PrimalItemCostume_BoneRaptor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemCostume_BoneRaptor_C::ExecuteUbergraph_PrimalItemCostume_BoneRaptor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_BoneRaptor.PrimalItemCostume_BoneRaptor_C.ExecuteUbergraph_PrimalItemCostume_BoneRaptor");

	UPrimalItemCostume_BoneRaptor_C_ExecuteUbergraph_PrimalItemCostume_BoneRaptor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
