// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ramp_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ramp_Metal.Ramp_Metal_C.UserConstructionScript
// ()

void ARamp_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ramp_Metal.Ramp_Metal_C.UserConstructionScript");

	ARamp_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ramp_Metal.Ramp_Metal_C.ExecuteUbergraph_Ramp_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARamp_Metal_C::ExecuteUbergraph_Ramp_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ramp_Metal.Ramp_Metal_C.ExecuteUbergraph_Ramp_Metal");

	ARamp_Metal_C_ExecuteUbergraph_Ramp_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
