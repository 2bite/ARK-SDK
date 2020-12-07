// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_Balloon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StorageBox_Balloon.StorageBox_Balloon_C.BlueprintDrawHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_Balloon_C::BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.BlueprintDrawHUD");

	AStorageBox_Balloon_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.BPPostInitializeComponents
// ()

void AStorageBox_Balloon_C::BPPostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.BPPostInitializeComponents");

	AStorageBox_Balloon_C_BPPostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.BPPostLoadedFromSaveGame
// ()

void AStorageBox_Balloon_C::BPPostLoadedFromSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.BPPostLoadedFromSaveGame");

	AStorageBox_Balloon_C_BPPostLoadedFromSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.GetBasedWeight
// ()
// Parameters:
// float                          Weight                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStorageBox_Balloon_C::GetBasedWeight(float* Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.GetBasedWeight");

	AStorageBox_Balloon_C_GetBasedWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weight != nullptr)
		*Weight = params.Weight;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.HasClearance
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintPure)
// Parameters:
// bool                           Clearance                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStorageBox_Balloon_C::STATIC_HasClearance(bool* Clearance)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.HasClearance");

	AStorageBox_Balloon_C_HasClearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Clearance != nullptr)
		*Clearance = params.Clearance;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.Set Optimal Cruising Altitude
// (Exec, Native, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintPure)

void AStorageBox_Balloon_C::Set_Optimal_Cruising_Altitude()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.Set Optimal Cruising Altitude");

	AStorageBox_Balloon_C_Set_Optimal_Cruising_Altitude_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.ChangeBalloonSize
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_Balloon_C::ChangeBalloonSize(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.ChangeBalloonSize");

	AStorageBox_Balloon_C_ChangeBalloonSize_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.BPOverrideCantBuildReasonString
// ()
// Parameters:
// int*                           CantBuildReason                (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AStorageBox_Balloon_C::BPOverrideCantBuildReasonString(int* CantBuildReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.BPOverrideCantBuildReasonString");

	AStorageBox_Balloon_C_BPOverrideCantBuildReasonString_Params params;
	params.CantBuildReason = CantBuildReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.BPIsAllowedToBuildEx
// ()
// Parameters:
// struct FPlacementData          OutPlacementData               (Parm, OutParm, ReferenceParm)
// int*                           CurrentAllowedReason           (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFinalPlacement                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bChoosingRotation              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AStorageBox_Balloon_C::BPIsAllowedToBuildEx(int* CurrentAllowedReason, class APlayerController** PC, bool* bFinalPlacement, bool* bChoosingRotation, struct FPlacementData* OutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.BPIsAllowedToBuildEx");

	AStorageBox_Balloon_C_BPIsAllowedToBuildEx_Params params;
	params.CurrentAllowedReason = CurrentAllowedReason;
	params.PC = PC;
	params.bFinalPlacement = bFinalPlacement;
	params.bChoosingRotation = bChoosingRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlacementData != nullptr)
		*OutPlacementData = params.OutPlacementData;

	return params.ReturnValue;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.BPPreventPlacingOnFloorStructure
// ()
// Parameters:
// struct FPlacementData          theOutPlacementData            (Parm, OutParm, ReferenceParm)
// class APrimalStructure**       FloorStructure                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_Balloon_C::BPPreventPlacingOnFloorStructure(class APrimalStructure** FloorStructure, struct FPlacementData* theOutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.BPPreventPlacingOnFloorStructure");

	AStorageBox_Balloon_C_BPPreventPlacingOnFloorStructure_Params params;
	params.FloorStructure = FloorStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (theOutPlacementData != nullptr)
		*theOutPlacementData = params.theOutPlacementData;

	return params.ReturnValue;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.CheckOptimalZDistance
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintPure)

void AStorageBox_Balloon_C::CheckOptimalZDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.CheckOptimalZDistance");

	AStorageBox_Balloon_C_CheckOptimalZDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.GetInventoryWeight
// ()
// Parameters:
// float                          InvWeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStorageBox_Balloon_C::GetInventoryWeight(float* InvWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.GetInventoryWeight");

	AStorageBox_Balloon_C_GetInventoryWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InvWeight != nullptr)
		*InvWeight = params.InvWeight;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.SetBalloonSpeed
// ()

void AStorageBox_Balloon_C::SetBalloonSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.SetBalloonSpeed");

	AStorageBox_Balloon_C_SetBalloonSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.CalcLandingVector
// (Native, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintPure)
// Parameters:
// int                            coord1                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            coord2                         (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_Balloon_C::STATIC_CalcLandingVector(int coord1, int coord2)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.CalcLandingVector");

	AStorageBox_Balloon_C_CalcLandingVector_Params params;
	params.coord1 = coord1;
	params.coord2 = coord2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.OnRep_LocationString
// ()

