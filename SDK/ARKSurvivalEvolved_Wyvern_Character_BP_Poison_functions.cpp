// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wyvern_Character_BP_Poison_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Wyvern_Character_BP_Poison.Wyvern_Character_BP_Poison_C.UserConstructionScript
// ()

void AWyvern_Character_BP_Poison_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Poison.Wyvern_Character_BP_Poison_C.UserConstructionScript");

	AWyvern_Character_BP_Poison_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_Character_BP_Poison.Wyvern_Character_BP_Poison_C.ExecuteUbergraph_Wyvern_Character_BP_Poison
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvern_Character_BP_Poison_C::ExecuteUbergraph_Wyvern_Character_BP_Poison(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Poison.Wyvern_Character_BP_Poison_C.ExecuteUbergraph_Wyvern_Character_BP_Poison");

	AWyvern_Character_BP_Poison_C_ExecuteUbergraph_Wyvern_Character_BP_Poison_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
