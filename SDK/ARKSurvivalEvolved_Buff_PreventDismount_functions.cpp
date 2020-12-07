// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventDismount_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PreventDismount.Buff_PreventDismount_C.UserConstructionScript
// ()

void ABuff_PreventDismount_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventDismount.Buff_PreventDismount_C.UserConstructionScript");

	ABuff_PreventDismount_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventDismount.Buff_PreventDismount_C.ExecuteUbergraph_Buff_PreventDismount
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PreventDismount_C::ExecuteUbergraph_Buff_PreventDismount(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventDismount.Buff_PreventDismount_C.ExecuteUbergraph_Buff_PreventDismount");

	ABuff_PreventDismount_C_ExecuteUbergraph_Buff_PreventDismount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
