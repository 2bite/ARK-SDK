// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeStun_AoE_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.InitializeAoE
// ()
// Parameters:
// class ABuff_ChargeEmitter_C*   chargeManagerBuff              (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeStun_AoE_C::InitializeAoE(class ABuff_ChargeEmitter_C* chargeManagerBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.InitializeAoE");

	ABuff_ChargeStun_AoE_C_InitializeAoE_Params params;
	params.chargeManagerBuff = chargeManagerBuff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.Can Stun Character
// ()
// Parameters:
// class APrimalCharacter*        characterToStun                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canStun                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeStun_AoE_C::Can_Stun_Character(class APrimalCharacter* characterToStun, bool* canStun)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.Can Stun Character");

	ABuff_ChargeStun_AoE_C_Can_Stun_Character_Params params;
	params.characterToStun = characterToStun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canStun != nullptr)
		*canStun = params.canStun;
}


// Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.Get WeaponCharge Buff
// ()
// Parameters:
// class ABuff_ChargeEmitter_C*   chargeBuff                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeStun_AoE_C::Get_WeaponCharge_Buff(class ABuff_ChargeEmitter_C** chargeBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.Get WeaponCharge Buff");

	ABuff_ChargeStun_AoE_C_Get_WeaponCharge_Buff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (chargeBuff != nullptr)
		*chargeBuff = params.chargeBuff;
}


// Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.BPExcludeAoEActor
// ()
// Parameters:
// class AActor**                 ActorToConsider                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_ChargeStun_AoE_C::BPExcludeAoEActor(class AActor** ActorToConsider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.BPExcludeAoEActor");

	ABuff_ChargeStun_AoE_C_BPExcludeAoEActor_Params params;
	params.ActorToConsider = ActorToConsider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.UserConstructionScript
// ()

void ABuff_ChargeStun_AoE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.UserConstructionScript");

	ABuff_ChargeStun_AoE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.ExecuteUbergraph_Buff_ChargeStun_AoE
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeStun_AoE_C::ExecuteUbergraph_Buff_ChargeStun_AoE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeStun_AoE.Buff_ChargeStun_AoE_C.ExecuteUbergraph_Buff_ChargeStun_AoE");

	ABuff_ChargeStun_AoE_C_ExecuteUbergraph_Buff_ChargeStun_AoE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
