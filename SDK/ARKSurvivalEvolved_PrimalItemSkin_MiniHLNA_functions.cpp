// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_MiniHLNA_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.hide skin
// ()

void UPrimalItemSkin_MiniHLNA_C::hide_skin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.hide skin");

	UPrimalItemSkin_MiniHLNA_C_hide_skin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BPGetItemDescription
// (NetReliable, NetRequest, Native, Event, NetResponse, Delegate, NetServer, HasOutParms, DLLImport, BlueprintEvent, Const)
// Parameters:
// class FString*                 InDescription                  (Parm, ZeroConstructor)
// bool*                          bGetLongDescription            (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UPrimalItemSkin_MiniHLNA_C::BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BPGetItemDescription");

	UPrimalItemSkin_MiniHLNA_C_BPGetItemDescription_Params params;
	params.InDescription = InDescription;
	params.bGetLongDescription = bGetLongDescription;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.SetVisibility
// ()
// Parameters:
// bool                           Visibility                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_MiniHLNA_C::SetVisibility(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.SetVisibility");

	UPrimalItemSkin_MiniHLNA_C_SetVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BPClientHandleItemNetExecCommand
// ()
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_MiniHLNA_C::BPClientHandleItemNetExecCommand(struct FName* CommandName, class AShooterPlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BPClientHandleItemNetExecCommand");

	UPrimalItemSkin_MiniHLNA_C_BPClientHandleItemNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;
}


// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.TryRemoveBuffOnUnequip
// ()

void UPrimalItemSkin_MiniHLNA_C::TryRemoveBuffOnUnequip()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.TryRemoveBuffOnUnequip");

	UPrimalItemSkin_MiniHLNA_C_TryRemoveBuffOnUnequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.RemovedSkinFromItem
// ()
// Parameters:
// class UPrimalItem**            FromOwnerItem                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFirstTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_MiniHLNA_C::RemovedSkinFromItem(class UPrimalItem** FromOwnerItem, bool* bIsFirstTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.RemovedSkinFromItem");

	UPrimalItemSkin_MiniHLNA_C_RemovedSkinFromItem_Params params;
	params.FromOwnerItem = FromOwnerItem;
	params.bIsFirstTime = bIsFirstTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.OnEquipDelayedFn
// ()

void UPrimalItemSkin_MiniHLNA_C::OnEquipDelayedFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.OnEquipDelayedFn");

	UPrimalItemSkin_MiniHLNA_C_OnEquipDelayedFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.Spawn Emitter
// ()
// Parameters:
// class UParticleSystem*         Emitter                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Socket                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoDestroy                    (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ParticleComponent              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_MiniHLNA_C::Spawn_Emitter(class UParticleSystem* Emitter, const struct FName& Socket, bool AutoDestroy, class UParticleSystemComponent** ParticleComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.Spawn Emitter");

	UPrimalItemSkin_MiniHLNA_C_Spawn_Emitter_Params params;
	params.Emitter = Emitter;
	params.Socket = Socket;
	params.AutoDestroy = AutoDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParticleComponent != nullptr)
		*ParticleComponent = params.ParticleComponent;
}


// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.PlayRandomSoundFromSounds
// ()
// Parameters:
// TArray<class USoundBase*>      Sounds                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPrimalItemSkin_MiniHLNA_C::PlayRandomSoundFromSounds(TArray<class USoundBase*>* Sounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.PlayRandomSoundFromSounds");

	UPrimalItemSkin_MiniHLNA_C_PlayRandomSoundFromSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sounds != nullptr)
		*Sounds = params.Sounds;
}


// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BlueprintUnequipped
// ()

void UPrimalItemSkin_MiniHLNA_C::BlueprintUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BlueprintUnequipped");

	UPrimalItemSkin_MiniHLNA_C_BlueprintUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BPAddedAttachments
// ()

void UPrimalItemSkin_MiniHLNA_C::BPAddedAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.BPAddedAttachments");

	UPrimalItemSkin_MiniHLNA_C_BPAddedAttachments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.ExecuteUbergraph_PrimalItemSkin_MiniHLNA
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_MiniHLNA_C::ExecuteUbergraph_PrimalItemSkin_MiniHLNA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C.ExecuteUbergraph_PrimalItemSkin_MiniHLNA");

	UPrimalItemSkin_MiniHLNA_C_ExecuteUbergraph_PrimalItemSkin_MiniHLNA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
