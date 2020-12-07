// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_KingKaiju_Fireball_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_KingKaiju_Fireball.DinoAttackState_KingKaiju_Fireball_C.BPOnAttackStart
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_KingKaiju_Fireball_C::BPOnAttackStart(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_KingKaiju_Fireball.DinoAttackState_KingKaiju_Fireball_C.BPOnAttackStart");

	UDinoAttackState_KingKaiju_Fireball_C_BPOnAttackStart_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_KingKaiju_Fireball.DinoAttackState_KingKaiju_Fireball_C.BPOnAttackEnd
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_KingKaiju_Fireball_C::BPOnAttackEnd(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_KingKaiju_Fireball.DinoAttackState_KingKaiju_Fireball_C.BPOnAttackEnd");

	UDinoAttackState_KingKaiju_Fireball_C_BPOnAttackEnd_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_KingKaiju_Fireball.DinoAttackState_KingKaiju_Fireball_C.StartAnimationStateEvent
// (Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>*         Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_KingKaiju_Fireball_C::StartAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_KingKaiju_Fireball.DinoAttackState_KingKaiju_Fireball_C.StartAnimationStateEvent");

	UDinoAttackState_KingKaiju_Fireball_C_StartAnimationStateEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_KingKaiju_Fireball.DinoAttackState_KingKaiju_Fireball_C.ExecuteUbergraph_DinoAttackState_KingKaiju_Fireball
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_KingKaiju_Fireball_C::ExecuteUbergraph_DinoAttackState_KingKaiju_Fireball(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_KingKaiju_Fireball.DinoAttackState_KingKaiju_Fireball_C.ExecuteUbergraph_DinoAttackState_KingKaiju_Fireball");

	UDinoAttackState_KingKaiju_Fireball_C_ExecuteUbergraph_DinoAttackState_KingKaiju_Fireball_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
