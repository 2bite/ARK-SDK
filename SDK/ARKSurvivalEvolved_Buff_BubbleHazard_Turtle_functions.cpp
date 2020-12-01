// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BubbleHazard_Turtle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BubbleHazard_Turtle.Buff_BubbleHazard_Turtle_C.UserConstructionScript
// ()

void ABuff_BubbleHazard_Turtle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BubbleHazard_Turtle.Buff_BubbleHazard_Turtle_C.UserConstructionScript");

	ABuff_BubbleHazard_Turtle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BubbleHazard_Turtle.Buff_BubbleHazard_Turtle_C.ExecuteUbergraph_Buff_BubbleHazard_Turtle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BubbleHazard_Turtle_C::ExecuteUbergraph_Buff_BubbleHazard_Turtle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BubbleHazard_Turtle.Buff_BubbleHazard_Turtle_C.ExecuteUbergraph_Buff_BubbleHazard_Turtle");

	ABuff_BubbleHazard_Turtle_C_ExecuteUbergraph_Buff_BubbleHazard_Turtle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
