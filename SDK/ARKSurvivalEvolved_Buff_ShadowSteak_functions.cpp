// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ShadowSteak_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ShadowSteak.Buff_ShadowSteak_C.UserConstructionScript
// ()

void ABuff_ShadowSteak_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ShadowSteak.Buff_ShadowSteak_C.UserConstructionScript");

	ABuff_ShadowSteak_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ShadowSteak.Buff_ShadowSteak_C.ExecuteUbergraph_Buff_ShadowSteak
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ShadowSteak_C::ExecuteUbergraph_Buff_ShadowSteak(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ShadowSteak.Buff_ShadowSteak_C.ExecuteUbergraph_Buff_ShadowSteak");

	ABuff_ShadowSteak_C_ExecuteUbergraph_Buff_ShadowSteak_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
