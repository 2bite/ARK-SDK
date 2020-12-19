// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_TekAlarm_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_TekAlarm.Structure_TekAlarm_C.InitSavedTribeLoggingSettings
// ()

void AStructure_TekAlarm_C::InitSavedTribeLoggingSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.InitSavedTribeLoggingSettings");

	AStructure_TekAlarm_C_InitSavedTribeLoggingSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.GetNextRotation
// ()
// Parameters:
// struct FRotator                CurrentRotation                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDecrease                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Roll                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Pitch                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NextRotation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::GetNextRotation(const struct FRotator& CurrentRotation, bool bDecrease, bool Roll, bool Pitch, bool Yaw, struct FRotator* NextRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetNextRotation");

	AStructure_TekAlarm_C_GetNextRotation_Params params;
	params.CurrentRotation = CurrentRotation;
	params.bDecrease = bDecrease;
	params.Roll = Roll;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextRotation != nullptr)
		*NextRotation = params.NextRotation;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentStructureDetectBoxRotation
// ()

void AStructure_TekAlarm_C::OnRep_CurrentStructureDetectBoxRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentStructureDetectBoxRotation");

	AStructure_TekAlarm_C_OnRep_CurrentStructureDetectBoxRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentTargetDetectBoxRotation
// ()

void AStructure_TekAlarm_C::OnRep_CurrentTargetDetectBoxRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentTargetDetectBoxRotation");

	AStructure_TekAlarm_C_OnRep_CurrentTargetDetectBoxRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateAutoDeactivation
// ()

void AStructure_TekAlarm_C::UpdateAutoDeactivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateAutoDeactivation");

	AStructure_TekAlarm_C_UpdateAutoDeactivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.GetTargetTypesToChange
// ()
// Parameters:
// TArray<TEnumAsByte<ETekAlarmTargetTypes>> ActiveTypes                    (Parm, OutParm, ZeroConstructor)
// TArray<bool>                   ShouldActivate                 (Parm, OutParm, ZeroConstructor)

void AStructure_TekAlarm_C::GetTargetTypesToChange(TArray<TEnumAsByte<ETekAlarmTargetTypes>>* ActiveTypes, TArray<bool>* ShouldActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetTargetTypesToChange");

	AStructure_TekAlarm_C_GetTargetTypesToChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveTypes != nullptr)
		*ActiveTypes = params.ActiveTypes;
	if (ShouldActivate != nullptr)
		*ShouldActivate = params.ShouldActivate;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.ToggleKeypadLink
// ()
// Parameters:
// class AShooterPlayerController* OptionalShooterPC              (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::ToggleKeypadLink(class AShooterPlayerController* OptionalShooterPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.ToggleKeypadLink");

	AStructure_TekAlarm_C_ToggleKeypadLink_Params params;
	params.OptionalShooterPC = OptionalShooterPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.AlignBoxedToWorldUp
// (NetRequest, Static, Public, Private, Protected, NetServer, NetClient, Const)

void AStructure_TekAlarm_C::STATIC_AlignBoxedToWorldUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.AlignBoxedToWorldUp");

	AStructure_TekAlarm_C_AlignBoxedToWorldUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentStructureDetectBoxExtent
// ()

void AStructure_TekAlarm_C::OnRep_CurrentStructureDetectBoxExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentStructureDetectBoxExtent");

	AStructure_TekAlarm_C_OnRep_CurrentStructureDetectBoxExtent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentTargetDetectBoxExtent
// ()

void AStructure_TekAlarm_C::OnRep_CurrentTargetDetectBoxExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_CurrentTargetDetectBoxExtent");

	AStructure_TekAlarm_C_OnRep_CurrentTargetDetectBoxExtent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.Is Target Detect Box
// ()
// Parameters:
// bool                           bIsBox                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::Is_Target_Detect_Box(bool* bIsBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Is Target Detect Box");

	AStructure_TekAlarm_C_Is_Target_Detect_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsBox != nullptr)
		*bIsBox = params.bIsBox;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.IsStructureDetectBox
