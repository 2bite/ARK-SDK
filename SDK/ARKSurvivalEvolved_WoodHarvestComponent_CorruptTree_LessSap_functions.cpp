// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodHarvestComponent_CorruptTree_LessSap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodHarvestComponent_CorruptTree_LessSap.WoodHarvestComponent_CorruptTree_LessSap_C.ExecuteUbergraph_WoodHarvestComponent_CorruptTree_LessSap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWoodHarvestComponent_CorruptTree_LessSap_C::ExecuteUbergraph_WoodHarvestComponent_CorruptTree_LessSap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodHarvestComponent_CorruptTree_LessSap.WoodHarvestComponent_CorruptTree_LessSap_C.ExecuteUbergraph_WoodHarvestComponent_CorruptTree_LessSap");

	UWoodHarvestComponent_CorruptTree_LessSap_C_ExecuteUbergraph_WoodHarvestComponent_CorruptTree_LessSap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
