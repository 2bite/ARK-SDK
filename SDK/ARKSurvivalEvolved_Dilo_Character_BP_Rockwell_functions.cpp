// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dilo_Character_BP_Rockwell_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dilo_Character_BP_Rockwell.Dilo_Character_BP_Rockwell_C.UserConstructionScript
// ()

void ADilo_Character_BP_Rockwell_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dilo_Character_BP_Rockwell.Dilo_Character_BP_Rockwell_C.UserConstructionScript");

	ADilo_Character_BP_Rockwell_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dilo_Character_BP_Rockwell.Dilo_Character_BP_Rockwell_C.ExecuteUbergraph_Dilo_Character_BP_Rockwell
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADilo_Character_BP_Rockwell_C::ExecuteUbergraph_Dilo_Character_BP_Rockwell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dilo_Character_BP_Rockwell.Dilo_Character_BP_Rockwell_C.ExecuteUbergraph_Dilo_Character_BP_Rockwell");

	ADilo_Character_BP_Rockwell_C_ExecuteUbergraph_Dilo_Character_BP_Rockwell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
