// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dimorph_Character_BP_Aggressive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dimorph_Character_BP_Aggressive.Dimorph_Character_BP_Aggressive_C.UserConstructionScript
// ()

void ADimorph_Character_BP_Aggressive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dimorph_Character_BP_Aggressive.Dimorph_Character_BP_Aggressive_C.UserConstructionScript");

	ADimorph_Character_BP_Aggressive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dimorph_Character_BP_Aggressive.Dimorph_Character_BP_Aggressive_C.ExecuteUbergraph_Dimorph_Character_BP_Aggressive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADimorph_Character_BP_Aggressive_C::ExecuteUbergraph_Dimorph_Character_BP_Aggressive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dimorph_Character_BP_Aggressive.Dimorph_Character_BP_Aggressive_C.ExecuteUbergraph_Dimorph_Character_BP_Aggressive");

	ADimorph_Character_BP_Aggressive_C_ExecuteUbergraph_Dimorph_Character_BP_Aggressive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
