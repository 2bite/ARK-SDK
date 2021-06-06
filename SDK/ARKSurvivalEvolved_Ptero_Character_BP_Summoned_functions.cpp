// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ptero_Character_BP_Summoned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ptero_Character_BP_Summoned.Ptero_Character_BP_Summoned_C.UserConstructionScript
// ()

void APtero_Character_BP_Summoned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ptero_Character_BP_Summoned.Ptero_Character_BP_Summoned_C.UserConstructionScript");

	APtero_Character_BP_Summoned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ptero_Character_BP_Summoned.Ptero_Character_BP_Summoned_C.ExecuteUbergraph_Ptero_Character_BP_Summoned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APtero_Character_BP_Summoned_C::ExecuteUbergraph_Ptero_Character_BP_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ptero_Character_BP_Summoned.Ptero_Character_BP_Summoned_C.ExecuteUbergraph_Ptero_Character_BP_Summoned");

	APtero_Character_BP_Summoned_C_ExecuteUbergraph_Ptero_Character_BP_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
