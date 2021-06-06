// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ramp_Base_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ramp_Base_SM.Ramp_Base_SM_C.UserConstructionScript
// ()

void ARamp_Base_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ramp_Base_SM.Ramp_Base_SM_C.UserConstructionScript");

	ARamp_Base_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ramp_Base_SM.Ramp_Base_SM_C.ExecuteUbergraph_Ramp_Base_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARamp_Base_SM_C::ExecuteUbergraph_Ramp_Base_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ramp_Base_SM.Ramp_Base_SM_C.ExecuteUbergraph_Ramp_Base_SM");

	ARamp_Base_SM_C_ExecuteUbergraph_Ramp_Base_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
