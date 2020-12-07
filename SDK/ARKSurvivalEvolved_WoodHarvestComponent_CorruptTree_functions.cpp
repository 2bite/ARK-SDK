// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodHarvestComponent_CorruptTree_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodHarvestComponent_CorruptTree.WoodHarvestComponent_CorruptTree_C.ExecuteUbergraph_WoodHarvestComponent_CorruptTree
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWoodHarvestComponent_CorruptTree_C::ExecuteUbergraph_WoodHarvestComponent_CorruptTree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodHarvestComponent_CorruptTree.WoodHarvestComponent_CorruptTree_C.ExecuteUbergraph_WoodHarvestComponent_CorruptTree");

	UWoodHarvestComponent_CorruptTree_C_ExecuteUbergraph_WoodHarvestComponent_CorruptTree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
