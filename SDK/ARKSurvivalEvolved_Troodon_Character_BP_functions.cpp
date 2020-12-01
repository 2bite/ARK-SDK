// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Troodon_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Troodon_Character_BP.Troodon_Character_BP_C.OverrideFinalWanderLocation
// ()
// Parameters:
// struct FVector                 outVec                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATroodon_Character_BP_C::OverrideFinalWanderLocation(struct FVector* outVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.OverrideFinalWanderLocation");

	ATroodon_Character_BP_C_OverrideFinalWanderLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outVec != nullptr)
		*outVec = params.outVec;

	return params.ReturnValue;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.IsLocationInLight
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInLight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocationOfLightSource          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATroodon_Character_BP_C::IsLocationInLight(const struct FVector& Location, bool* IsInLight, float* Distance, struct FVector* LocationOfLightSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.IsLocationInLight");

	ATroodon_Character_BP_C_IsLocationInLight_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInLight != nullptr)
		*IsInLight = params.IsInLight;
	if (Distance != nullptr)
		*Distance = params.Distance;
	if (LocationOfLightSource != nullptr)
		*LocationOfLightSource = params.LocationOfLightSource;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.OverrideRandomWanderLocation
// ()
// Parameters:
// struct FVector                 originalDestination            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 inVec                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATroodon_Character_BP_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.OverrideRandomWanderLocation");

	ATroodon_Character_BP_C_OverrideRandomWanderLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (originalDestination != nullptr)
		*originalDestination = params.originalDestination;
	if (inVec != nullptr)
		*inVec = params.inVec;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATroodon_Character_BP_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.BPShouldForceFlee");

	ATroodon_Character_BP_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.BPGetAddForwardVelocityOnJump
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATroodon_Character_BP_C::BPGetAddForwardVelocityOnJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.BPGetAddForwardVelocityOnJump");

	ATroodon_Character_BP_C_BPGetAddForwardVelocityOnJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.LevelUpSonar
// ()
// Parameters:
// int                            Selector                       (Parm, ZeroConstructor, IsPlainOldData)

void ATroodon_Character_BP_C::LevelUpSonar(int Selector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.LevelUpSonar");

	ATroodon_Character_BP_C_LevelUpSonar_Params params;
	params.Selector = Selector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ATroodon_Character_BP_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.BPClientDoMultiUse");

	ATroodon_Character_BP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.DoSonar
// ()
// Parameters:
// int                            SonarType                      (Parm, ZeroConstructor, IsPlainOldData)

void ATroodon_Character_BP_C::DoSonar(int SonarType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.DoSonar");

	ATroodon_Character_BP_C_DoSonar_Params params;
	params.SonarType = SonarType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATroodon_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.BPTryMultiUse");

	ATroodon_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.BPGetMultiUseEntries
// (Native, Event, NetResponse, Static, NetMulticast, Protected, NetServer, HasOutParms, DLLImport)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ATroodon_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.BPGetMultiUseEntries");

	ATroodon_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.DrawSonarPoints
// ()
// Parameters:
// int                            SonarType                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         SonarPoints                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AShooterHUD*             TheHUD                         (Parm, ZeroConstructor, IsPlainOldData)

void ATroodon_Character_BP_C::DrawSonarPoints(int SonarType, class AShooterHUD* TheHUD, TArray<struct FVector>* SonarPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.DrawSonarPoints");

	ATroodon_Character_BP_C_DrawSonarPoints_Params params;
	params.SonarType = SonarType;
	params.TheHUD = TheHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SonarPoints != nullptr)
		*SonarPoints = params.SonarPoints;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ATroodon_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.BlueprintDrawFloatingHUD");

	ATroodon_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void ATroodon_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.BPOnMovementModeChangedNotify");

	ATroodon_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.BlueprintAdjustOutputDamage
// (Event, NetResponse, Protected, NetServer, HasOutParms, DLLImport)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATroodon_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.BlueprintAdjustOutputDamage");

	ATroodon_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
	params.AttackIndex = AttackIndex;
	params.OriginalDamageAmount = OriginalDamageAmount;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = params.OutDamageImpulse;

	return params.ReturnValue;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.OnJumped
// (NetReliable, Exec, Native, Event, NetResponse, Protected, NetServer, HasOutParms, DLLImport)

void ATroodon_Character_BP_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.OnJumped");

	ATroodon_Character_BP_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.OnRep_EyesActivated
// ()

void ATroodon_Character_BP_C::OnRep_EyesActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.OnRep_EyesActivated");

	ATroodon_Character_BP_C_OnRep_EyesActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.BPTimerServer
// ()

void ATroodon_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.BPTimerServer");

	ATroodon_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.BPKilledSomethingEvent
// ()
// Parameters:
// class APrimalCharacter**       killedTarget                   (Parm, ZeroConstructor, IsPlainOldData)

void ATroodon_Character_BP_C::BPKilledSomethingEvent(class APrimalCharacter** killedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.BPKilledSomethingEvent");

	ATroodon_Character_BP_C_BPKilledSomethingEvent_Params params;
	params.killedTarget = killedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.UserConstructionScript
// ()

void ATroodon_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.UserConstructionScript");

	ATroodon_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.ReceiveBeginPlay
// ()

void ATroodon_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.ReceiveBeginPlay");

	ATroodon_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.NetDisplaySonar
// ()
// Parameters:
// int                            SonarType                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         SonarPoints                    (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ATroodon_Character_BP_C::NetDisplaySonar(int SonarType, TArray<struct FVector>* SonarPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.NetDisplaySonar");

	ATroodon_Character_BP_C_NetDisplaySonar_Params params;
	params.SonarType = SonarType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SonarPoints != nullptr)
		*SonarPoints = params.SonarPoints;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.Net Update Last Time Sonar Used
// ()

void ATroodon_Character_BP_C::Net_Update_Last_Time_Sonar_Used()
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.Net Update Last Time Sonar Used");

	ATroodon_Character_BP_C_Net_Update_Last_Time_Sonar_Used_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.AnimNotify_DoSonar
// ()

void ATroodon_Character_BP_C::AnimNotify_DoSonar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.AnimNotify_DoSonar");

	ATroodon_Character_BP_C_AnimNotify_DoSonar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Troodon_Character_BP.Troodon_Character_BP_C.ExecuteUbergraph_Troodon_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATroodon_Character_BP_C::ExecuteUbergraph_Troodon_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Character_BP.Troodon_Character_BP_C.ExecuteUbergraph_Troodon_Character_BP");

	ATroodon_Character_BP_C_ExecuteUbergraph_Troodon_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
