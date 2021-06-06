// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FriaCurry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FriaCurry.Buff_FriaCurry_C.UserConstructionScript
// ()

void ABuff_FriaCurry_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FriaCurry.Buff_FriaCurry_C.UserConstructionScript");

	ABuff_FriaCurry_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FriaCurry.Buff_FriaCurry_C.ExecuteUbergraph_Buff_FriaCurry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FriaCurry_C::ExecuteUbergraph_Buff_FriaCurry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FriaCurry.Buff_FriaCurry_C.ExecuteUbergraph_Buff_FriaCurry");

	ABuff_FriaCurry_C_ExecuteUbergraph_Buff_FriaCurry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
