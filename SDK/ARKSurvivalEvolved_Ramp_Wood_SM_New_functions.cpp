// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ramp_Wood_SM_New_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ramp_Wood_SM_New.Ramp_Wood_SM_New_C.UserConstructionScript
// ()

void ARamp_Wood_SM_New_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ramp_Wood_SM_New.Ramp_Wood_SM_New_C.UserConstructionScript");

	ARamp_Wood_SM_New_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ramp_Wood_SM_New.Ramp_Wood_SM_New_C.ExecuteUbergraph_Ramp_Wood_SM_New
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARamp_Wood_SM_New_C::ExecuteUbergraph_Ramp_Wood_SM_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ramp_Wood_SM_New.Ramp_Wood_SM_New_C.ExecuteUbergraph_Ramp_Wood_SM_New");

	ARamp_Wood_SM_New_C_ExecuteUbergraph_Ramp_Wood_SM_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
