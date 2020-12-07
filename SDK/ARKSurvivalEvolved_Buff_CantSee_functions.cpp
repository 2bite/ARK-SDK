// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CantSee_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_CantSee.Buff_CantSee_C.UserConstructionScript
// ()

void ABuff_CantSee_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CantSee.Buff_CantSee_C.UserConstructionScript");

	ABuff_CantSee_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CantSee.Buff_CantSee_C.ExecuteUbergraph_Buff_CantSee
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CantSee_C::ExecuteUbergraph_Buff_CantSee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CantSee.Buff_CantSee_C.ExecuteUbergraph_Buff_CantSee");

	ABuff_CantSee_C_ExecuteUbergraph_Buff_CantSee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
