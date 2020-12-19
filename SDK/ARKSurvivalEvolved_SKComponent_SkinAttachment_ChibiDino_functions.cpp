// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SKComponent_SkinAttachment_ChibiDino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.BPOnComponentDestroyed
// ()

void USKComponent_SkinAttachment_ChibiDino_C::BPOnComponentDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.BPOnComponentDestroyed");

	USKComponent_SkinAttachment_ChibiDino_C_BPOnComponentDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.AttachSubMeshes
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, Const)

void USKComponent_SkinAttachment_ChibiDino_C::STATIC_AttachSubMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.AttachSubMeshes");

	USKComponent_SkinAttachment_ChibiDino_C_AttachSubMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.BPOnComponentTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_ChibiDino_C::BPOnComponentTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.BPOnComponentTick");

	USKComponent_SkinAttachment_ChibiDino_C_BPOnComponentTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.LevelUp
// ()

void USKComponent_SkinAttachment_ChibiDino_C::LevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.LevelUp");

	USKComponent_SkinAttachment_ChibiDino_C_LevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.PlayMontage
// ()
// Parameters:
// class UAnimMontage*            TheAnimMontage                 (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              ExtraSound                     (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_ChibiDino_C::PlayMontage(class UAnimMontage* TheAnimMontage, class USoundBase* ExtraSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.PlayMontage");

	USKComponent_SkinAttachment_ChibiDino_C_PlayMontage_Params params;
	params.TheAnimMontage = TheAnimMontage;
	params.ExtraSound = ExtraSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.UpdateMovement
// (NetReliable, NetRequest, Native, Private, Delegate, HasOutParms, HasDefaults, Const)
// Parameters:
// class ACharacter*              CharacterRef                   (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_ChibiDino_C::UpdateMovement(class ACharacter* CharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.UpdateMovement");

	USKComponent_SkinAttachment_ChibiDino_C_UpdateMovement_Params params;
	params.CharacterRef = CharacterRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.PlayEmote
// ()
// Parameters:
// int                            EmoteIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_ChibiDino_C::PlayEmote(int EmoteIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.PlayEmote");

	USKComponent_SkinAttachment_ChibiDino_C_PlayEmote_Params params;
	params.EmoteIndex = EmoteIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.CheckEmotes
// ()
// Parameters:
// class AShooterCharacter*       Character                      (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_ChibiDino_C::CheckEmotes(class AShooterCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.CheckEmotes");

	USKComponent_SkinAttachment_ChibiDino_C_CheckEmotes_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.UpdateInterpolation
// ()
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_ChibiDino_C::UpdateInterpolation(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.UpdateInterpolation");

	USKComponent_SkinAttachment_ChibiDino_C_UpdateInterpolation_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.AddedAsPrimalItemAttachment
// ()

void USKComponent_SkinAttachment_ChibiDino_C::AddedAsPrimalItemAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.AddedAsPrimalItemAttachment");

	USKComponent_SkinAttachment_ChibiDino_C_AddedAsPrimalItemAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.CompTick
// ()

void USKComponent_SkinAttachment_ChibiDino_C::CompTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.CompTick");

	USKComponent_SkinAttachment_ChibiDino_C_CompTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.ExecuteUbergraph_SKComponent_SkinAttachment_ChibiDino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_ChibiDino_C::ExecuteUbergraph_SKComponent_SkinAttachment_ChibiDino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.ExecuteUbergraph_SKComponent_SkinAttachment_ChibiDino");

	USKComponent_SkinAttachment_ChibiDino_C_ExecuteUbergraph_SKComponent_SkinAttachment_ChibiDino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
