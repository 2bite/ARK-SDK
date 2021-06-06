// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Railing_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Railing_Metal.Railing_Metal_C.UserConstructionScript
// ()

void ARailing_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Railing_Metal.Railing_Metal_C.UserConstructionScript");

	ARailing_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Railing_Metal.Railing_Metal_C.ExecuteUbergraph_Railing_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARailing_Metal_C::ExecuteUbergraph_Railing_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Railing_Metal.Railing_Metal_C.ExecuteUbergraph_Railing_Metal");

	ARailing_Metal_C_ExecuteUbergraph_Railing_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
