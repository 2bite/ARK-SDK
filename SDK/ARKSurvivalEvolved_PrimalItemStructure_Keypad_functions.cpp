// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Keypad_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Keypad.PrimalItemStructure_Keypad_C.ExecuteUbergraph_PrimalItemStructure_Keypad
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Keypad_C::ExecuteUbergraph_PrimalItemStructure_Keypad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Keypad.PrimalItemStructure_Keypad_C.ExecuteUbergraph_PrimalItemStructure_Keypad");

	UPrimalItemStructure_Keypad_C_ExecuteUbergraph_PrimalItemStructure_Keypad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
