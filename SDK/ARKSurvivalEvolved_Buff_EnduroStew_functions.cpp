// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EnduroStew_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_EnduroStew.Buff_EnduroStew_C.UserConstructionScript
// ()

void ABuff_EnduroStew_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EnduroStew.Buff_EnduroStew_C.UserConstructionScript");

	ABuff_EnduroStew_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_EnduroStew.Buff_EnduroStew_C.ExecuteUbergraph_Buff_EnduroStew
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_EnduroStew_C::ExecuteUbergraph_Buff_EnduroStew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_EnduroStew.Buff_EnduroStew_C.ExecuteUbergraph_Buff_EnduroStew");

	ABuff_EnduroStew_C_ExecuteUbergraph_Buff_EnduroStew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
