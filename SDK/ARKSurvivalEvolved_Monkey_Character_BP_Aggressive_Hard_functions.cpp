// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Monkey_Character_BP_Aggressive_Hard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Monkey_Character_BP_Aggressive_Hard.Monkey_Character_BP_Aggressive_Hard_C.UserConstructionScript
// ()

void AMonkey_Character_BP_Aggressive_Hard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Monkey_Character_BP_Aggressive_Hard.Monkey_Character_BP_Aggressive_Hard_C.UserConstructionScript");

	AMonkey_Character_BP_Aggressive_Hard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Monkey_Character_BP_Aggressive_Hard.Monkey_Character_BP_Aggressive_Hard_C.ExecuteUbergraph_Monkey_Character_BP_Aggressive_Hard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMonkey_Character_BP_Aggressive_Hard_C::ExecuteUbergraph_Monkey_Character_BP_Aggressive_Hard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Monkey_Character_BP_Aggressive_Hard.Monkey_Character_BP_Aggressive_Hard_C.ExecuteUbergraph_Monkey_Character_BP_Aggressive_Hard");

	AMonkey_Character_BP_Aggressive_Hard_C_ExecuteUbergraph_Monkey_Character_BP_Aggressive_Hard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
