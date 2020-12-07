// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_Ramp_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Ramp_Wood.BP_Ramp_Wood_C.UserConstructionScript
// ()

void ABP_Ramp_Wood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ramp_Wood.BP_Ramp_Wood_C.UserConstructionScript");

	ABP_Ramp_Wood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ramp_Wood.BP_Ramp_Wood_C.ExecuteUbergraph_BP_Ramp_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ramp_Wood_C::ExecuteUbergraph_BP_Ramp_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ramp_Wood.BP_Ramp_Wood_C.ExecuteUbergraph_BP_Ramp_Wood");

	ABP_Ramp_Wood_C_ExecuteUbergraph_BP_Ramp_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
