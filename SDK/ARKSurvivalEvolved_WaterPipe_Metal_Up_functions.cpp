// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterPipe_Metal_Up_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterPipe_Metal_Up.WaterPipe_Metal_Up_C.UserConstructionScript
// ()

void AWaterPipe_Metal_Up_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPipe_Metal_Up.WaterPipe_Metal_Up_C.UserConstructionScript");

	AWaterPipe_Metal_Up_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPipe_Metal_Up.WaterPipe_Metal_Up_C.ExecuteUbergraph_WaterPipe_Metal_Up
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWaterPipe_Metal_Up_C::ExecuteUbergraph_WaterPipe_Metal_Up(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPipe_Metal_Up.WaterPipe_Metal_Up_C.ExecuteUbergraph_WaterPipe_Metal_Up");

	AWaterPipe_Metal_Up_C_ExecuteUbergraph_WaterPipe_Metal_Up_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
