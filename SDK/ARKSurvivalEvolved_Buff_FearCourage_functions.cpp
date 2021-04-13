// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FearCourage_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FearCourage.Buff_FearCourage_C.GetBuffType
// (NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, NetClient, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABuff_FearCourage_C::GetBuffType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.GetBuffType");

	ABuff_FearCourage_C_GetBuffType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_FearCourage.Buff_FearCourage_C.Process Courage Value
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canSwitch                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           useClientIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          finalValue                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::Process_Courage_Value(float Value, class APrimalCharacter* forCharacter, bool canSwitch, bool useClientIndex, float* finalValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.Process Courage Value");

	ABuff_FearCourage_C_Process_Courage_Value_Params params;
	params.Value = Value;
	params.forCharacter = forCharacter;
	params.canSwitch = canSwitch;
	params.useClientIndex = useClientIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (finalValue != nullptr)
		*finalValue = params.finalValue;
}


// Function Buff_FearCourage.Buff_FearCourage_C.ProcessFearValue
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canSwitch                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           useClientIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          finalValue                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::ProcessFearValue(float Value, class APrimalCharacter* forCharacter, bool canSwitch, bool useClientIndex, float* finalValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.ProcessFearValue");

	ABuff_FearCourage_C_ProcessFearValue_Params params;
	params.Value = Value;
	params.forCharacter = forCharacter;
	params.canSwitch = canSwitch;
	params.useClientIndex = useClientIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (finalValue != nullptr)
		*finalValue = params.finalValue;
}


// Function Buff_FearCourage.Buff_FearCourage_C.Max Courage ActionsClient
// ()

void ABuff_FearCourage_C::Max_Courage_ActionsClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.Max Courage ActionsClient");

	ABuff_FearCourage_C_Max_Courage_ActionsClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.BPDrawBuffStatusHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMult                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.BPDrawBuffStatusHUD");

	ABuff_FearCourage_C_BPDrawBuffStatusHUD_Params params;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.GetBuffDescription
// (NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, NetClient, BlueprintEvent)
// Parameters:
// struct FStatusValueModifierDescription ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStatusValueModifierDescription ABuff_FearCourage_C::GetBuffDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.GetBuffDescription");

	ABuff_FearCourage_C_GetBuffDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_FearCourage.Buff_FearCourage_C.Add Fear Or CourageClient
// ()
// Parameters:
// float                          amountToAdd                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isFear                         (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        fearCauser                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           switchFromFearToCourageIfNeeded (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isFromRoar                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::Add_Fear_Or_CourageClient(float amountToAdd, bool isFear, class APrimalCharacter* fearCauser, bool switchFromFearToCourageIfNeeded, bool isFromRoar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.Add Fear Or CourageClient");

	ABuff_FearCourage_C_Add_Fear_Or_CourageClient_Params params;
	params.amountToAdd = amountToAdd;
	params.isFear = isFear;
	params.fearCauser = fearCauser;
	params.switchFromFearToCourageIfNeeded = switchFromFearToCourageIfNeeded;
	params.isFromRoar = isFromRoar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.IsAtMax_f
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           useClientIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           courage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           fear                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::IsAtMax_f(class APrimalCharacter* Character, bool useClientIndex, bool* courage, bool* fear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.IsAtMax_f");

	ABuff_FearCourage_C_IsAtMax_f_Params params;
	params.Character = Character;
	params.useClientIndex = useClientIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (courage != nullptr)
		*courage = params.courage;
	if (fear != nullptr)
		*fear = params.fear;
}


// Function Buff_FearCourage.Buff_FearCourage_C.GetTeamColorForParticles
// ()
// Parameters:
// struct FVector                 finalColor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::GetTeamColorForParticles(struct FVector* finalColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.GetTeamColorForParticles");

	ABuff_FearCourage_C_GetTeamColorForParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (finalColor != nullptr)
		*finalColor = params.finalColor;
}


// Function Buff_FearCourage.Buff_FearCourage_C.SetMultiplier
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue> statusValue                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isFear                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::SetMultiplier(TEnumAsByte<EPrimalCharacterStatusValue> statusValue, int index, bool isFear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.SetMultiplier");

	ABuff_FearCourage_C_SetMultiplier_Params params;
	params.statusValue = statusValue;
	params.index = index;
	params.isFear = isFear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.isSameTeamOrAlly
// ()
// Parameters:
// int                            secondTargetingTeam            (Parm, ZeroConstructor, IsPlainOldData)
// int                            firstTargetingTeamOverride     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isAllyOrSameTeam               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::isSameTeamOrAlly(int secondTargetingTeam, int firstTargetingTeamOverride, bool* isAllyOrSameTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.isSameTeamOrAlly");

	ABuff_FearCourage_C_isSameTeamOrAlly_Params params;
	params.secondTargetingTeam = secondTargetingTeam;
	params.firstTargetingTeamOverride = firstTargetingTeamOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isAllyOrSameTeam != nullptr)
		*isAllyOrSameTeam = params.isAllyOrSameTeam;
}


