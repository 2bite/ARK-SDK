// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ClimberSeeking_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ClimberSeeking.Buff_ClimberSeeking_C.UserConstructionScript
// ()

void ABuff_ClimberSeeking_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ClimberSeeking.Buff_ClimberSeeking_C.UserConstructionScript");

	ABuff_ClimberSeeking_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ClimberSeeking.Buff_ClimberSeeking_C.ExecuteUbergraph_Buff_ClimberSeeking
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ClimberSeeking_C::ExecuteUbergraph_Buff_ClimberSeeking(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ClimberSeeking.Buff_ClimberSeeking_C.ExecuteUbergraph_Buff_ClimberSeeking");

	ABuff_ClimberSeeking_C_ExecuteUbergraph_Buff_ClimberSeeking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
