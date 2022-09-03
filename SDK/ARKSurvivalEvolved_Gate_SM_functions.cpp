// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gate_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gate_SM.Gate_SM_C.UserConstructionScript
// ()

void AGate_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gate_SM.Gate_SM_C.UserConstructionScript");

	AGate_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gate_SM.Gate_SM_C.ExecuteUbergraph_Gate_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGate_SM_C::ExecuteUbergraph_Gate_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gate_SM.Gate_SM_C.ExecuteUbergraph_Gate_SM");

	AGate_SM_C_ExecuteUbergraph_Gate_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
