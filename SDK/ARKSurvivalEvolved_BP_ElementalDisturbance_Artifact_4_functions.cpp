// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_ElementalDisturbance_Artifact_4_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ElementalDisturbance_Artifact_4.BP_ElementalDisturbance_Artifact_3_C.UserConstructionScript
// ()

void ABP_ElementalDisturbance_Artifact_3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElementalDisturbance_Artifact_4.BP_ElementalDisturbance_Artifact_3_C.UserConstructionScript");

	ABP_ElementalDisturbance_Artifact_3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ElementalDisturbance_Artifact_4.BP_ElementalDisturbance_Artifact_3_C.ExecuteUbergraph_BP_ElementalDisturbance_Artifact_4
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ElementalDisturbance_Artifact_3_C::ExecuteUbergraph_BP_ElementalDisturbance_Artifact_4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElementalDisturbance_Artifact_4.BP_ElementalDisturbance_Artifact_3_C.ExecuteUbergraph_BP_ElementalDisturbance_Artifact_4");

	ABP_ElementalDisturbance_Artifact_3_C_ExecuteUbergraph_BP_ElementalDisturbance_Artifact_4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
