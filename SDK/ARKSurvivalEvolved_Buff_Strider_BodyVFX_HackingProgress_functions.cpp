// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Strider_BodyVFX_HackingProgress_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Strider_BodyVFX_HackingProgress.Buff_Strider_BodyVFX_HackingProgress_C.UserConstructionScript
// ()

void ABuff_Strider_BodyVFX_HackingProgress_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_HackingProgress.Buff_Strider_BodyVFX_HackingProgress_C.UserConstructionScript");

	ABuff_Strider_BodyVFX_HackingProgress_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Strider_BodyVFX_HackingProgress.Buff_Strider_BodyVFX_HackingProgress_C.ExecuteUbergraph_Buff_Strider_BodyVFX_HackingProgress
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Strider_BodyVFX_HackingProgress_C::ExecuteUbergraph_Buff_Strider_BodyVFX_HackingProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Strider_BodyVFX_HackingProgress.Buff_Strider_BodyVFX_HackingProgress_C.ExecuteUbergraph_Buff_Strider_BodyVFX_HackingProgress");

	ABuff_Strider_BodyVFX_HackingProgress_C_ExecuteUbergraph_Buff_Strider_BodyVFX_HackingProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
