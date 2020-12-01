// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DirewolfHowlCooldown_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DirewolfHowlCooldown.Buff_DirewolfHowlCooldown_C.UserConstructionScript
// ()

void ABuff_DirewolfHowlCooldown_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DirewolfHowlCooldown.Buff_DirewolfHowlCooldown_C.UserConstructionScript");

	ABuff_DirewolfHowlCooldown_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DirewolfHowlCooldown.Buff_DirewolfHowlCooldown_C.ExecuteUbergraph_Buff_DirewolfHowlCooldown
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DirewolfHowlCooldown_C::ExecuteUbergraph_Buff_DirewolfHowlCooldown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DirewolfHowlCooldown.Buff_DirewolfHowlCooldown_C.ExecuteUbergraph_Buff_DirewolfHowlCooldown");

	ABuff_DirewolfHowlCooldown_C_ExecuteUbergraph_Buff_DirewolfHowlCooldown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
