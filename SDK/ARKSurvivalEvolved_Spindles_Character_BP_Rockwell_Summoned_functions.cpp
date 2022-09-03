// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Spindles_Character_BP_Rockwell_Summoned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Spindles_Character_BP_Rockwell_Summoned.Spindles_Character_BP_Rockwell_Summoned_C.UserConstructionScript
// ()

void ASpindles_Character_BP_Rockwell_Summoned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP_Rockwell_Summoned.Spindles_Character_BP_Rockwell_Summoned_C.UserConstructionScript");

	ASpindles_Character_BP_Rockwell_Summoned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spindles_Character_BP_Rockwell_Summoned.Spindles_Character_BP_Rockwell_Summoned_C.ExecuteUbergraph_Spindles_Character_BP_Rockwell_Summoned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpindles_Character_BP_Rockwell_Summoned_C::ExecuteUbergraph_Spindles_Character_BP_Rockwell_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP_Rockwell_Summoned.Spindles_Character_BP_Rockwell_Summoned_C.ExecuteUbergraph_Spindles_Character_BP_Rockwell_Summoned");

	ASpindles_Character_BP_Rockwell_Summoned_C_ExecuteUbergraph_Spindles_Character_BP_Rockwell_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
