// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MinigunSlow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MinigunSlow.Buff_MinigunSlow_C.UserConstructionScript
// ()

void ABuff_MinigunSlow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MinigunSlow.Buff_MinigunSlow_C.UserConstructionScript");

	ABuff_MinigunSlow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MinigunSlow.Buff_MinigunSlow_C.ExecuteUbergraph_Buff_MinigunSlow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MinigunSlow_C::ExecuteUbergraph_Buff_MinigunSlow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MinigunSlow.Buff_MinigunSlow_C.ExecuteUbergraph_Buff_MinigunSlow");

	ABuff_MinigunSlow_C_ExecuteUbergraph_Buff_MinigunSlow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
