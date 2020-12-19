// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_VariableAnim_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dino_Character_BP_VariableAnim.Dino_Character_BP_VariableAnim_C.UserConstructionScript
// ()

void ADino_Character_BP_VariableAnim_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_VariableAnim.Dino_Character_BP_VariableAnim_C.UserConstructionScript");

	ADino_Character_BP_VariableAnim_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_VariableAnim.Dino_Character_BP_VariableAnim_C.ExecuteUbergraph_Dino_Character_BP_VariableAnim
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_VariableAnim_C::ExecuteUbergraph_Dino_Character_BP_VariableAnim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_VariableAnim.Dino_Character_BP_VariableAnim_C.ExecuteUbergraph_Dino_Character_BP_VariableAnim");

	ADino_Character_BP_VariableAnim_C_ExecuteUbergraph_Dino_Character_BP_VariableAnim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
