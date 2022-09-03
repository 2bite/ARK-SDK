// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BreakSparks_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BreakSparks.BreakSparks_C.UserConstructionScript
// ()

void ABreakSparks_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BreakSparks.BreakSparks_C.UserConstructionScript");

	ABreakSparks_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BreakSparks.BreakSparks_C.ExecuteUbergraph_BreakSparks
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABreakSparks_C::ExecuteUbergraph_BreakSparks(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BreakSparks.BreakSparks_C.ExecuteUbergraph_BreakSparks");

	ABreakSparks_C_ExecuteUbergraph_BreakSparks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