// ()
// Parameters:
// bool                           bIsBox                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::IsStructureDetectBox(bool* bIsBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.IsStructureDetectBox");

	AStructure_TekAlarm_C_IsStructureDetectBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsBox != nullptr)
		*bIsBox = params.bIsBox;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.SetTargetDetectBoxExtent
// ()
// Parameters:
// struct FVector                 Extent                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::SetTargetDetectBoxExtent(const struct FVector& Extent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.SetTargetDetectBoxExtent");

	AStructure_TekAlarm_C_SetTargetDetectBoxExtent_Params params;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.Set Target Detect Sphere Radius
// ()
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::Set_Target_Detect_Sphere_Radius(float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Set Target Detect Sphere Radius");

	AStructure_TekAlarm_C_Set_Target_Detect_Sphere_Radius_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.SetStructureDetectBoxExtent
// ()
// Parameters:
// struct FVector                 Extent                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::SetStructureDetectBoxExtent(const struct FVector& Extent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.SetStructureDetectBoxExtent");

	AStructure_TekAlarm_C_SetStructureDetectBoxExtent_Params params;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.SetStructureDetectSphereRadius
// ()
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::SetStructureDetectSphereRadius(float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.SetStructureDetectSphereRadius");

	AStructure_TekAlarm_C_SetStructureDetectSphereRadius_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribeLoggingSetting
// ()
// Parameters:
// TEnumAsByte<ETekAlarmTargetTypes> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Integer                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::GetTribeLoggingSetting(TEnumAsByte<ETekAlarmTargetTypes> Type, int* Integer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribeLoggingSetting");

	AStructure_TekAlarm_C_GetTribeLoggingSetting_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Integer != nullptr)
		*Integer = params.Integer;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.MakeReplicatedTribeLoggingSettings
// ()
// Parameters:
// int                            TribeLoggingSettings           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::MakeReplicatedTribeLoggingSettings(int* TribeLoggingSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MakeReplicatedTribeLoggingSettings");

	AStructure_TekAlarm_C_MakeReplicatedTribeLoggingSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TribeLoggingSettings != nullptr)
		*TribeLoggingSettings = params.TribeLoggingSettings;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.GetMappedTribeLoggingInteger
// ()
// Parameters:
// int                            TribeLoggingState              (Parm, ZeroConstructor, IsPlainOldData)
// int                            TribeLoggingInteger            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::GetMappedTribeLoggingInteger(int TribeLoggingState, int* TribeLoggingInteger)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetMappedTribeLoggingInteger");

	AStructure_TekAlarm_C_GetMappedTribeLoggingInteger_Params params;
	params.TribeLoggingState = TribeLoggingState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TribeLoggingInteger != nullptr)
		*TribeLoggingInteger = params.TribeLoggingInteger;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.BPChangedActorTeam
// ()

void AStructure_TekAlarm_C::BPChangedActorTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.BPChangedActorTeam");

	AStructure_TekAlarm_C_BPChangedActorTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.ReceiveDestroyed
// ()

void AStructure_TekAlarm_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.ReceiveDestroyed");

	AStructure_TekAlarm_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.Has Any PINsSet
// (NetReliable, Native, NetResponse, Static, Public, Private, Protected, NetServer, NetClient, Const)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::STATIC_Has_Any_PINsSet(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Has Any PINsSet");

	AStructure_TekAlarm_C_Has_Any_PINsSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_ShowAreaVisuals
// ()

void AStructure_TekAlarm_C::OnRep_ShowAreaVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.OnRep_ShowAreaVisuals");

	AStructure_TekAlarm_C_OnRep_ShowAreaVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateAreaVisualsVisibility
// ()

