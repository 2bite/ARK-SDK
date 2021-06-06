// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Base_SuperDisease_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Base_SuperDisease.Buff_Base_SuperDisease_C.UserConstructionScript
// ()

void ABuff_Base_SuperDisease_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_SuperDisease.Buff_Base_SuperDisease_C.UserConstructionScript");

	ABuff_Base_SuperDisease_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Base_SuperDisease.Buff_Base_SuperDisease_C.ExecuteUbergraph_Buff_Base_SuperDisease
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Base_SuperDisease_C::ExecuteUbergraph_Buff_Base_SuperDisease(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_SuperDisease.Buff_Base_SuperDisease_C.ExecuteUbergraph_Buff_Base_SuperDisease");

	ABuff_Base_SuperDisease_C_ExecuteUbergraph_Buff_Base_SuperDisease_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
