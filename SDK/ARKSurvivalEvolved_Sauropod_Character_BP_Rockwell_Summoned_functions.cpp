// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sauropod_Character_BP_Rockwell_Summoned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sauropod_Character_BP_Rockwell_Summoned.Sauropod_Character_BP_Rockwell_Summoned_C.UserConstructionScript
// ()

void ASauropod_Character_BP_Rockwell_Summoned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sauropod_Character_BP_Rockwell_Summoned.Sauropod_Character_BP_Rockwell_Summoned_C.UserConstructionScript");

	ASauropod_Character_BP_Rockwell_Summoned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sauropod_Character_BP_Rockwell_Summoned.Sauropod_Character_BP_Rockwell_Summoned_C.ExecuteUbergraph_Sauropod_Character_BP_Rockwell_Summoned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASauropod_Character_BP_Rockwell_Summoned_C::ExecuteUbergraph_Sauropod_Character_BP_Rockwell_Summoned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sauropod_Character_BP_Rockwell_Summoned.Sauropod_Character_BP_Rockwell_Summoned_C.ExecuteUbergraph_Sauropod_Character_BP_Rockwell_Summoned");

	ASauropod_Character_BP_Rockwell_Summoned_C_ExecuteUbergraph_Sauropod_Character_BP_Rockwell_Summoned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
