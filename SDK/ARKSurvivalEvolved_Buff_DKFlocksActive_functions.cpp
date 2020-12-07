// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DKFlocksActive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DKFlocksActive.Buff_DKFlocksActive_C.UserConstructionScript
// ()

void ABuff_DKFlocksActive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DKFlocksActive.Buff_DKFlocksActive_C.UserConstructionScript");

	ABuff_DKFlocksActive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DKFlocksActive.Buff_DKFlocksActive_C.ExecuteUbergraph_Buff_DKFlocksActive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DKFlocksActive_C::ExecuteUbergraph_Buff_DKFlocksActive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DKFlocksActive.Buff_DKFlocksActive_C.ExecuteUbergraph_Buff_DKFlocksActive");

	ABuff_DKFlocksActive_C_ExecuteUbergraph_Buff_DKFlocksActive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
