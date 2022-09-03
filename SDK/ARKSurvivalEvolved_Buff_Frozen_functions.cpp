// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Frozen_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Frozen.Buff_Frozen_C.UserConstructionScript
// ()

void ABuff_Frozen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen.Buff_Frozen_C.UserConstructionScript");

	ABuff_Frozen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Frozen.Buff_Frozen_C.ExecuteUbergraph_Buff_Frozen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Frozen_C::ExecuteUbergraph_Buff_Frozen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Frozen.Buff_Frozen_C.ExecuteUbergraph_Buff_Frozen");

	ABuff_Frozen_C_ExecuteUbergraph_Buff_Frozen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
