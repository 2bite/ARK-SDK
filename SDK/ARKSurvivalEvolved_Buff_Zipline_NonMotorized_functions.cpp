// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Zipline_NonMotorized_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Zipline_NonMotorized.Buff_Zipline_NonMotorized_C.UserConstructionScript
// ()

void ABuff_Zipline_NonMotorized_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_NonMotorized.Buff_Zipline_NonMotorized_C.UserConstructionScript");

	ABuff_Zipline_NonMotorized_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_NonMotorized.Buff_Zipline_NonMotorized_C.ExecuteUbergraph_Buff_Zipline_NonMotorized
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_NonMotorized_C::ExecuteUbergraph_Buff_Zipline_NonMotorized(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_NonMotorized.Buff_Zipline_NonMotorized_C.ExecuteUbergraph_Buff_Zipline_NonMotorized");

	ABuff_Zipline_NonMotorized_C_ExecuteUbergraph_Buff_Zipline_NonMotorized_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
