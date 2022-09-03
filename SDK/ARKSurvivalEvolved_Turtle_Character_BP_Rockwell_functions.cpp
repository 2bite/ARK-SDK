// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Turtle_Character_BP_Rockwell_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Turtle_Character_BP_Rockwell.Turtle_Character_BP_Rockwell_C.UserConstructionScript
// ()

void ATurtle_Character_BP_Rockwell_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Turtle_Character_BP_Rockwell.Turtle_Character_BP_Rockwell_C.UserConstructionScript");

	ATurtle_Character_BP_Rockwell_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Turtle_Character_BP_Rockwell.Turtle_Character_BP_Rockwell_C.ExecuteUbergraph_Turtle_Character_BP_Rockwell
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATurtle_Character_BP_Rockwell_C::ExecuteUbergraph_Turtle_Character_BP_Rockwell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Turtle_Character_BP_Rockwell.Turtle_Character_BP_Rockwell_C.ExecuteUbergraph_Turtle_Character_BP_Rockwell");

	ATurtle_Character_BP_Rockwell_C_ExecuteUbergraph_Turtle_Character_BP_Rockwell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
