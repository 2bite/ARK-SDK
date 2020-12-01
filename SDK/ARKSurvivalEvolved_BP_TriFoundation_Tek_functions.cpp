// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_TriFoundation_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TriFoundation_Tek.BP_TriFoundation_Tek_C.UserConstructionScript
// ()

void ABP_TriFoundation_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TriFoundation_Tek.BP_TriFoundation_Tek_C.UserConstructionScript");

	ABP_TriFoundation_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TriFoundation_Tek.BP_TriFoundation_Tek_C.ExecuteUbergraph_BP_TriFoundation_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TriFoundation_Tek_C::ExecuteUbergraph_BP_TriFoundation_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TriFoundation_Tek.BP_TriFoundation_Tek_C.ExecuteUbergraph_BP_TriFoundation_Tek");

	ABP_TriFoundation_Tek_C_ExecuteUbergraph_BP_TriFoundation_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
