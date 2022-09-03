// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Helmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Helmet_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPClientDoMultiUse");

	ABuff_TekArmor_Helmet_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekArmor_Helmet_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPTryMultiUse");

	ABuff_TekArmor_Helmet_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPGetMultiUseEntries
// (NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Protected, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABuff_TekArmor_Helmet_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPGetMultiUseEntries");

	ABuff_TekArmor_Helmet_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.ExternalVisorToggle
// ()

void ABuff_TekArmor_Helmet_C::ExternalVisorToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.ExternalVisorToggle");

	ABuff_TekArmor_Helmet_C_ExternalVisorToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPNotifyOtherBuffActivated
// ()
// Parameters:
// class APrimalBuff**            OtherBuff                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Helmet_C::BPNotifyOtherBuffActivated(class APrimalBuff** OtherBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPNotifyOtherBuffActivated");

	ABuff_TekArmor_Helmet_C_BPNotifyOtherBuffActivated_Params params;
	params.OtherBuff = OtherBuff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPNotifyOtherBuffDeactivated
// ()
// Parameters:
// class APrimalBuff**            OtherBuff                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Helmet_C::BPNotifyOtherBuffDeactivated(class APrimalBuff** OtherBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPNotifyOtherBuffDeactivated");

	ABuff_TekArmor_Helmet_C_BPNotifyOtherBuffDeactivated_Params params;
	params.OtherBuff = OtherBuff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.RefreshFullTekSuitBuff
// ()

void ABuff_TekArmor_Helmet_C::RefreshFullTekSuitBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.RefreshFullTekSuitBuff");

	ABuff_TekArmor_Helmet_C_RefreshFullTekSuitBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Helmet_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BuffTickServer");

	ABuff_TekArmor_Helmet_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.DeactivateVisor
// ()

void ABuff_TekArmor_Helmet_C::DeactivateVisor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.DeactivateVisor");

	ABuff_TekArmor_Helmet_C_DeactivateVisor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.UpdateTintColor
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Helmet_C::UpdateTintColor(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.UpdateTintColor");

	ABuff_TekArmor_Helmet_C_UpdateTintColor_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.SetCastedArmorPieceRef
// ()

void ABuff_TekArmor_Helmet_C::SetCastedArmorPieceRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.SetCastedArmorPieceRef");

	ABuff_TekArmor_Helmet_C_SetCastedArmorPieceRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.RemoveToggleBuffs
// ()

void ABuff_TekArmor_Helmet_C::RemoveToggleBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.RemoveToggleBuffs");

	ABuff_TekArmor_Helmet_C_RemoveToggleBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Helmet_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BuffTickClient");

	ABuff_TekArmor_Helmet_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Helmet_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPDeactivated");

	ABuff_TekArmor_Helmet_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPActivated_1
// ()

void ABuff_TekArmor_Helmet_C::BPActivated_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPActivated_1");

	ABuff_TekArmor_Helmet_C_BPActivated_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.UserConstructionScript
// ()

void ABuff_TekArmor_Helmet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.UserConstructionScript");

	ABuff_TekArmor_Helmet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.FadeIn__FinishedFunc
// ()

void ABuff_TekArmor_Helmet_C::FadeIn__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.FadeIn__FinishedFunc");

	ABuff_TekArmor_Helmet_C_FadeIn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.FadeIn__UpdateFunc
// ()

void ABuff_TekArmor_Helmet_C::FadeIn__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.FadeIn__UpdateFunc");

	ABuff_TekArmor_Helmet_C_FadeIn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.FadeOut__FinishedFunc
// ()

void ABuff_TekArmor_Helmet_C::FadeOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.FadeOut__FinishedFunc");

	ABuff_TekArmor_Helmet_C_FadeOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.FadeOut__UpdateFunc
// ()

void ABuff_TekArmor_Helmet_C::FadeOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.FadeOut__UpdateFunc");

	ABuff_TekArmor_Helmet_C_FadeOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BackToInitialPress
// ()

void ABuff_TekArmor_Helmet_C::BackToInitialPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BackToInitialPress");

	ABuff_TekArmor_Helmet_C_BackToInitialPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.OnTogglePressed
// ()

void ABuff_TekArmor_Helmet_C::OnTogglePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.OnTogglePressed");

	ABuff_TekArmor_Helmet_C_OnTogglePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.MoveToNextState
// ()

void ABuff_TekArmor_Helmet_C::MoveToNextState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.MoveToNextState");

	ABuff_TekArmor_Helmet_C_MoveToNextState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.SetToggleState
// ()
// Parameters:
// int                            NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Helmet_C::SetToggleState(int NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.SetToggleState");

	ABuff_TekArmor_Helmet_C_SetToggleState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.PlayAnims
// ()

void ABuff_TekArmor_Helmet_C::PlayAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.PlayAnims");

	ABuff_TekArmor_Helmet_C_PlayAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.PlayAnim_Multicast
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Helmet_C::PlayAnim_Multicast(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.PlayAnim_Multicast");

	ABuff_TekArmor_Helmet_C_PlayAnim_Multicast_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.PlayAnim_Server
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Helmet_C::PlayAnim_Server(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.PlayAnim_Server");

	ABuff_TekArmor_Helmet_C_PlayAnim_Server_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.HelmetFadeIn
// ()

void ABuff_TekArmor_Helmet_C::HelmetFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.HelmetFadeIn");

	ABuff_TekArmor_Helmet_C_HelmetFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.HelmetFadeOut
// ()

void ABuff_TekArmor_Helmet_C::HelmetFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.HelmetFadeOut");

	ABuff_TekArmor_Helmet_C_HelmetFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.FadeInAndOut
// ()

void ABuff_TekArmor_Helmet_C::FadeInAndOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.FadeInAndOut");

	ABuff_TekArmor_Helmet_C_FadeInAndOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.Server_AddPostProcessBuffToPlayer
// ()
// Parameters:
// int                            BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Helmet_C::Server_AddPostProcessBuffToPlayer(int BuffIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.Server_AddPostProcessBuffToPlayer");

	ABuff_TekArmor_Helmet_C_Server_AddPostProcessBuffToPlayer_Params params;
	params.BuffIndex = BuffIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.Server_RemovePostProcessBuffFromPlayer
// ()
// Parameters:
// int                            BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Helmet_C::Server_RemovePostProcessBuffFromPlayer(int BuffIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.Server_RemovePostProcessBuffFromPlayer");

	ABuff_TekArmor_Helmet_C_Server_RemovePostProcessBuffFromPlayer_Params params;
	params.BuffIndex = BuffIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.Server_RemoveAllPostProcessBuffs
// ()

void ABuff_TekArmor_Helmet_C::Server_RemoveAllPostProcessBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.Server_RemoveAllPostProcessBuffs");

	ABuff_TekArmor_Helmet_C_Server_RemoveAllPostProcessBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.RemovePostProcessBuff
// ()
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Helmet_C::RemovePostProcessBuff(int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.RemovePostProcessBuff");

	ABuff_TekArmor_Helmet_C_RemovePostProcessBuff_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.ExternalVisorOnOffToggle
// ()

void ABuff_TekArmor_Helmet_C::ExternalVisorOnOffToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.ExternalVisorOnOffToggle");

	ABuff_TekArmor_Helmet_C_ExternalVisorOnOffToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.ExecuteUbergraph_Buff_TekArmor_Helmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekArmor_Helmet_C::ExecuteUbergraph_Buff_TekArmor_Helmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.ExecuteUbergraph_Buff_TekArmor_Helmet");

	ABuff_TekArmor_Helmet_C_ExecuteUbergraph_Buff_TekArmor_Helmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