// Function Buff_FearCourage.Buff_FearCourage_C.CanAddFearOrCourage
// ()
// Parameters:
// bool                           isFear                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canAdd                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::CanAddFearOrCourage(bool isFear, bool* canAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.CanAddFearOrCourage");

	ABuff_FearCourage_C_CanAddFearOrCourage_Params params;
	params.isFear = isFear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canAdd != nullptr)
		*canAdd = params.canAdd;
}


// Function Buff_FearCourage.Buff_FearCourage_C.UpdateFleePoint
// ()

void ABuff_FearCourage_C::UpdateFleePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.UpdateFleePoint");

	ABuff_FearCourage_C_UpdateFleePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.Send HUDMessage to Rider From Server
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, NetClient, BlueprintEvent)
// Parameters:
// class FString                  messageID                      (Parm, ZeroConstructor)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::STATIC_Send_HUDMessage_to_Rider_From_Server(const class FString& messageID, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.Send HUDMessage to Rider From Server");

	ABuff_FearCourage_C_Send_HUDMessage_to_Rider_From_Server_Params params;
	params.messageID = messageID;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.BPClientHandleNetExecCommand
// ()
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_FearCourage_C::BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.BPClientHandleNetExecCommand");

	ABuff_FearCourage_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_FearCourage.Buff_FearCourage_C.ReduceTerror
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::ReduceTerror(float amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.ReduceTerror");

	ABuff_FearCourage_C_ReduceTerror_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.BPInventoryItemUsed
// ()
// Parameters:
// class UObject**                InventoryItemObject            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::BPInventoryItemUsed(class UObject** InventoryItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.BPInventoryItemUsed");

	ABuff_FearCourage_C_BPInventoryItemUsed_Params params;
	params.InventoryItemObject = InventoryItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.OnFearAdded
// ()
// Parameters:
// class APrimalCharacter*        causer                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          fearAmount                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::OnFearAdded(class APrimalCharacter* causer, float fearAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.OnFearAdded");

	ABuff_FearCourage_C_OnFearAdded_Params params;
	params.causer = causer;
	params.fearAmount = fearAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.ReceiveDestroyed
// ()

void ABuff_FearCourage_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.ReceiveDestroyed");

	ABuff_FearCourage_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.RestoreVariables
// ()

void ABuff_FearCourage_C::RestoreVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.RestoreVariables");

	ABuff_FearCourage_C_RestoreVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.ExtendBuffTimeIfNeeded
// ()
// Parameters:
// bool                           forceExtend                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          toDuration                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::ExtendBuffTimeIfNeeded(bool forceExtend, float toDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.ExtendBuffTimeIfNeeded");

	ABuff_FearCourage_C_ExtendBuffTimeIfNeeded_Params params;
	params.forceExtend = forceExtend;
	params.toDuration = toDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.BuffTickClient");

	ABuff_FearCourage_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.CheckDeactivateCondition
// ()

void ABuff_FearCourage_C::CheckDeactivateCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.CheckDeactivateCondition");

	ABuff_FearCourage_C_CheckDeactivateCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_FearCourage_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.GetBuffPostprocessIntensity");

	ABuff_FearCourage_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_FearCourage.Buff_FearCourage_C.OnDinoDismounted
// ()

void ABuff_FearCourage_C::OnDinoDismounted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.OnDinoDismounted");

	ABuff_FearCourage_C_OnDinoDismounted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.OnDinoMounted
// ()

void ABuff_FearCourage_C::OnDinoMounted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.OnDinoMounted");

	ABuff_FearCourage_C_OnDinoMounted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.BPDeactivated");

	ABuff_FearCourage_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.SendHUDMessageToRider
// ()
// Parameters:
// struct FStatusValueModifierDescription Description                    (Parm)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::SendHUDMessageToRider(const struct FStatusValueModifierDescription& Description, float Scale, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.SendHUDMessageToRider");

	ABuff_FearCourage_C_SendHUDMessageToRider_Params params;
	params.Description = Description;
	params.Scale = Scale;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.TerrorActions
// (NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::TerrorActions(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.TerrorActions");

	ABuff_FearCourage_C_TerrorActions_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.ActivateUnmountedFlee
// ()

void ABuff_FearCourage_C::ActivateUnmountedFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.ActivateUnmountedFlee");

	ABuff_FearCourage_C_ActivateUnmountedFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.ActivateMountedFlee
// ()

void ABuff_FearCourage_C::ActivateMountedFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.ActivateMountedFlee");

	ABuff_FearCourage_C_ActivateMountedFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.OnRep_isMounted
// ()

void ABuff_FearCourage_C::OnRep_isMounted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.OnRep_isMounted");

	ABuff_FearCourage_C_OnRep_isMounted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.UpdateMountedVariable
// ()
// Parameters:
// bool                           ForceUpdate                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::UpdateMountedVariable(bool ForceUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.UpdateMountedVariable");

	ABuff_FearCourage_C_UpdateMountedVariable_Params params;
	params.ForceUpdate = ForceUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.OnCourageRoar
// ()
// Parameters:
// bool                           canSwitchToCourage             (Parm, ZeroConstructor, IsPlainOldData)
// float                          amountOverride                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           useAmountOverride              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           sendMessageToRider             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::OnCourageRoar(bool canSwitchToCourage, float amountOverride, bool useAmountOverride, bool sendMessageToRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.OnCourageRoar");

	ABuff_FearCourage_C_OnCourageRoar_Params params;
	params.canSwitchToCourage = canSwitchToCourage;
	params.amountOverride = amountOverride;
	params.useAmountOverride = useAmountOverride;
	params.sendMessageToRider = sendMessageToRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.InitializeBuff
// ()
// Parameters:
// bool                           isFear                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::InitializeBuff(bool isFear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.InitializeBuff");

	ABuff_FearCourage_C_InitializeBuff_Params params;
	params.isFear = isFear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.IncreaseStat
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue> statusValue                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalCharacterStatusComponent* statusComponent                (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isFear                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::IncreaseStat(TEnumAsByte<EPrimalCharacterStatusValue> statusValue, int index, class UPrimalCharacterStatusComponent* statusComponent, float DeltaTime, bool isFear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.IncreaseStat");

	ABuff_FearCourage_C_IncreaseStat_Params params;
	params.statusValue = statusValue;
	params.index = index;
	params.statusComponent = statusComponent;
	params.DeltaTime = DeltaTime;
	params.isFear = isFear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.DrawBuffFloatingHUD
// ()
// Parameters:
// int*                           BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.DrawBuffFloatingHUD");

	ABuff_FearCourage_C_DrawBuffFloatingHUD_Params params;
	params.BuffIndex = BuffIndex;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.BuffTickServer");

	ABuff_FearCourage_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.Check Terror Condition
// ()
// Parameters:
// class APrimalCharacter*        fearCauser                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::Check_Terror_Condition(class APrimalCharacter* fearCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.Check Terror Condition");

	ABuff_FearCourage_C_Check_Terror_Condition_Params params;
	params.fearCauser = fearCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.On FearRoar
// ()
// Parameters:
// class APrimalCharacter*        fearCauser                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          amountOverride                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           useAmountOverride              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           switchFromFearToCourageIfNeeded (Parm, ZeroConstructor, IsPlainOldData)
// bool                           sendMessageToRider             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::On_FearRoar(class APrimalCharacter* fearCauser, float amountOverride, bool useAmountOverride, bool switchFromFearToCourageIfNeeded, bool sendMessageToRider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.On FearRoar");

	ABuff_FearCourage_C_On_FearRoar_Params params;
	params.fearCauser = fearCauser;
	params.amountOverride = amountOverride;
	params.useAmountOverride = useAmountOverride;
	params.switchFromFearToCourageIfNeeded = switchFromFearToCourageIfNeeded;
	params.sendMessageToRider = sendMessageToRider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.Add FearOrCourage
// ()
// Parameters:
// float                          amountToAdd                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isFear                         (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        fearCauser                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           switchFromFearToCourageIfNeeded (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isFromRoar                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::Add_FearOrCourage(float amountToAdd, bool isFear, class APrimalCharacter* fearCauser, bool switchFromFearToCourageIfNeeded, bool isFromRoar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.Add FearOrCourage");

	ABuff_FearCourage_C_Add_FearOrCourage_Params params;
	params.amountToAdd = amountToAdd;
	params.isFear = isFear;
	params.fearCauser = fearCauser;
	params.switchFromFearToCourageIfNeeded = switchFromFearToCourageIfNeeded;
	params.isFromRoar = isFromRoar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.Start Terror
// ()
// Parameters:
// class APrimalCharacter*        fearCauser                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::Start_Terror(class APrimalCharacter* fearCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.Start Terror");

	ABuff_FearCourage_C_Start_Terror_Params params;
	params.fearCauser = fearCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.UserConstructionScript
// ()

void ABuff_FearCourage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.UserConstructionScript");

	ABuff_FearCourage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.DecelerationTimeline__FinishedFunc
// ()

void ABuff_FearCourage_C::DecelerationTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.DecelerationTimeline__FinishedFunc");

	ABuff_FearCourage_C_DecelerationTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.DecelerationTimeline__UpdateFunc
// ()

void ABuff_FearCourage_C::DecelerationTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.DecelerationTimeline__UpdateFunc");

	ABuff_FearCourage_C_DecelerationTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Fire_K2Node_InputActionEvent_134
// ()

void ABuff_FearCourage_C::InpActEvt_Fire_K2Node_InputActionEvent_134()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Fire_K2Node_InputActionEvent_134");

	ABuff_FearCourage_C_InpActEvt_Fire_K2Node_InputActionEvent_134_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Targeting_K2Node_InputActionEvent_133
// ()

void ABuff_FearCourage_C::InpActEvt_Targeting_K2Node_InputActionEvent_133()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Targeting_K2Node_InputActionEvent_133");

	ABuff_FearCourage_C_InpActEvt_Targeting_K2Node_InputActionEvent_133_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Crouch_K2Node_InputActionEvent_132
// ()

void ABuff_FearCourage_C::InpActEvt_Crouch_K2Node_InputActionEvent_132()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Crouch_K2Node_InputActionEvent_132");

	ABuff_FearCourage_C_InpActEvt_Crouch_K2Node_InputActionEvent_132_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Jump_K2Node_InputActionEvent_131
// ()

void ABuff_FearCourage_C::InpActEvt_Jump_K2Node_InputActionEvent_131()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.InpActEvt_Jump_K2Node_InputActionEvent_131");

	ABuff_FearCourage_C_InpActEvt_Jump_K2Node_InputActionEvent_131_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.ReceiveBeginPlay
// ()

void ABuff_FearCourage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.ReceiveBeginPlay");

	ABuff_FearCourage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.InitializeNonDedi
// ()

void ABuff_FearCourage_C::InitializeNonDedi()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.InitializeNonDedi");

	ABuff_FearCourage_C_InitializeNonDedi_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.Decelerate
// ()
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::Decelerate(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.Decelerate");

	ABuff_FearCourage_C_Decelerate_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.GivePlayerControlAfterDelay
// ()
// Parameters:
// class APrimalDinoCharacter*    Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::GivePlayerControlAfterDelay(class APrimalDinoCharacter* Instigator, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.GivePlayerControlAfterDelay");

	ABuff_FearCourage_C_GivePlayerControlAfterDelay_Params params;
	params.Instigator = Instigator;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.UpdatePathingDestination_Multicast
// ()
// Parameters:
// struct FVector                 newPathingDestination          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::UpdatePathingDestination_Multicast(const struct FVector& newPathingDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.UpdatePathingDestination_Multicast");

	ABuff_FearCourage_C_UpdatePathingDestination_Multicast_Params params;
	params.newPathingDestination = newPathingDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.EmitPoopAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::EmitPoopAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.EmitPoopAfterDelay");

	ABuff_FearCourage_C_EmitPoopAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.UnrollDoed_Multicast
// ()

void ABuff_FearCourage_C::UnrollDoed_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.UnrollDoed_Multicast");

	ABuff_FearCourage_C_UnrollDoed_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.SetParticlesColorByTeam
// ()

void ABuff_FearCourage_C::SetParticlesColorByTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.SetParticlesColorByTeam");

	ABuff_FearCourage_C_SetParticlesColorByTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.UnrollDoed
// ()

void ABuff_FearCourage_C::UnrollDoed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.UnrollDoed");

	ABuff_FearCourage_C_UnrollDoed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.UnrollDoedIfNeeded
// ()

void ABuff_FearCourage_C::UnrollDoedIfNeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.UnrollDoedIfNeeded");

	ABuff_FearCourage_C_UnrollDoedIfNeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.InitializeCircleParticles
// ()

void ABuff_FearCourage_C::InitializeCircleParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.InitializeCircleParticles");

	ABuff_FearCourage_C_InitializeCircleParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FearCourage.Buff_FearCourage_C.ExecuteUbergraph_Buff_FearCourage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FearCourage_C::ExecuteUbergraph_Buff_FearCourage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FearCourage.Buff_FearCourage_C.ExecuteUbergraph_Buff_FearCourage");

	ABuff_FearCourage_C_ExecuteUbergraph_Buff_FearCourage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
