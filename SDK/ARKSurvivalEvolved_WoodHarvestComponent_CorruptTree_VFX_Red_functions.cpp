// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodHarvestComponent_CorruptTree_VFX_Red_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodHarvestComponent_CorruptTree_VFX_Red.WoodHarvestComponent_CorruptTree_VFX_Red_C.ExecuteUbergraph_WoodHarvestComponent_CorruptTree_VFX_Red
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWoodHarvestComponent_CorruptTree_VFX_Red_C::ExecuteUbergraph_WoodHarvestComponent_CorruptTree_VFX_Red(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodHarvestComponent_CorruptTree_VFX_Red.WoodHarvestComponent_CorruptTree_VFX_Red_C.ExecuteUbergraph_WoodHarvestComponent_CorruptTree_VFX_Red");

	UWoodHarvestComponent_CorruptTree_VFX_Red_C_ExecuteUbergraph_WoodHarvestComponent_CorruptTree_VFX_Red_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
