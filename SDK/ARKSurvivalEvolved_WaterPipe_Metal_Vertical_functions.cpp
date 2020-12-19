// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterPipe_Metal_Vertical_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterPipe_Metal_Vertical.WaterPipe_Metal_Vertical_C.UserConstructionScript
// ()

void AWaterPipe_Metal_Vertical_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPipe_Metal_Vertical.WaterPipe_Metal_Vertical_C.UserConstructionScript");

	AWaterPipe_Metal_Vertical_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPipe_Metal_Vertical.WaterPipe_Metal_Vertical_C.ExecuteUbergraph_WaterPipe_Metal_Vertical
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWaterPipe_Metal_Vertical_C::ExecuteUbergraph_WaterPipe_Metal_Vertical(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPipe_Metal_Vertical.WaterPipe_Metal_Vertical_C.ExecuteUbergraph_WaterPipe_Metal_Vertical");

	AWaterPipe_Metal_Vertical_C_ExecuteUbergraph_WaterPipe_Metal_Vertical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
