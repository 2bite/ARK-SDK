// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gate_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gate_Metal.Gate_Metal_C.UserConstructionScript
// ()

void AGate_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gate_Metal.Gate_Metal_C.UserConstructionScript");

	AGate_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gate_Metal.Gate_Metal_C.ExecuteUbergraph_Gate_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGate_Metal_C::ExecuteUbergraph_Gate_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gate_Metal.Gate_Metal_C.ExecuteUbergraph_Gate_Metal");

	AGate_Metal_C_ExecuteUbergraph_Gate_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
