// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_WastelandHunger_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_WastelandHunger.Buff_WastelandHunger_C.UserConstructionScript
// ()

void ABuff_WastelandHunger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WastelandHunger.Buff_WastelandHunger_C.UserConstructionScript");

	ABuff_WastelandHunger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_WastelandHunger.Buff_WastelandHunger_C.ExecuteUbergraph_Buff_WastelandHunger
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_WastelandHunger_C::ExecuteUbergraph_Buff_WastelandHunger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_WastelandHunger.Buff_WastelandHunger_C.ExecuteUbergraph_Buff_WastelandHunger");

	ABuff_WastelandHunger_C_ExecuteUbergraph_Buff_WastelandHunger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
