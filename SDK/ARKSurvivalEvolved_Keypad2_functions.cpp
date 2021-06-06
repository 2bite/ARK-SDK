// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Keypad2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Keypad2.Keypad2_C.UserConstructionScript
// ()

void AKeypad2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Keypad2.Keypad2_C.UserConstructionScript");

	AKeypad2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Keypad2.Keypad2_C.ExecuteUbergraph_Keypad2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AKeypad2_C::ExecuteUbergraph_Keypad2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Keypad2.Keypad2_C.ExecuteUbergraph_Keypad2");

	AKeypad2_C_ExecuteUbergraph_Keypad2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
