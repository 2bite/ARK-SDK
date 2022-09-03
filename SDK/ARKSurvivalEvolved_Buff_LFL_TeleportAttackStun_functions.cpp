// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_LFL_TeleportAttackStun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_LFL_TeleportAttackStun.Buff_LFL_TeleportAttackStun_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_LFL_TeleportAttackStun_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LFL_TeleportAttackStun.Buff_LFL_TeleportAttackStun_C.BPCustomAllowAddBuff");

	ABuff_LFL_TeleportAttackStun_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_LFL_TeleportAttackStun.Buff_LFL_TeleportAttackStun_C.UserConstructionScript
// ()

void ABuff_LFL_TeleportAttackStun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LFL_TeleportAttackStun.Buff_LFL_TeleportAttackStun_C.UserConstructionScript");

	ABuff_LFL_TeleportAttackStun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LFL_TeleportAttackStun.Buff_LFL_TeleportAttackStun_C.ExecuteUbergraph_Buff_LFL_TeleportAttackStun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_LFL_TeleportAttackStun_C::ExecuteUbergraph_Buff_LFL_TeleportAttackStun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LFL_TeleportAttackStun.Buff_LFL_TeleportAttackStun_C.ExecuteUbergraph_Buff_LFL_TeleportAttackStun");

	ABuff_LFL_TeleportAttackStun_C_ExecuteUbergraph_Buff_LFL_TeleportAttackStun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
