// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Otter_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Otter_Character_BP.Otter_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void AOtter_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.BPSetupTamed");

	AOtter_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Otter_Character_BP.Otter_Character_BP_C.OnLaunched
// (NetReliable, Native, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector*                LaunchVelocity                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bXYOverride                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bZOverride                     (Parm, ZeroConstructor, IsPlainOldData)

void AOtter_Character_BP_C::STATIC_OnLaunched(struct FVector* LaunchVelocity, bool* bXYOverride, bool* bZOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.OnLaunched");

	AOtter_Character_BP_C_OnLaunched_Params params;
	params.LaunchVelocity = LaunchVelocity;
	params.bXYOverride = bXYOverride;
	params.bZOverride = bZOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Otter_Character_BP.Otter_Character_BP_C.BPTimerServer
// ()

void AOtter_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.BPTimerServer");

	AOtter_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Otter_Character_BP.Otter_Character_BP_C.OnOwnerReached
// ()

void AOtter_Character_BP_C::OnOwnerReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.OnOwnerReached");

	AOtter_Character_BP_C_OnOwnerReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Otter_Character_BP.Otter_Character_BP_C.Returning To Owner Actions
// ()

void AOtter_Character_BP_C::Returning_To_Owner_Actions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.Returning To Owner Actions");

	AOtter_Character_BP_C_Returning_To_Owner_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Otter_Character_BP.Otter_Character_BP_C.Set Last Player Order
// ()
// Parameters:
// class APawn*                   Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AOtter_Character_BP_C::Set_Last_Player_Order(class APawn* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.Set Last Player Order");

	AOtter_Character_BP_C_Set_Last_Player_Order_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Otter_Character_BP.Otter_Character_BP_C.GetOwnerCharacter
// ()
// Parameters:
// class APawn*                   Owner                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOtter_Character_BP_C::GetOwnerCharacter(class APawn** Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.GetOwnerCharacter");

	AOtter_Character_BP_C_GetOwnerCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Owner != nullptr)
		*Owner = params.Owner;
}


// Function Otter_Character_BP.Otter_Character_BP_C.ReturnToPlayer
// ()

void AOtter_Character_BP_C::ReturnToPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.ReturnToPlayer");

	AOtter_Character_BP_C_ReturnToPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Otter_Character_BP.Otter_Character_BP_C.SelectPearl
// ()
// Parameters:
// bool                           GotAPearl                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            IndexOfSelectedItem            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOtter_Character_BP_C::SelectPearl(bool* GotAPearl, int* IndexOfSelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.SelectPearl");

	AOtter_Character_BP_C_SelectPearl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GotAPearl != nullptr)
		*GotAPearl = params.GotAPearl;
	if (IndexOfSelectedItem != nullptr)
		*IndexOfSelectedItem = params.IndexOfSelectedItem;
}


// Function Otter_Character_BP.Otter_Character_BP_C.AttemptToGetAPearl
// ()
// Parameters:
// bool                           ObtainedAPearl                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOtter_Character_BP_C::AttemptToGetAPearl(bool* ObtainedAPearl)
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.AttemptToGetAPearl");

	AOtter_Character_BP_C_AttemptToGetAPearl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObtainedAPearl != nullptr)
		*ObtainedAPearl = params.ObtainedAPearl;
}


// Function Otter_Character_BP.Otter_Character_BP_C.IsCharacterAFish
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOtter_Character_BP_C::IsCharacterAFish(class APrimalCharacter* Character, bool* IsValid, int* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.IsCharacterAFish");

	AOtter_Character_BP_C_IsCharacterAFish_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (index != nullptr)
		*index = params.index;
}


// Function Otter_Character_BP.Otter_Character_BP_C.BPKilledSomethingEvent
// ()
// Parameters:
// class APrimalCharacter**       killedTarget                   (Parm, ZeroConstructor, IsPlainOldData)

void AOtter_Character_BP_C::BPKilledSomethingEvent(class APrimalCharacter** killedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.BPKilledSomethingEvent");

	AOtter_Character_BP_C_BPKilledSomethingEvent_Params params;
	params.killedTarget = killedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Otter_Character_BP.Otter_Character_BP_C.EatPlayersCarriedFood
// ()
// Parameters:
// class APrimalCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AOtter_Character_BP_C::EatPlayersCarriedFood(class APrimalCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.EatPlayersCarriedFood");

	AOtter_Character_BP_C_EatPlayersCarriedFood_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Otter_Character_BP.Otter_Character_BP_C.Init
// ()

void AOtter_Character_BP_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.Init");

	AOtter_Character_BP_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Otter_Character_BP.Otter_Character_BP_C.IsCarriedFishValid
// ()
// Parameters:
// class APrimalCharacter*        Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AOtter_Character_BP_C::IsCarriedFishValid(class APrimalCharacter* Player, bool* IsValid, int* index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.IsCarriedFishValid");

	AOtter_Character_BP_C_IsCarriedFishValid_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (index != nullptr)
		*index = params.index;
}


// Function Otter_Character_BP.Otter_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOtter_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.BPTryMultiUse");

	AOtter_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Otter_Character_BP.Otter_Character_BP_C.BPGetMultiUseEntries
// (Net, Exec, Event, NetResponse, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AOtter_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.BPGetMultiUseEntries");

	AOtter_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Otter_Character_BP.Otter_Character_BP_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AOtter_Character_BP_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.BPClientDoMultiUse");

	AOtter_Character_BP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Otter_Character_BP.Otter_Character_BP_C.UserConstructionScript
// ()

void AOtter_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.UserConstructionScript");

	AOtter_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Otter_Character_BP.Otter_Character_BP_C.ReceiveBeginPlay
// ()

void AOtter_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.ReceiveBeginPlay");

	AOtter_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Otter_Character_BP.Otter_Character_BP_C.AnimNotify_ShowPearl
// ()

void AOtter_Character_BP_C::AnimNotify_ShowPearl()
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.AnimNotify_ShowPearl");

	AOtter_Character_BP_C_AnimNotify_ShowPearl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Otter_Character_BP.Otter_Character_BP_C.MulticastPlayShowPearl
// ()
// Parameters:
// int                            switchIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AOtter_Character_BP_C::MulticastPlayShowPearl(int switchIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.MulticastPlayShowPearl");

	AOtter_Character_BP_C_MulticastPlayShowPearl_Params params;
	params.switchIndex = switchIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Otter_Character_BP.Otter_Character_BP_C.ExecuteUbergraph_Otter_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOtter_Character_BP_C::ExecuteUbergraph_Otter_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Otter_Character_BP.Otter_Character_BP_C.ExecuteUbergraph_Otter_Character_BP");

	AOtter_Character_BP_C_ExecuteUbergraph_Otter_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
