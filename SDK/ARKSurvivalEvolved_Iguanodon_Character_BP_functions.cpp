// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Iguanodon_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.OnJumped
// ()

void AIguanodon_Character_BP_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.OnJumped");

	AIguanodon_Character_BP_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.CanJumpInternal
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIguanodon_Character_BP_C::CanJumpInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.CanJumpInternal");

	AIguanodon_Character_BP_C_CanJumpInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPGetAddForwardVelocityOnJump
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIguanodon_Character_BP_C::BPGetAddForwardVelocityOnJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPGetAddForwardVelocityOnJump");

	AIguanodon_Character_BP_C_BPGetAddForwardVelocityOnJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.OnRep_bIsBiped
// ()

void AIguanodon_Character_BP_C::OnRep_bIsBiped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.OnRep_bIsBiped");

	AIguanodon_Character_BP_C_OnRep_bIsBiped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ToggleStance
// ()

void AIguanodon_Character_BP_C::ToggleStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ToggleStance");

	AIguanodon_Character_BP_C_ToggleStance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPTimerServer
// ()

void AIguanodon_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPTimerServer");

	AIguanodon_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AIguanodon_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AIguanodon_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.StartChangingStance
// ()

void AIguanodon_Character_BP_C::StartChangingStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.StartChangingStance");

	AIguanodon_Character_BP_C_StartChangingStance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Get Correct Stance Switch Anim
// ()
// Parameters:
// class UAnimMontage*            animRef                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIguanodon_Character_BP_C::Get_Correct_Stance_Switch_Anim(class UAnimMontage** animRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Get Correct Stance Switch Anim");

	AIguanodon_Character_BP_C_Get_Correct_Stance_Switch_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (animRef != nullptr)
		*animRef = params.animRef;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPUnstasis
// ()

void AIguanodon_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPUnstasis");

	AIguanodon_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.InitIguanodon
// ()

void AIguanodon_Character_BP_C::InitIguanodon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.InitIguanodon");

	AIguanodon_Character_BP_C_InitIguanodon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.NetSetHasFruitInInventory
// ()
// Parameters:
// bool                           Newval                         (Parm, ZeroConstructor, IsPlainOldData)

void AIguanodon_Character_BP_C::NetSetHasFruitInInventory(bool Newval)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.NetSetHasFruitInInventory");

	AIguanodon_Character_BP_C_NetSetHasFruitInInventory_Params params;
	params.Newval = Newval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Update Move SpeedByStance
// ()

void AIguanodon_Character_BP_C::Update_Move_SpeedByStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Update Move SpeedByStance");

	AIguanodon_Character_BP_C_Update_Move_SpeedByStance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.UpdateStance
// ()

void AIguanodon_Character_BP_C::UpdateStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.UpdateStance");

	AIguanodon_Character_BP_C_UpdateStance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.UpdateHasFruitInInventory
// ()

void AIguanodon_Character_BP_C::UpdateHasFruitInInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.UpdateHasFruitInInventory");

	AIguanodon_Character_BP_C_UpdateHasFruitInInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIguanodon_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPTryMultiUse");

	AIguanodon_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPGetMultiUseEntries
// (Event, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AIguanodon_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPGetMultiUseEntries");

	AIguanodon_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ConvertFruitToSeeds
// ()

void AIguanodon_Character_BP_C::ConvertFruitToSeeds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ConvertFruitToSeeds");

	AIguanodon_Character_BP_C_ConvertFruitToSeeds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AIguanodon_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPNotifySetRider");

	AIguanodon_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Net SetCurrentStance
// ()
// Parameters:
// bool                           isBiped                        (Parm, ZeroConstructor, IsPlainOldData)

void AIguanodon_Character_BP_C::Net_SetCurrentStance(bool isBiped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Net SetCurrentStance");

	AIguanodon_Character_BP_C_Net_SetCurrentStance_Params params;
	params.isBiped = isBiped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPDoAttack
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AIguanodon_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BPDoAttack");

	AIguanodon_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.SetUseStamina
// ()
// Parameters:
// bool                           newUse                         (Parm, ZeroConstructor, IsPlainOldData)

void AIguanodon_Character_BP_C::SetUseStamina(bool newUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.SetUseStamina");

	AIguanodon_Character_BP_C_SetUseStamina_Params params;
	params.newUse = newUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AIguanodon_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ReceiveAnyDamage");

	AIguanodon_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIguanodon_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.BlueprintCanRiderAttack");

	AIguanodon_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ClientSetBipedState
// ()
// Parameters:
// bool                           isBiped                        (Parm, ZeroConstructor, IsPlainOldData)

void AIguanodon_Character_BP_C::ClientSetBipedState(bool isBiped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ClientSetBipedState");

	AIguanodon_Character_BP_C_ClientSetBipedState_Params params;
	params.isBiped = isBiped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.GetDefaultDino
// ()
// Parameters:
// class AIguanodon_Character_BP_C* ref                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIguanodon_Character_BP_C::GetDefaultDino(class AIguanodon_Character_BP_C** ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.GetDefaultDino");

	AIguanodon_Character_BP_C_GetDefaultDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ref != nullptr)
		*ref = params.ref;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.UserConstructionScript
// ()

void AIguanodon_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.UserConstructionScript");

	AIguanodon_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Server_SetWantsToSwitchStance
// ()

void AIguanodon_Character_BP_C::Server_SetWantsToSwitchStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.Server_SetWantsToSwitchStance");

	AIguanodon_Character_BP_C_Server_SetWantsToSwitchStance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.SwitchStanceAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void AIguanodon_Character_BP_C::SwitchStanceAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.SwitchStanceAfterDelay");

	AIguanodon_Character_BP_C_SwitchStanceAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ReceiveBeginPlay
// ()

void AIguanodon_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ReceiveBeginPlay");

	AIguanodon_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ExecuteUbergraph_Iguanodon_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIguanodon_Character_BP_C::ExecuteUbergraph_Iguanodon_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_Character_BP.Iguanodon_Character_BP_C.ExecuteUbergraph_Iguanodon_Character_BP");

	AIguanodon_Character_BP_C_ExecuteUbergraph_Iguanodon_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