void AStorageBox_Balloon_C::OnRep_LocationString()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.OnRep_LocationString");

	AStorageBox_Balloon_C_OnRep_LocationString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.BPClientDoMultiUse
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_Balloon_C::STATIC_BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.BPClientDoMultiUse");

	AStorageBox_Balloon_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AStorageBox_Balloon_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.BPAdjustDamage");

	AStorageBox_Balloon_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.ReceivePointDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotFromDirection              (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_Balloon_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.ReceivePointDamage");

	AStorageBox_Balloon_C_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_Balloon_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.BPTryMultiUse");

	AStorageBox_Balloon_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStorageBox_Balloon_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.BPGetMultiUseEntries");

	AStorageBox_Balloon_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.UserConstructionScript
// ()

void AStorageBox_Balloon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.UserConstructionScript");

	AStorageBox_Balloon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.DeployItemBalloon
// ()

void AStorageBox_Balloon_C::DeployItemBalloon()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.DeployItemBalloon");

	AStorageBox_Balloon_C_DeployItemBalloon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.BalloonLiftoff
// ()

void AStorageBox_Balloon_C::BalloonLiftoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.BalloonLiftoff");

	AStorageBox_Balloon_C_BalloonLiftoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.DetachBalloon
// ()

void AStorageBox_Balloon_C::DetachBalloon()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.DetachBalloon");

	AStorageBox_Balloon_C_DetachBalloon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.SetFlightTravel
// ()

void AStorageBox_Balloon_C::SetFlightTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.SetFlightTravel");

	AStorageBox_Balloon_C_SetFlightTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.GetNextTravelPoint
// ()

void AStorageBox_Balloon_C::GetNextTravelPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.GetNextTravelPoint");

	AStorageBox_Balloon_C_GetNextTravelPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.On_SetLocation
// ()
// Parameters:
// bool                           bIsSet                         (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_Balloon_C::On_SetLocation(bool bIsSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.On_SetLocation");

	AStorageBox_Balloon_C_On_SetLocation_Params params;
	params.bIsSet = bIsSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.DeployItemBalloon_Debug
// ()

void AStorageBox_Balloon_C::DeployItemBalloon_Debug()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.DeployItemBalloon_Debug");

	AStorageBox_Balloon_C_DeployItemBalloon_Debug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.ROC_OnLand
// ()

void AStorageBox_Balloon_C::ROC_OnLand()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.ROC_OnLand");

	AStorageBox_Balloon_C_ROC_OnLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.ClearFlight
// ()

void AStorageBox_Balloon_C::ClearFlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.ClearFlight");

	AStorageBox_Balloon_C_ClearFlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.RandomizeSway
// ()

void AStorageBox_Balloon_C::RandomizeSway()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.RandomizeSway");

	AStorageBox_Balloon_C_RandomizeSway_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.DrawOnClient
// ()
// Parameters:
// struct FVector                 VectorToDraw                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsServer                      (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_Balloon_C::DrawOnClient(const struct FVector& VectorToDraw, bool bIsServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.DrawOnClient");

	AStorageBox_Balloon_C_DrawOnClient_Params params;
	params.VectorToDraw = VectorToDraw;
	params.bIsServer = bIsServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.DraweShit
// ()
// Parameters:
// struct FVector                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_Balloon_C::DraweShit(const struct FVector& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.DraweShit");

	AStorageBox_Balloon_C_DraweShit_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_Balloon_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.ReceiveTick");

	AStorageBox_Balloon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.ReceiveBeginPlay
// ()

void AStorageBox_Balloon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.ReceiveBeginPlay");

	AStorageBox_Balloon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.StopDeflation
// ()

void AStorageBox_Balloon_C::StopDeflation()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.StopDeflation");

	AStorageBox_Balloon_C_StopDeflation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.BndEvt__BalloonCollision_K2Node_ComponentBoundEvent_328_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AStorageBox_Balloon_C::BndEvt__BalloonCollision_K2Node_ComponentBoundEvent_328_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.BndEvt__BalloonCollision_K2Node_ComponentBoundEvent_328_ComponentBeginOverlapSignature__DelegateSignature");

	AStorageBox_Balloon_C_BndEvt__BalloonCollision_K2Node_ComponentBoundEvent_328_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function StorageBox_Balloon.StorageBox_Balloon_C.BndEvt__BalloonCollision_K2Node_ComponentBoundEvent_334_ComponentHitSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void AStorageBox_Balloon_C::BndEvt__BalloonCollision_K2Node_ComponentBoundEvent_334_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.BndEvt__BalloonCollision_K2Node_ComponentBoundEvent_334_ComponentHitSignature__DelegateSignature");

	AStorageBox_Balloon_C_BndEvt__BalloonCollision_K2Node_ComponentBoundEvent_334_ComponentHitSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function StorageBox_Balloon.StorageBox_Balloon_C.ExecuteUbergraph_StorageBox_Balloon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_Balloon_C::ExecuteUbergraph_StorageBox_Balloon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Balloon.StorageBox_Balloon_C.ExecuteUbergraph_StorageBox_Balloon");

	AStorageBox_Balloon_C_ExecuteUbergraph_StorageBox_Balloon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
