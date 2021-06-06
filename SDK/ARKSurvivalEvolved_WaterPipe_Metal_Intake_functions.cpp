// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterPipe_Metal_Intake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WaterPipe_Metal_Intake.WaterPipe_Metal_Intake_C.UserConstructionScript
// ()

void AWaterPipe_Metal_Intake_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPipe_Metal_Intake.WaterPipe_Metal_Intake_C.UserConstructionScript");

	AWaterPipe_Metal_Intake_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPipe_Metal_Intake.WaterPipe_Metal_Intake_C.ExecuteUbergraph_WaterPipe_Metal_Intake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWaterPipe_Metal_Intake_C::ExecuteUbergraph_WaterPipe_Metal_Intake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPipe_Metal_Intake.WaterPipe_Metal_Intake_C.ExecuteUbergraph_WaterPipe_Metal_Intake");

	AWaterPipe_Metal_Intake_C_ExecuteUbergraph_WaterPipe_Metal_Intake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
