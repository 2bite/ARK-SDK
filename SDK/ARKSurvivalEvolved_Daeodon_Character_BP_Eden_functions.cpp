// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Daeodon_Character_BP_Eden_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Daeodon_Character_BP_Eden.Daeodon_Character_BP_Eden_C.UserConstructionScript
// ()

void ADaeodon_Character_BP_Eden_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP_Eden.Daeodon_Character_BP_Eden_C.UserConstructionScript");

	ADaeodon_Character_BP_Eden_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Daeodon_Character_BP_Eden.Daeodon_Character_BP_Eden_C.ExecuteUbergraph_Daeodon_Character_BP_Eden
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADaeodon_Character_BP_Eden_C::ExecuteUbergraph_Daeodon_Character_BP_Eden(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Daeodon_Character_BP_Eden.Daeodon_Character_BP_Eden_C.ExecuteUbergraph_Daeodon_Character_BP_Eden");

	ADaeodon_Character_BP_Eden_C_ExecuteUbergraph_Daeodon_Character_BP_Eden_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
