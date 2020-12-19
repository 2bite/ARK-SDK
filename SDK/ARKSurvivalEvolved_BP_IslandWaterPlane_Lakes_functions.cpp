// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_IslandWaterPlane_Lakes_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_IslandWaterPlane_Lakes.BP_IslandWaterPlane_Lakes_C.UserConstructionScript
// ()

void ABP_IslandWaterPlane_Lakes_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandWaterPlane_Lakes.BP_IslandWaterPlane_Lakes_C.UserConstructionScript");

	ABP_IslandWaterPlane_Lakes_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandWaterPlane_Lakes.BP_IslandWaterPlane_Lakes_C.ExecuteUbergraph_BP_IslandWaterPlane_Lakes
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_IslandWaterPlane_Lakes_C::ExecuteUbergraph_BP_IslandWaterPlane_Lakes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandWaterPlane_Lakes.BP_IslandWaterPlane_Lakes_C.ExecuteUbergraph_BP_IslandWaterPlane_Lakes");

	ABP_IslandWaterPlane_Lakes_C_ExecuteUbergraph_BP_IslandWaterPlane_Lakes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
