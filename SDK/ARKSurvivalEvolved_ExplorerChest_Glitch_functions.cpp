// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplorerChest_Glitch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.Delay play Reaction Function
// (NetRequest, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent)
// Parameters:
// struct FCompanionReactionData  WithReactionData               (Parm, OutParm, ReferenceParm)
// class APrimalBuff_Companion*   HLNA                           (Parm, ZeroConstructor, IsPlainOldData)

void AExplorerChest_Glitch_C::Delay_play_Reaction_Function(class APrimalBuff_Companion* HLNA, struct FCompanionReactionData* WithReactionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.Delay play Reaction Function");

	AExplorerChest_Glitch_C_Delay_play_Reaction_Function_Params params;
	params.HLNA = HLNA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WithReactionData != nullptr)
		*WithReactionData = params.WithReactionData;
}


// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.delayed reaction
// (NetRequest, Exec, NetResponse, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent)

void AExplorerChest_Glitch_C::delayed_reaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.delayed reaction");

	AExplorerChest_Glitch_C_delayed_reaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.UnlockGen2ExplorerNote
// (Net, NetReliable, Native, NetResponse, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent)

void AExplorerChest_Glitch_C::UnlockGen2ExplorerNote()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.UnlockGen2ExplorerNote");

	AExplorerChest_Glitch_C_UnlockGen2ExplorerNote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.DrawBasicFloatingHUD
// ()
// Parameters:
// class AHUD**                   ForHUD                         (Parm, ZeroConstructor, IsPlainOldData)

void AExplorerChest_Glitch_C::DrawBasicFloatingHUD(class AHUD** ForHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.DrawBasicFloatingHUD");

	AExplorerChest_Glitch_C_DrawBasicFloatingHUD_Params params;
	params.ForHUD = ForHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.PlayExplorerNoteOnHLNA
// (NetReliable, NetRequest, NetResponse, Static, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent)
// Parameters:
// class UPrimalItem*             Item                           (Parm, ZeroConstructor, IsPlainOldData)

void AExplorerChest_Glitch_C::STATIC_PlayExplorerNoteOnHLNA(class UPrimalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.PlayExplorerNoteOnHLNA");

	AExplorerChest_Glitch_C_PlayExplorerNoteOnHLNA_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.UserConstructionScript
// ()

void AExplorerChest_Glitch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.UserConstructionScript");

	AExplorerChest_Glitch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AExplorerChest_Glitch_C::BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature");

	AExplorerChest_Glitch_C_BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepResult != nullptr)
		*SweepResult = params.SweepResult;
}


// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AExplorerChest_Glitch_C::BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature");

	AExplorerChest_Glitch_C_BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AExplorerChest_Glitch_C::BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature");

	AExplorerChest_Glitch_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepResult != nullptr)
		*SweepResult = params.SweepResult;
}


// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.delay play reaction
// ()
// Parameters:
// struct FCompanionReactionData  reaction                       (Parm)
// class APrimalBuff_Companion*   HLNA                           (Parm, ZeroConstructor, IsPlainOldData)

void AExplorerChest_Glitch_C::delay_play_reaction(const struct FCompanionReactionData& reaction, class APrimalBuff_Companion* HLNA)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.delay play reaction");

	AExplorerChest_Glitch_C_delay_play_reaction_Params params;
	params.reaction = reaction;
	params.HLNA = HLNA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.ExecuteUbergraph_ExplorerChest_Glitch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExplorerChest_Glitch_C::ExecuteUbergraph_ExplorerChest_Glitch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.ExecuteUbergraph_ExplorerChest_Glitch");

	AExplorerChest_Glitch_C_ExecuteUbergraph_ExplorerChest_Glitch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
