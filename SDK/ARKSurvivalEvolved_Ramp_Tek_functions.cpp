// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ramp_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ramp_Tek.Ramp_Tek_C.UserConstructionScript
// ()

void ARamp_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ramp_Tek.Ramp_Tek_C.UserConstructionScript");

	ARamp_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ramp_Tek.Ramp_Tek_C.ExecuteUbergraph_Ramp_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARamp_Tek_C::ExecuteUbergraph_Ramp_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ramp_Tek.Ramp_Tek_C.ExecuteUbergraph_Ramp_Tek");

	ARamp_Tek_C_ExecuteUbergraph_Ramp_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
