// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceKaijuAttackStateIceNeedle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.BPOnAttackStart
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UIceKaijuAttackStateIceNeedle_C::BPOnAttackStart(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.BPOnAttackStart");

	UIceKaijuAttackStateIceNeedle_C_BPOnAttackStart_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.StartAnimationStateEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>*         Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UIceKaijuAttackStateIceNeedle_C::StartAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.StartAnimationStateEvent");

	UIceKaijuAttackStateIceNeedle_C_StartAnimationStateEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.BPOnAttackTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UIceKaijuAttackStateIceNeedle_C::BPOnAttackTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.BPOnAttackTick");

	UIceKaijuAttackStateIceNeedle_C_BPOnAttackTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.TickAnimationStateEvent
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>*         Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UIceKaijuAttackStateIceNeedle_C::TickAnimationStateEvent(float* DeltaTime, struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.TickAnimationStateEvent");

	UIceKaijuAttackStateIceNeedle_C_TickAnimationStateEvent_Params params;
	params.DeltaTime = DeltaTime;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.ExecuteUbergraph_IceKaijuAttackStateIceNeedle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIceKaijuAttackStateIceNeedle_C::ExecuteUbergraph_IceKaijuAttackStateIceNeedle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaijuAttackStateIceNeedle.IceKaijuAttackStateIceNeedle_C.ExecuteUbergraph_IceKaijuAttackStateIceNeedle");

	UIceKaijuAttackStateIceNeedle_C_ExecuteUbergraph_IceKaijuAttackStateIceNeedle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
