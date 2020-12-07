// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Keypad_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Keypad.EngramEntry_Keypad_C.ExecuteUbergraph_EngramEntry_Keypad
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Keypad_C::ExecuteUbergraph_EngramEntry_Keypad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Keypad.EngramEntry_Keypad_C.ExecuteUbergraph_EngramEntry_Keypad");

	UEngramEntry_Keypad_C_ExecuteUbergraph_EngramEntry_Keypad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
