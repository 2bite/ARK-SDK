// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ceiling_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ceiling_Metal.Ceiling_Metal_C.UserConstructionScript
// ()

void ACeiling_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Metal.Ceiling_Metal_C.UserConstructionScript");

	ACeiling_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ceiling_Metal.Ceiling_Metal_C.ExecuteUbergraph_Ceiling_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACeiling_Metal_C::ExecuteUbergraph_Ceiling_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Metal.Ceiling_Metal_C.ExecuteUbergraph_Ceiling_Metal");

	ACeiling_Metal_C_ExecuteUbergraph_Ceiling_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
