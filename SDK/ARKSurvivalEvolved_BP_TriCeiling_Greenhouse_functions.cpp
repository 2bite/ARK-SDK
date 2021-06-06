// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_TriCeiling_Greenhouse_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TriCeiling_Greenhouse.BP_TriCeiling_Greenhouse_C.UserConstructionScript
// ()

void ABP_TriCeiling_Greenhouse_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TriCeiling_Greenhouse.BP_TriCeiling_Greenhouse_C.UserConstructionScript");

	ABP_TriCeiling_Greenhouse_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TriCeiling_Greenhouse.BP_TriCeiling_Greenhouse_C.ExecuteUbergraph_BP_TriCeiling_Greenhouse
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TriCeiling_Greenhouse_C::ExecuteUbergraph_BP_TriCeiling_Greenhouse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TriCeiling_Greenhouse.BP_TriCeiling_Greenhouse_C.ExecuteUbergraph_BP_TriCeiling_Greenhouse");

	ABP_TriCeiling_Greenhouse_C_ExecuteUbergraph_BP_TriCeiling_Greenhouse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
