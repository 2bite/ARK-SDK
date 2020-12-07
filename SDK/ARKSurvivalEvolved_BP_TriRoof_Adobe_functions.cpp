// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_TriRoof_Adobe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TriRoof_Adobe.BP_TriRoof_Adobe_C.UserConstructionScript
// ()

void ABP_TriRoof_Adobe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TriRoof_Adobe.BP_TriRoof_Adobe_C.UserConstructionScript");

	ABP_TriRoof_Adobe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TriRoof_Adobe.BP_TriRoof_Adobe_C.ExecuteUbergraph_BP_TriRoof_Adobe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TriRoof_Adobe_C::ExecuteUbergraph_BP_TriRoof_Adobe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TriRoof_Adobe.BP_TriRoof_Adobe_C.ExecuteUbergraph_BP_TriRoof_Adobe");

	ABP_TriRoof_Adobe_C_ExecuteUbergraph_BP_TriRoof_Adobe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
