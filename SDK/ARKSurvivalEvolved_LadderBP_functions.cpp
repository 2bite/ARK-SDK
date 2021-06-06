// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LadderBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LadderBP.LadderBP_C.UserConstructionScript
// ()

void ALadderBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LadderBP.LadderBP_C.UserConstructionScript");

	ALadderBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LadderBP.LadderBP_C.ExecuteUbergraph_LadderBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALadderBP_C::ExecuteUbergraph_LadderBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LadderBP.LadderBP_C.ExecuteUbergraph_LadderBP");

	ALadderBP_C_ExecuteUbergraph_LadderBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
