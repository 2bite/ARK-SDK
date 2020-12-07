// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FenceFoundation_Base_New_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FenceFoundation_Base_New.FenceFoundation_Base_New_C.NewFunction_1
// ()

void AFenceFoundation_Base_New_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function FenceFoundation_Base_New.FenceFoundation_Base_New_C.NewFunction_1");

	AFenceFoundation_Base_New_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FenceFoundation_Base_New.FenceFoundation_Base_New_C.UserConstructionScript
// ()

void AFenceFoundation_Base_New_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FenceFoundation_Base_New.FenceFoundation_Base_New_C.UserConstructionScript");

	AFenceFoundation_Base_New_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FenceFoundation_Base_New.FenceFoundation_Base_New_C.ExecuteUbergraph_FenceFoundation_Base_New
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFenceFoundation_Base_New_C::ExecuteUbergraph_FenceFoundation_Base_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FenceFoundation_Base_New.FenceFoundation_Base_New_C.ExecuteUbergraph_FenceFoundation_Base_New");

	AFenceFoundation_Base_New_C_ExecuteUbergraph_FenceFoundation_Base_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
