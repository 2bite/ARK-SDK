// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Quetz_Character_BP_Rockwell_Summoned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Quetz_Character_BP_Rockwell_Summoned.Quetz_Character_BP_Rockwell_Summoned_C.UserConstructionScript
// ()

void AQuetz_Character_BP_Rockwell_Summoned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quetz_Character_BP_Rockwell_Summoned.Quetz_Character_BP_Rockwell_Summoned_C.UserConstructionScript");

	AQuetz_Character_BP_Rockwell_Summoned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quetz_Character_BP_Rockwell_Summoned.Quetz_Character_BP_Rockwell_Summoned_C.ExecuteUbergraph_Quetz_Character_BP_Rockwell_Summoned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AQuetz_Character_BP_Rockwell_Summoned_C::ExecuteUbergraph_Quetz_Character_BP_Rockwell_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quetz_Character_BP_Rockwell_Summoned.Quetz_Character_BP_Rockwell_Summoned_C.ExecuteUbergraph_Quetz_Character_BP_Rockwell_Summoned");

	AQuetz_Character_BP_Rockwell_Summoned_C_ExecuteUbergraph_Quetz_Character_BP_Rockwell_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
