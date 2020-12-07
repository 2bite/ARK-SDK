// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FenceFoundation_Wood_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FenceFoundation_Wood_SM.FenceFoundation_Wood_SM_C.UserConstructionScript
// ()

void AFenceFoundation_Wood_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FenceFoundation_Wood_SM.FenceFoundation_Wood_SM_C.UserConstructionScript");

	AFenceFoundation_Wood_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FenceFoundation_Wood_SM.FenceFoundation_Wood_SM_C.ExecuteUbergraph_FenceFoundation_Wood_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFenceFoundation_Wood_SM_C::ExecuteUbergraph_FenceFoundation_Wood_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FenceFoundation_Wood_SM.FenceFoundation_Wood_SM_C.ExecuteUbergraph_FenceFoundation_Wood_SM");

	AFenceFoundation_Wood_SM_C_ExecuteUbergraph_FenceFoundation_Wood_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
