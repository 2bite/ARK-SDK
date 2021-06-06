// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Slowed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Slowed.Buff_Slowed_C.UserConstructionScript
// ()

void ABuff_Slowed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Slowed.Buff_Slowed_C.UserConstructionScript");

	ABuff_Slowed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Slowed.Buff_Slowed_C.ExecuteUbergraph_Buff_Slowed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Slowed_C::ExecuteUbergraph_Buff_Slowed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Slowed.Buff_Slowed_C.ExecuteUbergraph_Buff_Slowed");

	ABuff_Slowed_C_ExecuteUbergraph_Buff_Slowed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
