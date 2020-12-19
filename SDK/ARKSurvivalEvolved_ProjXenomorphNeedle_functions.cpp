// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjXenomorphNeedle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjXenomorphNeedle.ProjXenomorphNeedle_C.UserConstructionScript
// ()

void AProjXenomorphNeedle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjXenomorphNeedle.ProjXenomorphNeedle_C.UserConstructionScript");

	AProjXenomorphNeedle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjXenomorphNeedle.ProjXenomorphNeedle_C.ExecuteUbergraph_ProjXenomorphNeedle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjXenomorphNeedle_C::ExecuteUbergraph_ProjXenomorphNeedle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjXenomorphNeedle.ProjXenomorphNeedle_C.ExecuteUbergraph_ProjXenomorphNeedle");

	AProjXenomorphNeedle_C_ExecuteUbergraph_ProjXenomorphNeedle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
