// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dragon_Character_BP_Boss_Easy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dragon_Character_BP_Boss_Easy.Dragon_Character_BP_Boss_Easy_C.UserConstructionScript
// ()

void ADragon_Character_BP_Boss_Easy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP_Boss_Easy.Dragon_Character_BP_Boss_Easy_C.UserConstructionScript");

	ADragon_Character_BP_Boss_Easy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_Character_BP_Boss_Easy.Dragon_Character_BP_Boss_Easy_C.ExecuteUbergraph_Dragon_Character_BP_Boss_Easy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADragon_Character_BP_Boss_Easy_C::ExecuteUbergraph_Dragon_Character_BP_Boss_Easy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP_Boss_Easy.Dragon_Character_BP_Boss_Easy_C.ExecuteUbergraph_Dragon_Character_BP_Boss_Easy");

	ADragon_Character_BP_Boss_Easy_C_ExecuteUbergraph_Dragon_Character_BP_Boss_Easy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
