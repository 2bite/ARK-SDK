// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SKComponent_SkinAttachment_Interp_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PrintDMICAnimTextureParams
// (Net, NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* DMIC                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            MatIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_Interp_C::STATIC_PrintDMICAnimTextureParams(class UMaterialInstanceDynamic* DMIC, int MatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PrintDMICAnimTextureParams");

	USKComponent_SkinAttachment_Interp_C_PrintDMICAnimTextureParams_Params params;
	params.DMIC = DMIC;
	params.MatIndex = MatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.GetAssociatedItem
// ()
// Parameters:
// class UPrimalItem*             Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_Interp_C::GetAssociatedItem(class UPrimalItem** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.GetAssociatedItem");

	USKComponent_SkinAttachment_Interp_C_GetAssociatedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.IsPlayingAnimTexture
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_Interp_C::IsPlayingAnimTexture(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.IsPlayingAnimTexture");

	USKComponent_SkinAttachment_Interp_C_IsPlayingAnimTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.UpdateAnimTextureStatus
// (NetRequest, Exec, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent)

void USKComponent_SkinAttachment_Interp_C::UpdateAnimTextureStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.UpdateAnimTextureStatus");

	USKComponent_SkinAttachment_Interp_C_UpdateAnimTextureStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.BPOnComponentDestroyed
// ()

void USKComponent_SkinAttachment_Interp_C::BPOnComponentDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.BPOnComponentDestroyed");

	USKComponent_SkinAttachment_Interp_C_BPOnComponentDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayLoaded Explorer Note
// (NetReliable, Exec, Native, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent)

void USKComponent_SkinAttachment_Interp_C::PlayLoaded_Explorer_Note()
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayLoaded Explorer Note");

	USKComponent_SkinAttachment_Interp_C_PlayLoaded_Explorer_Note_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Set HLNA Visibility
// (Net, NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_Interp_C::Set_HLNA_Visibility(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Set HLNA Visibility");

	USKComponent_SkinAttachment_Interp_C_Set_HLNA_Visibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayerIsLookingAtHLNA
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_Interp_C::PlayerIsLookingAtHLNA(class APrimalCharacter* Character, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayerIsLookingAtHLNA");

	USKComponent_SkinAttachment_Interp_C_PlayerIsLookingAtHLNA_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Is Talking Public
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_Interp_C::Is_Talking_Public(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.Is Talking Public");

	USKComponent_SkinAttachment_Interp_C_Is_Talking_Public_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.IsTalking
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_Interp_C::IsTalking(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.IsTalking");

	USKComponent_SkinAttachment_Interp_C_IsTalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlaySound
// ()
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_Interp_C::PlaySound(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlaySound");

	USKComponent_SkinAttachment_Interp_C_PlaySound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayEmote
// (NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent)
// Parameters:
// int                            EmoteIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_Interp_C::PlayEmote(int EmoteIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayEmote");

	USKComponent_SkinAttachment_Interp_C_PlayEmote_Params params;
	params.EmoteIndex = EmoteIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.CheckEmotes
// ()
// Parameters:
// class AShooterCharacter*       Character                      (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_Interp_C::CheckEmotes(class AShooterCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.CheckEmotes");

	USKComponent_SkinAttachment_Interp_C_CheckEmotes_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.UpdateInterpolation
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_Interp_C::STATIC_UpdateInterpolation(class ACharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.UpdateInterpolation");

	USKComponent_SkinAttachment_Interp_C_UpdateInterpolation_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.AddedAsPrimalItemAttachment
// (NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, BlueprintEvent)

void USKComponent_SkinAttachment_Interp_C::AddedAsPrimalItemAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.AddedAsPrimalItemAttachment");

	USKComponent_SkinAttachment_Interp_C_AddedAsPrimalItemAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.StopFacingPlayer
// ()

void USKComponent_SkinAttachment_Interp_C::StopFacingPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.StopFacingPlayer");

	USKComponent_SkinAttachment_Interp_C_StopFacingPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.BPOnComponentTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_Interp_C::BPOnComponentTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.BPOnComponentTick");

	USKComponent_SkinAttachment_Interp_C_BPOnComponentTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.CompTick
// ()

void USKComponent_SkinAttachment_Interp_C::CompTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.CompTick");

	USKComponent_SkinAttachment_Interp_C_CompTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.AsyncLoadExplorerNote
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_Interp_C::AsyncLoadExplorerNote(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.AsyncLoadExplorerNote");

	USKComponent_SkinAttachment_Interp_C_AsyncLoadExplorerNote_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.AsyncAssetLoadedDelegate__ExplorerNoteAudio
// ()
// Parameters:
// class FString                  AssetPath                      (Parm, ZeroConstructor)
// class UObject*                 LoadedAsset                    (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_Interp_C::AsyncAssetLoadedDelegate__ExplorerNoteAudio(const class FString& AssetPath, class UObject* LoadedAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.AsyncAssetLoadedDelegate__ExplorerNoteAudio");

	USKComponent_SkinAttachment_Interp_C_AsyncAssetLoadedDelegate__ExplorerNoteAudio_Params params;
	params.AssetPath = AssetPath;
	params.LoadedAsset = LoadedAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.StopPlayingLoadedExplorerNote
// ()

void USKComponent_SkinAttachment_Interp_C::StopPlayingLoadedExplorerNote()
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.StopPlayingLoadedExplorerNote");

	USKComponent_SkinAttachment_Interp_C_StopPlayingLoadedExplorerNote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayLoadedExplorerNoteEvent
// ()

void USKComponent_SkinAttachment_Interp_C::PlayLoadedExplorerNoteEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.PlayLoadedExplorerNoteEvent");

	USKComponent_SkinAttachment_Interp_C_PlayLoadedExplorerNoteEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.ProcessDynamicMaterialForDialogueIconDelegate__DelegateSignature_Event
// ()
// Parameters:
// struct FName                   MaterialFName                  (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* LoadedMaterial                 (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_Interp_C::ProcessDynamicMaterialForDialogueIconDelegate__DelegateSignature_Event(const struct FName& MaterialFName, class UMaterialInstanceDynamic* LoadedMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.ProcessDynamicMaterialForDialogueIconDelegate__DelegateSignature_Event");

	USKComponent_SkinAttachment_Interp_C_ProcessDynamicMaterialForDialogueIconDelegate__DelegateSignature_Event_Params params;
	params.MaterialFName = MaterialFName;
	params.LoadedMaterial = LoadedMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.InitializeForPlayerController
// ()
// Parameters:
// class AShooterPlayerController* Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_Interp_C::InitializeForPlayerController(class AShooterPlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.InitializeForPlayerController");

	USKComponent_SkinAttachment_Interp_C_InitializeForPlayerController_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.ExecuteUbergraph_SKComponent_SkinAttachment_Interp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USKComponent_SkinAttachment_Interp_C::ExecuteUbergraph_SKComponent_SkinAttachment_Interp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SKComponent_SkinAttachment_Interp.SKComponent_SkinAttachment_Interp_C.ExecuteUbergraph_SKComponent_SkinAttachment_Interp");

	USKComponent_SkinAttachment_Interp_C_ExecuteUbergraph_SKComponent_SkinAttachment_Interp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
