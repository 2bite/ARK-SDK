// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Direwolf_Character_BP_Eden_Summoned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Direwolf_Character_BP_Eden_Summoned.Direwolf_Character_BP_Eden_Summoned_C.UserConstructionScript
// ()

void ADirewolf_Character_BP_Eden_Summoned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP_Eden_Summoned.Direwolf_Character_BP_Eden_Summoned_C.UserConstructionScript");

	ADirewolf_Character_BP_Eden_Summoned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direwolf_Character_BP_Eden_Summoned.Direwolf_Character_BP_Eden_Summoned_C.ExecuteUbergraph_Direwolf_Character_BP_Eden_Summoned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADirewolf_Character_BP_Eden_Summoned_C::ExecuteUbergraph_Direwolf_Character_BP_Eden_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP_Eden_Summoned.Direwolf_Character_BP_Eden_Summoned_C.ExecuteUbergraph_Direwolf_Character_BP_Eden_Summoned");

	ADirewolf_Character_BP_Eden_Summoned_C_ExecuteUbergraph_Direwolf_Character_BP_Eden_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
