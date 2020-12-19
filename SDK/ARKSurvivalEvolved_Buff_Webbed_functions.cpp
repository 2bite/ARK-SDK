// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Webbed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Webbed.Buff_Webbed_C.UserConstructionScript
// ()

void ABuff_Webbed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Webbed.Buff_Webbed_C.UserConstructionScript");

	ABuff_Webbed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Webbed.Buff_Webbed_C.ExecuteUbergraph_Buff_Webbed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Webbed_C::ExecuteUbergraph_Buff_Webbed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Webbed.Buff_Webbed_C.ExecuteUbergraph_Buff_Webbed");

	ABuff_Webbed_C_ExecuteUbergraph_Buff_Webbed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
