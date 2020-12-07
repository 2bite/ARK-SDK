// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BugRepel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BugRepel.Buff_BugRepel_C.UserConstructionScript
// ()

void ABuff_BugRepel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BugRepel.Buff_BugRepel_C.UserConstructionScript");

	ABuff_BugRepel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BugRepel.Buff_BugRepel_C.ExecuteUbergraph_Buff_BugRepel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BugRepel_C::ExecuteUbergraph_Buff_BugRepel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BugRepel.Buff_BugRepel_C.ExecuteUbergraph_Buff_BugRepel");

	ABuff_BugRepel_C_ExecuteUbergraph_Buff_BugRepel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
