// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_LFL_TeleportAttackStun_Cooldown_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_LFL_TeleportAttackStun_Cooldown.Buff_LFL_TeleportAttackStun_Cooldown_C.UserConstructionScript
// ()

void ABuff_LFL_TeleportAttackStun_Cooldown_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LFL_TeleportAttackStun_Cooldown.Buff_LFL_TeleportAttackStun_Cooldown_C.UserConstructionScript");

	ABuff_LFL_TeleportAttackStun_Cooldown_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LFL_TeleportAttackStun_Cooldown.Buff_LFL_TeleportAttackStun_Cooldown_C.ExecuteUbergraph_Buff_LFL_TeleportAttackStun_Cooldown
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_LFL_TeleportAttackStun_Cooldown_C::ExecuteUbergraph_Buff_LFL_TeleportAttackStun_Cooldown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LFL_TeleportAttackStun_Cooldown.Buff_LFL_TeleportAttackStun_Cooldown_C.ExecuteUbergraph_Buff_LFL_TeleportAttackStun_Cooldown");

	ABuff_LFL_TeleportAttackStun_Cooldown_C_ExecuteUbergraph_Buff_LFL_TeleportAttackStun_Cooldown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