void AStructure_TekAlarm_C::UpdateAreaVisualsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateAreaVisualsVisibility");

	AStructure_TekAlarm_C_UpdateAreaVisualsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.BPContainerDeactivated
// ()

void AStructure_TekAlarm_C::BPContainerDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.BPContainerDeactivated");

	AStructure_TekAlarm_C_BPContainerDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribeLoggingSettingForTargetType
// ()
// Parameters:
// TEnumAsByte<ETekAlarmTargetTypes> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::GetTribeLoggingSettingForTargetType(TEnumAsByte<ETekAlarmTargetTypes> Type, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribeLoggingSettingForTargetType");

	AStructure_TekAlarm_C_GetTribeLoggingSettingForTargetType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribeLogNameForType
// ()
// Parameters:
// TEnumAsByte<ETekAlarmTargetTypes> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (Parm, OutParm, ZeroConstructor)

void AStructure_TekAlarm_C::GetTribeLogNameForType(TEnumAsByte<ETekAlarmTargetTypes> Type, class FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribeLogNameForType");

	AStructure_TekAlarm_C_GetTribeLogNameForType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.TryTribeLogging
// (NetReliable, NetRequest, Exec, MulticastDelegate, Private, Protected, NetServer, NetClient, Const)
// Parameters:
// TEnumAsByte<ETekAlarmTargetTypes> Type                           (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::TryTribeLogging(TEnumAsByte<ETekAlarmTargetTypes> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.TryTribeLogging");

	AStructure_TekAlarm_C_TryTribeLogging_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.GetNextTribeLoggingSetting
// ()
// Parameters:
// int                            CurrentSetting                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewSetting                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::GetNextTribeLoggingSetting(int CurrentSetting, int* NewSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetNextTribeLoggingSetting");

	AStructure_TekAlarm_C_GetNextTribeLoggingSetting_Params params;
	params.CurrentSetting = CurrentSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewSetting != nullptr)
		*NewSetting = params.NewSetting;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribe Logging String
// (NetReliable, NetRequest, Exec, Event, MulticastDelegate, Private, Protected, NetServer, NetClient, Const)
// Parameters:
// class FString                  TypeName                       (Parm, ZeroConstructor)
// int                            CooldownInSeconds              (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Output                         (Parm, OutParm, ZeroConstructor)

void AStructure_TekAlarm_C::GetTribe_Logging_String(const class FString& TypeName, int CooldownInSeconds, class FString* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetTribe Logging String");

	AStructure_TekAlarm_C_GetTribe_Logging_String_Params params;
	params.TypeName = TypeName;
	params.CooldownInSeconds = CooldownInSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.HasPendingPINActivation
// (NetReliable, Exec, NetResponse, NetMulticast, Public, Private, Protected, NetServer, NetClient, Const)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::HasPendingPINActivation(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.HasPendingPINActivation");

	AStructure_TekAlarm_C_HasPendingPINActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.GetPINDataByType
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetServer, NetClient, Const)
// Parameters:
// TEnumAsByte<ETekAlarmTargetTypes> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FTekAlarmPINData        ret                            (Parm, OutParm)

