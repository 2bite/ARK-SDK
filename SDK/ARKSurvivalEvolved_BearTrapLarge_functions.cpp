// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BearTrapLarge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BearTrapLarge.BearTrapLarge_C.UserConstructionScript
// ()

void ABearTrapLarge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BearTrapLarge.BearTrapLarge_C.UserConstructionScript");

	ABearTrapLarge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BearTrapLarge.BearTrapLarge_C.ExecuteUbergraph_BearTrapLarge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABearTrapLarge_C::ExecuteUbergraph_BearTrapLarge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BearTrapLarge.BearTrapLarge_C.ExecuteUbergraph_BearTrapLarge");

	ABearTrapLarge_C_ExecuteUbergraph_BearTrapLarge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
