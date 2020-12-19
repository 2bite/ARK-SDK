// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MiniHLNA_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MiniHLNA.Buff_MiniHLNA_C.Clear Async Loaded Audio
// ()

void ABuff_MiniHLNA_C::Clear_Async_Loaded_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiniHLNA.Buff_MiniHLNA_C.Clear Async Loaded Audio");

	ABuff_MiniHLNA_C_Clear_Async_Loaded_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MiniHLNA.Buff_MiniHLNA_C.VerifySeasonPassFn
// ()

void ABuff_MiniHLNA_C::VerifySeasonPassFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiniHLNA.Buff_MiniHLNA_C.VerifySeasonPassFn");

	ABuff_MiniHLNA_C_VerifySeasonPassFn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MiniHLNA.Buff_MiniHLNA_C.RemoveSkin
// ()

void ABuff_MiniHLNA_C::RemoveSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiniHLNA.Buff_MiniHLNA_C.RemoveSkin");

	ABuff_MiniHLNA_C_RemoveSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MiniHLNA.Buff_MiniHLNA_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_MiniHLNA_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiniHLNA.Buff_MiniHLNA_C.BPServerHandleNetExecCommand");

	ABuff_MiniHLNA_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_MiniHLNA.Buff_MiniHLNA_C.BPClientHandleNetExecCommand
// ()
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_MiniHLNA_C::BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiniHLNA.Buff_MiniHLNA_C.BPClientHandleNetExecCommand");

	ABuff_MiniHLNA_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_MiniHLNA.Buff_MiniHLNA_C.Play Random UniqueSound
// ()
// Parameters:
// TArray<class USoundBase*>      Sounds                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            PrevSoundIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayedIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MiniHLNA_C::Play_Random_UniqueSound(int PrevSoundIndex, TArray<class USoundBase*>* Sounds, int* PlayedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiniHLNA.Buff_MiniHLNA_C.Play Random UniqueSound");

	ABuff_MiniHLNA_C_Play_Random_UniqueSound_Params params;
	params.PrevSoundIndex = PrevSoundIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sounds != nullptr)
		*Sounds = params.Sounds;
	if (PlayedIndex != nullptr)
		*PlayedIndex = params.PlayedIndex;
}


// Function Buff_MiniHLNA.Buff_MiniHLNA_C.OnUnequip
// ()

void ABuff_MiniHLNA_C::OnUnequip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiniHLNA.Buff_MiniHLNA_C.OnUnequip");

	ABuff_MiniHLNA_C_OnUnequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MiniHLNA.Buff_MiniHLNA_C.Get Random UniqueInt
// ()
// Parameters:
// int                            Max                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            exclude                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_MiniHLNA_C::Get_Random_UniqueInt(int Max, int exclude, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiniHLNA.Buff_MiniHLNA_C.Get Random UniqueInt");

	ABuff_MiniHLNA_C_Get_Random_UniqueInt_Params params;
	params.Max = Max;
	params.exclude = exclude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_MiniHLNA.Buff_MiniHLNA_C.ReceiveBeginPlay
// ()

void ABuff_MiniHLNA_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiniHLNA.Buff_MiniHLNA_C.ReceiveBeginPlay");

	ABuff_MiniHLNA_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MiniHLNA.Buff_MiniHLNA_C.BuffPostAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MiniHLNA_C::BuffPostAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiniHLNA.Buff_MiniHLNA_C.BuffPostAdjustDamage");

	ABuff_MiniHLNA_C_BuffPostAdjustDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;
}


// Function Buff_MiniHLNA.Buff_MiniHLNA_C.UserConstructionScript
// ()

void ABuff_MiniHLNA_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiniHLNA.Buff_MiniHLNA_C.UserConstructionScript");

	ABuff_MiniHLNA_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MiniHLNA.Buff_MiniHLNA_C.MultiPlaySound
// ()
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MiniHLNA_C::MultiPlaySound(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiniHLNA.Buff_MiniHLNA_C.MultiPlaySound");

	ABuff_MiniHLNA_C_MultiPlaySound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MiniHLNA.Buff_MiniHLNA_C.VerifySeasonPass
// ()

void ABuff_MiniHLNA_C::VerifySeasonPass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiniHLNA.Buff_MiniHLNA_C.VerifySeasonPass");

	ABuff_MiniHLNA_C_VerifySeasonPass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MiniHLNA.Buff_MiniHLNA_C.Simple Load Async Sound Cue
// ()
// Parameters:
// TArray<struct FLocalizedSoundCueEntry> Localized                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABuff_MiniHLNA_C::Simple_Load_Async_Sound_Cue(TArray<struct FLocalizedSoundCueEntry>* Localized)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiniHLNA.Buff_MiniHLNA_C.Simple Load Async Sound Cue");

	ABuff_MiniHLNA_C_Simple_Load_Async_Sound_Cue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Localized != nullptr)
		*Localized = params.Localized;
}


// Function Buff_MiniHLNA.Buff_MiniHLNA_C.AsyncAssetLoadedDelegate__ExplorerNoteAudio
// ()
// Parameters:
// class FString                  AssetPath                      (Parm, ZeroConstructor)
// class UObject*                 LoadedAsset                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MiniHLNA_C::AsyncAssetLoadedDelegate__ExplorerNoteAudio(const class FString& AssetPath, class UObject* LoadedAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiniHLNA.Buff_MiniHLNA_C.AsyncAssetLoadedDelegate__ExplorerNoteAudio");

	ABuff_MiniHLNA_C_AsyncAssetLoadedDelegate__ExplorerNoteAudio_Params params;
	params.AssetPath = AssetPath;
	params.LoadedAsset = LoadedAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MiniHLNA.Buff_MiniHLNA_C.play hurt sfx
// ()

void ABuff_MiniHLNA_C::play_hurt_sfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiniHLNA.Buff_MiniHLNA_C.play hurt sfx");

	ABuff_MiniHLNA_C_play_hurt_sfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MiniHLNA.Buff_MiniHLNA_C.ExecuteUbergraph_Buff_MiniHLNA
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MiniHLNA_C::ExecuteUbergraph_Buff_MiniHLNA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MiniHLNA.Buff_MiniHLNA_C.ExecuteUbergraph_Buff_MiniHLNA");

	ABuff_MiniHLNA_C_ExecuteUbergraph_Buff_MiniHLNA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