void AStructure_TekAlarm_C::GetPINDataByType(TEnumAsByte<ETekAlarmTargetTypes> Type, struct FTekAlarmPINData* ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetPINDataByType");

	AStructure_TekAlarm_C_GetPINDataByType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.SetPINCodeInPINData
// (Exec, Event, NetResponse, NetMulticast, Public, Private, Protected, NetServer, NetClient, Const)
// Parameters:
// int                            pinCode                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETekAlarmTargetTypes> Type                           (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::SetPINCodeInPINData(int pinCode, TEnumAsByte<ETekAlarmTargetTypes> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.SetPINCodeInPINData");

	AStructure_TekAlarm_C_SetPINCodeInPINData_Params params;
	params.pinCode = pinCode;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.GetMultiUseTitleWithDelay
// (NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Private, Protected, NetServer, NetClient, Const)
// Parameters:
// float                          DelaySeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// class FString                  Output                         (Parm, OutParm, ZeroConstructor)

void AStructure_TekAlarm_C::GetMultiUseTitleWithDelay(float DelaySeconds, const struct FText& Title, class FString* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetMultiUseTitleWithDelay");

	AStructure_TekAlarm_C_GetMultiUseTitleWithDelay_Params params;
	params.DelaySeconds = DelaySeconds;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.GetPINDataByPIN
// (NetRequest, Exec, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, Const)
// Parameters:
// int                            PIN                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FTekAlarmPINData        Res                            (Parm, OutParm)
// int                            retIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::STATIC_GetPINDataByPIN(int PIN, struct FTekAlarmPINData* Res, int* retIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetPINDataByPIN");

	AStructure_TekAlarm_C_GetPINDataByPIN_Params params;
	params.PIN = PIN;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Res != nullptr)
		*Res = params.Res;
	if (retIndex != nullptr)
		*retIndex = params.retIndex;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateDelay
// ()
// Parameters:
// float                          CurrentDelay                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewDelay                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::CalcuateDelay(float CurrentDelay, float* NewDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateDelay");

	AStructure_TekAlarm_C_CalcuateDelay_Params params;
	params.CurrentDelay = CurrentDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewDelay != nullptr)
		*NewDelay = params.NewDelay;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.PinCodeFlagsToString
// (Net, NetReliable, Event, Static, MulticastDelegate, Private, Protected, NetServer, NetClient, Const)
// Parameters:
// int                            PinCodesFlag                   (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Output                         (Parm, OutParm, ZeroConstructor)

void AStructure_TekAlarm_C::STATIC_PinCodeFlagsToString(int PinCodesFlag, class FString* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.PinCodeFlagsToString");

	AStructure_TekAlarm_C_PinCodeFlagsToString_Params params;
	params.PinCodesFlag = PinCodesFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.Was Pin Code Bit Triggered
// ()
// Parameters:
// int                            Bit                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Activated                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Deactivated                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::Was_Pin_Code_Bit_Triggered(int Bit, bool* ret, bool* Activated, bool* Deactivated)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Was Pin Code Bit Triggered");

	AStructure_TekAlarm_C_Was_Pin_Code_Bit_Triggered_Params params;
	params.Bit = Bit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
	if (Activated != nullptr)
		*Activated = params.Activated;
	if (Deactivated != nullptr)
		*Deactivated = params.Deactivated;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.IsRelevantPinCode
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, Const)
// Parameters:
// int                            pinCode                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsDeactivation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::STATIC_IsRelevantPinCode(int pinCode, bool* ret, bool* IsDeactivation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.IsRelevantPinCode");

	AStructure_TekAlarm_C_IsRelevantPinCode_Params params;
	params.pinCode = pinCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;
	if (IsDeactivation != nullptr)
		*IsDeactivation = params.IsDeactivation;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.IsAreaVisualsLocallyVisible
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::IsAreaVisualsLocallyVisible(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.IsAreaVisualsLocallyVisible");

	AStructure_TekAlarm_C_IsAreaVisualsLocallyVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateMeshAlpha Fn
// ()
// Parameters:
// class UStaticMeshComponent*    Mesh1                          (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent*    Mesh2                          (Parm, ZeroConstructor, IsPlainOldData)
// double                         TimeSince                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::CalcuateMeshAlpha_Fn(class UStaticMeshComponent* Mesh1, class UStaticMeshComponent* Mesh2, double TimeSince, float* Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateMeshAlpha Fn");

	AStructure_TekAlarm_C_CalcuateMeshAlpha_Fn_Params params;
	params.Mesh1 = Mesh1;
	params.Mesh2 = Mesh2;
	params.TimeSince = TimeSince;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alpha != nullptr)
		*Alpha = params.Alpha;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.BPContainerActivated
// ()

