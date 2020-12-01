// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Doorframe_Base_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Doorframe_Base_SM.Doorframe_Base_SM_C.UserConstructionScript
// ()

void ADoorframe_Base_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Doorframe_Base_SM.Doorframe_Base_SM_C.UserConstructionScript");

	ADoorframe_Base_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Doorframe_Base_SM.Doorframe_Base_SM_C.ExecuteUbergraph_Doorframe_Base_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADoorframe_Base_SM_C::ExecuteUbergraph_Doorframe_Base_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Doorframe_Base_SM.Doorframe_Base_SM_C.ExecuteUbergraph_Doorframe_Base_SM");

	ADoorframe_Base_SM_C_ExecuteUbergraph_Doorframe_Base_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
