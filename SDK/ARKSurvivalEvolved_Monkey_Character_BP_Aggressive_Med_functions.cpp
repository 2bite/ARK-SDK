// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Monkey_Character_BP_Aggressive_Med_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Monkey_Character_BP_Aggressive_Med.Monkey_Character_BP_Aggressive_Med_C.UserConstructionScript
// ()

void AMonkey_Character_BP_Aggressive_Med_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Monkey_Character_BP_Aggressive_Med.Monkey_Character_BP_Aggressive_Med_C.UserConstructionScript");

	AMonkey_Character_BP_Aggressive_Med_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Monkey_Character_BP_Aggressive_Med.Monkey_Character_BP_Aggressive_Med_C.ExecuteUbergraph_Monkey_Character_BP_Aggressive_Med
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMonkey_Character_BP_Aggressive_Med_C::ExecuteUbergraph_Monkey_Character_BP_Aggressive_Med(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Monkey_Character_BP_Aggressive_Med.Monkey_Character_BP_Aggressive_Med_C.ExecuteUbergraph_Monkey_Character_BP_Aggressive_Med");

	AMonkey_Character_BP_Aggressive_Med_C_ExecuteUbergraph_Monkey_Character_BP_Aggressive_Med_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