void AStructure_TekAlarm_C::BPContainerActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.BPContainerActivated");

	AStructure_TekAlarm_C_BPContainerActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.SetActivateStateToStructure
// ()
// Parameters:
// class APrimalStructure*        PrimalStructure                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           toggle                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewActivateState               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::SetActivateStateToStructure(class APrimalStructure* PrimalStructure, bool toggle, bool NewActivateState, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.SetActivateStateToStructure");

	AStructure_TekAlarm_C_SetActivateStateToStructure_Params params;
	params.PrimalStructure = PrimalStructure;
	params.toggle = toggle;
	params.NewActivateState = NewActivateState;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.Get Octree Data For Structure Detect Area
// ()
// Parameters:
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::Get_Octree_Data_For_Structure_Detect_Area(float* Radius, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Get Octree Data For Structure Detect Area");

	AStructure_TekAlarm_C_Get_Octree_Data_For_Structure_Detect_Area_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;
	if (Location != nullptr)
		*Location = params.Location;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.Update Structures in Area to Goal State
// (NetReliable, Exec, Native, NetMulticast, Public, Private, Protected, NetServer, NetClient, Const)

void AStructure_TekAlarm_C::Update_Structures_in_Area_to_Goal_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Update Structures in Area to Goal State");

	AStructure_TekAlarm_C_Update_Structures_in_Area_to_Goal_State_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.Update Structure Detect Sphere
// ()

void AStructure_TekAlarm_C::Update_Structure_Detect_Sphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Update Structure Detect Sphere");

	AStructure_TekAlarm_C_Update_Structure_Detect_Sphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateStructureDetectBox
// ()

void AStructure_TekAlarm_C::UpdateStructureDetectBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateStructureDetectBox");

	AStructure_TekAlarm_C_UpdateStructureDetectBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.SwitchStructureDetectStyle
// ()

void AStructure_TekAlarm_C::SwitchStructureDetectStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.SwitchStructureDetectStyle");

	AStructure_TekAlarm_C_SwitchStructureDetectStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.IsActorInBoxArea
// (NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, Const)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UBoxComponent*           BoxComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::STATIC_IsActorInBoxArea(class AActor* Actor, class UBoxComponent* BoxComponent, bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.IsActorInBoxArea");

	AStructure_TekAlarm_C_IsActorInBoxArea_Params params;
	params.Actor = Actor;
	params.BoxComponent = BoxComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.GetOctreeCheckType
// ()
// Parameters:
// TEnumAsByte<EServerOctreeGroup> Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::GetOctreeCheckType(TEnumAsByte<EServerOctreeGroup>* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.GetOctreeCheckType");

	AStructure_TekAlarm_C_GetOctreeCheckType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.Get Octree Data ForTarget Detect Area
// ()
// Parameters:
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::Get_Octree_Data_ForTarget_Detect_Area(float* Radius, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Get Octree Data ForTarget Detect Area");

	AStructure_TekAlarm_C_Get_Octree_Data_ForTarget_Detect_Area_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;
	if (Location != nullptr)
		*Location = params.Location;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.HasFiltered Target in the Area
// (NetReliable, Public, Protected, NetServer, NetClient, Const)
// Parameters:
// bool                           TargetLost                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::HasFiltered_Target_in_the_Area(bool* TargetLost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.HasFiltered Target in the Area");

	AStructure_TekAlarm_C_HasFiltered_Target_in_the_Area_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLost != nullptr)
		*TargetLost = params.TargetLost;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.BPClientHandleNetExecCommand
// ()
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructure_TekAlarm_C::BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.BPClientHandleNetExecCommand");

	AStructure_TekAlarm_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.BPApplyPinCode
// (NetReliable, Native, Event, NetResponse, Public, Protected, NetServer, NetClient, Const)
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           appledPinCode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsSetting                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TheCustomIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructure_TekAlarm_C::BPApplyPinCode(class AShooterPlayerController** ForPC, int* appledPinCode, bool* bIsSetting, int* TheCustomIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.BPApplyPinCode");

	AStructure_TekAlarm_C_BPApplyPinCode_Params params;
	params.ForPC = ForPC;
	params.appledPinCode = appledPinCode;
	params.bIsSetting = bIsSetting;
	params.TheCustomIndex = TheCustomIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.Get Detect Area Adjust Speed
// ()
// Parameters:
// float                          AdjustSpeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::Get_Detect_Area_Adjust_Speed(float* AdjustSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Get Detect Area Adjust Speed");

	AStructure_TekAlarm_C_Get_Detect_Area_Adjust_Speed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdjustSpeed != nullptr)
		*AdjustSpeed = params.AdjustSpeed;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.ReceiveBeginPlay
// ()

void AStructure_TekAlarm_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.ReceiveBeginPlay");

	AStructure_TekAlarm_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.BPClientDoMultiUse");

	AStructure_TekAlarm_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateTargetDetectSphere
// ()

void AStructure_TekAlarm_C::UpdateTargetDetectSphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateTargetDetectSphere");

	AStructure_TekAlarm_C_UpdateTargetDetectSphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateTargetDetectBox
// ()

void AStructure_TekAlarm_C::UpdateTargetDetectBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateTargetDetectBox");

	AStructure_TekAlarm_C_UpdateTargetDetectBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.BPPlacedStructure
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::BPPlacedStructure(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.BPPlacedStructure");

	AStructure_TekAlarm_C_BPPlacedStructure_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.Switch Target Detect Style
// ()

void AStructure_TekAlarm_C::Switch_Target_Detect_Style()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.Switch Target Detect Style");

	AStructure_TekAlarm_C_Switch_Target_Detect_Style_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.BPTryMultiUse
// (NetRequest, Exec, Native, NetMulticast, Public, Protected, NetServer, NetClient, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructure_TekAlarm_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.BPTryMultiUse");

	AStructure_TekAlarm_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.BPGetMultiUseEntries
// (NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Protected, NetServer, NetClient, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStructure_TekAlarm_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.BPGetMultiUseEntries");

	AStructure_TekAlarm_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.UserConstructionScript
// ()

void AStructure_TekAlarm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.UserConstructionScript");

	AStructure_TekAlarm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastTargetDetectStyleChange
// ()

void AStructure_TekAlarm_C::MulticastTargetDetectStyleChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastTargetDetectStyleChange");

	AStructure_TekAlarm_C_MulticastTargetDetectStyleChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectBoxDepthX
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::AdjustTargetDetectBoxDepthX(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectBoxDepthX");

	AStructure_TekAlarm_C_AdjustTargetDetectBoxDepthX_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectBoxWidthY
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::AdjustTargetDetectBoxWidthY(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectBoxWidthY");

	AStructure_TekAlarm_C_AdjustTargetDetectBoxWidthY_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastTargetDetectBoxExtent
// ()
// Parameters:
// struct FVector                 Extent                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::MulticastTargetDetectBoxExtent(const struct FVector& Extent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastTargetDetectBoxExtent");

	AStructure_TekAlarm_C_MulticastTargetDetectBoxExtent_Params params;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectBoxHeightZ
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::AdjustTargetDetectBoxHeightZ(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectBoxHeightZ");

	AStructure_TekAlarm_C_AdjustTargetDetectBoxHeightZ_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.SignalServerToggleActivateState
// ()

void AStructure_TekAlarm_C::SignalServerToggleActivateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.SignalServerToggleActivateState");

	AStructure_TekAlarm_C_SignalServerToggleActivateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectSphereRadius
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::AdjustTargetDetectSphereRadius(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustTargetDetectSphereRadius");

	AStructure_TekAlarm_C_AdjustTargetDetectSphereRadius_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastTargetDetectSphereRadius
// ()
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::MulticastTargetDetectSphereRadius(float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastTargetDetectSphereRadius");

	AStructure_TekAlarm_C_MulticastTargetDetectSphereRadius_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.ScanTargetDetectArea
// ()

void AStructure_TekAlarm_C::ScanTargetDetectArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.ScanTargetDetectArea");

	AStructure_TekAlarm_C_ScanTargetDetectArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.DrawDebugSphere
// ()
// Parameters:
// struct FVector                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewParam1                      (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::DrawDebugSphere(const struct FVector& NewParam, float NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.DrawDebugSphere");

	AStructure_TekAlarm_C_DrawDebugSphere_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastStructureDetectStyleChange
// ()

void AStructure_TekAlarm_C::MulticastStructureDetectStyleChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastStructureDetectStyleChange");

	AStructure_TekAlarm_C_MulticastStructureDetectStyleChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastStructureDetectBoxExtent
// ()
// Parameters:
// struct FVector                 Extent                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::MulticastStructureDetectBoxExtent(const struct FVector& Extent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastStructureDetectBoxExtent");

	AStructure_TekAlarm_C_MulticastStructureDetectBoxExtent_Params params;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastStructureDetectSphereRadius
// ()
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::MulticastStructureDetectSphereRadius(float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastStructureDetectSphereRadius");

	AStructure_TekAlarm_C_MulticastStructureDetectSphereRadius_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectBoxDepthX
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::AdjustStructureDetectBoxDepthX(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectBoxDepthX");

	AStructure_TekAlarm_C_AdjustStructureDetectBoxDepthX_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectBoxWidthY
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::AdjustStructureDetectBoxWidthY(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectBoxWidthY");

	AStructure_TekAlarm_C_AdjustStructureDetectBoxWidthY_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectBoxHeightZ
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::AdjustStructureDetectBoxHeightZ(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectBoxHeightZ");

	AStructure_TekAlarm_C_AdjustStructureDetectBoxHeightZ_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectSphereRadius
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::AdjustStructureDetectSphereRadius(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.AdjustStructureDetectSphereRadius");

	AStructure_TekAlarm_C_AdjustStructureDetectSphereRadius_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateTargetDetectAlpha
// ()

void AStructure_TekAlarm_C::CalcuateTargetDetectAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateTargetDetectAlpha");

	AStructure_TekAlarm_C_CalcuateTargetDetectAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateStructureDetectAlpha
// ()

void AStructure_TekAlarm_C::CalcuateStructureDetectAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.CalcuateStructureDetectAlpha");

	AStructure_TekAlarm_C_CalcuateStructureDetectAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateAreaVisualsVisibilityEvent
// ()

void AStructure_TekAlarm_C::UpdateAreaVisualsVisibilityEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.UpdateAreaVisualsVisibilityEvent");

	AStructure_TekAlarm_C_UpdateAreaVisualsVisibilityEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastShowPreview
// ()

void AStructure_TekAlarm_C::MulticastShowPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastShowPreview");

	AStructure_TekAlarm_C_MulticastShowPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastPlayActivationSound
// ()

void AStructure_TekAlarm_C::MulticastPlayActivationSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastPlayActivationSound");

	AStructure_TekAlarm_C_MulticastPlayActivationSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastPlayDeactivationSound
// ()

void AStructure_TekAlarm_C::MulticastPlayDeactivationSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.MulticastPlayDeactivationSound");

	AStructure_TekAlarm_C_MulticastPlayDeactivationSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TekAlarm.Structure_TekAlarm_C.ExecuteUbergraph_Structure_TekAlarm
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TekAlarm_C::ExecuteUbergraph_Structure_TekAlarm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TekAlarm.Structure_TekAlarm_C.ExecuteUbergraph_Structure_TekAlarm");

	AStructure_TekAlarm_C_ExecuteUbergraph_Structure_TekAlarm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
