// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Turtle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Turtle.EngramEntry_Saddle_Turtle_C.ExecuteUbergraph_EngramEntry_Saddle_Turtle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Turtle_C::ExecuteUbergraph_EngramEntry_Saddle_Turtle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Turtle.EngramEntry_Saddle_Turtle_C.ExecuteUbergraph_EngramEntry_Saddle_Turtle");

	UEngramEntry_Saddle_Turtle_C_ExecuteUbergraph_EngramEntry_Saddle_Turtle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
