// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Zipline_Anchor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Zipline_Anchor.Zipline_Anchor_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AZipline_Anchor_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.BPAdjustDamage");

	AZipline_Anchor_C_BPAdjustDamage_Params params;
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


// Function Zipline_Anchor.Zipline_Anchor_C.Get Closest Point on Line Non Pure
// ()
// Parameters:
// struct FVector                 LineStart                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LineEnd                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 closestPoint                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AZipline_Anchor_C::Get_Closest_Point_on_Line_Non_Pure(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point, struct FVector* closestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.Get Closest Point on Line Non Pure");

	AZipline_Anchor_C_Get_Closest_Point_on_Line_Non_Pure_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (closestPoint != nullptr)
		*closestPoint = params.closestPoint;
}


// Function Zipline_Anchor.Zipline_Anchor_C.Get Zipline Info NonPure
// ()
// Parameters:
// struct FVector                 DownDirection                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AZipline_Anchor_C*       UpperAnchor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AZipline_Anchor_C*       LowerAnchor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 UpperCableAttachLoc            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LowerCableAttachLoc            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AZipline_Anchor_C::Get_Zipline_Info_NonPure(struct FVector* DownDirection, class AZipline_Anchor_C** UpperAnchor, class AZipline_Anchor_C** LowerAnchor, struct FVector* UpperCableAttachLoc, struct FVector* LowerCableAttachLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.Get Zipline Info NonPure");

	AZipline_Anchor_C_Get_Zipline_Info_NonPure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DownDirection != nullptr)
		*DownDirection = params.DownDirection;
	if (UpperAnchor != nullptr)
		*UpperAnchor = params.UpperAnchor;
	if (LowerAnchor != nullptr)
		*LowerAnchor = params.LowerAnchor;
	if (UpperCableAttachLoc != nullptr)
		*UpperCableAttachLoc = params.UpperCableAttachLoc;
	if (LowerCableAttachLoc != nullptr)
		*LowerCableAttachLoc = params.LowerCableAttachLoc;
}


// Function Zipline_Anchor.Zipline_Anchor_C.Get Zipline Buff
// ()
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Buff                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AZipline_Anchor_C::Get_Zipline_Buff(class AController* Controller, class UClass** Buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.Get Zipline Buff");

	AZipline_Anchor_C_Get_Zipline_Buff_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Buff != nullptr)
		*Buff = params.Buff;
}


// Function Zipline_Anchor.Zipline_Anchor_C.InitLinkedAnchorClient
// ()

void AZipline_Anchor_C::InitLinkedAnchorClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.InitLinkedAnchorClient");

	AZipline_Anchor_C_InitLinkedAnchorClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zipline_Anchor.Zipline_Anchor_C.InitLinkedAnchor
// ()

void AZipline_Anchor_C::InitLinkedAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.InitLinkedAnchor");

	AZipline_Anchor_C_InitLinkedAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zipline_Anchor.Zipline_Anchor_C.CreateCable
// ()

void AZipline_Anchor_C::CreateCable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.CreateCable");

	AZipline_Anchor_C_CreateCable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zipline_Anchor.Zipline_Anchor_C.AllowManualMultiUseActivation
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Private, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AZipline_Anchor_C::AllowManualMultiUseActivation(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.AllowManualMultiUseActivation");

	AZipline_Anchor_C_AllowManualMultiUseActivation_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Zipline_Anchor.Zipline_Anchor_C.IsUpperAnchorPoint
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AZipline_Anchor_C::IsUpperAnchorPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.IsUpperAnchorPoint");

	AZipline_Anchor_C_IsUpperAnchorPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Zipline_Anchor.Zipline_Anchor_C.HasLineOfSight
// (Event, Static, NetMulticast, Private, HasDefaults, DLLImport, BlueprintCallable, Const)
// Parameters:
// class APrimalCharacter*        PrimalCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasLineOfSight                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AZipline_Anchor_C::STATIC_HasLineOfSight(class APrimalCharacter* PrimalCharacter, const struct FVector& StartPoint, bool* HasLineOfSight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.HasLineOfSight");

	AZipline_Anchor_C_HasLineOfSight_Params params;
	params.PrimalCharacter = PrimalCharacter;
	params.StartPoint = StartPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasLineOfSight != nullptr)
		*HasLineOfSight = params.HasLineOfSight;
}


// Function Zipline_Anchor.Zipline_Anchor_C.CheckForHarness
// ()
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           _return                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AZipline_Anchor_C::CheckForHarness(class APlayerController* Controller, bool* _return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.CheckForHarness");

	AZipline_Anchor_C_CheckForHarness_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_return != nullptr)
		*_return = params._return;
}


// Function Zipline_Anchor.Zipline_Anchor_C.SpawnBreakEmitter
// (Native, NetResponse, Static, NetMulticast, Private, HasDefaults, DLLImport, BlueprintCallable, Const)

void AZipline_Anchor_C::STATIC_SpawnBreakEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.SpawnBreakEmitter");

	AZipline_Anchor_C_SpawnBreakEmitter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zipline_Anchor.Zipline_Anchor_C.GetBuffInfo
// ()
// Parameters:
// class UClass*                  ZiplineBuff                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          AttachOffset                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FWeaponAnim             AttachAnims                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         HandleMeshComp                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Motorized                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          StartEndOffset                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HideWeaponEnabled              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxActivationDistance          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AZipline_Anchor_C::GetBuffInfo(class UClass* ZiplineBuff, float* AttachOffset, struct FWeaponAnim* AttachAnims, class USceneComponent** HandleMeshComp, bool* Motorized, float* StartEndOffset, bool* HideWeaponEnabled, float* MaxActivationDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.GetBuffInfo");

	AZipline_Anchor_C_GetBuffInfo_Params params;
	params.ZiplineBuff = ZiplineBuff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttachOffset != nullptr)
		*AttachOffset = params.AttachOffset;
	if (AttachAnims != nullptr)
		*AttachAnims = params.AttachAnims;
	if (HandleMeshComp != nullptr)
		*HandleMeshComp = params.HandleMeshComp;
	if (Motorized != nullptr)
		*Motorized = params.Motorized;
	if (StartEndOffset != nullptr)
		*StartEndOffset = params.StartEndOffset;
	if (HideWeaponEnabled != nullptr)
		*HideWeaponEnabled = params.HideWeaponEnabled;
	if (MaxActivationDistance != nullptr)
		*MaxActivationDistance = params.MaxActivationDistance;
}


// Function Zipline_Anchor.Zipline_Anchor_C.Get Zipline Info
// ()
// Parameters:
// struct FVector                 DownDirection                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AZipline_Anchor_C*       UpperAnchor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AZipline_Anchor_C*       LowerAnchor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 UpperCableAttachLoc            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LowerCableAttachLoc            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AZipline_Anchor_C::Get_Zipline_Info(struct FVector* DownDirection, class AZipline_Anchor_C** UpperAnchor, class AZipline_Anchor_C** LowerAnchor, struct FVector* UpperCableAttachLoc, struct FVector* LowerCableAttachLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.Get Zipline Info");

	AZipline_Anchor_C_Get_Zipline_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DownDirection != nullptr)
		*DownDirection = params.DownDirection;
	if (UpperAnchor != nullptr)
		*UpperAnchor = params.UpperAnchor;
	if (LowerAnchor != nullptr)
		*LowerAnchor = params.LowerAnchor;
	if (UpperCableAttachLoc != nullptr)
		*UpperCableAttachLoc = params.UpperCableAttachLoc;
	if (LowerCableAttachLoc != nullptr)
		*LowerCableAttachLoc = params.LowerCableAttachLoc;
}


// Function Zipline_Anchor.Zipline_Anchor_C.IsZiplineBlocked
// (Exec, Event, NetResponse, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, Const)
// Parameters:
// class APrimalCharacter*        primalChar                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartEndOffset                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          AttachOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 overrideStartLocation          (Parm, ZeroConstructor, IsPlainOldData)
// float                          overrideFindLocationDistance   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OverrideFindLocationDirection  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DontUseLineOfSightCheck        (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm)
// bool                           HitReturn                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AZipline_Anchor_C::IsZiplineBlocked(class APrimalCharacter* primalChar, float StartEndOffset, float AttachOffset, const struct FVector& overrideStartLocation, float overrideFindLocationDistance, const struct FVector& OverrideFindLocationDirection, bool DontUseLineOfSightCheck, struct FHitResult* HitResult, bool* HitReturn, struct FVector* StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.IsZiplineBlocked");

	AZipline_Anchor_C_IsZiplineBlocked_Params params;
	params.primalChar = primalChar;
	params.StartEndOffset = StartEndOffset;
	params.AttachOffset = AttachOffset;
	params.overrideStartLocation = overrideStartLocation;
	params.overrideFindLocationDistance = overrideFindLocationDistance;
	params.OverrideFindLocationDirection = OverrideFindLocationDirection;
	params.DontUseLineOfSightCheck = DontUseLineOfSightCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;
	if (HitReturn != nullptr)
		*HitReturn = params.HitReturn;
	if (StartLocation != nullptr)
		*StartLocation = params.StartLocation;
}


// Function Zipline_Anchor.Zipline_Anchor_C.ReceiveDestroyed
// ()

void AZipline_Anchor_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.ReceiveDestroyed");

	AZipline_Anchor_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zipline_Anchor.Zipline_Anchor_C.GetClosestPointOnLine
// ()
// Parameters:
// struct FVector                 LineStart                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LineEnd                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 closestPoint                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AZipline_Anchor_C::GetClosestPointOnLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point, struct FVector* closestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.GetClosestPointOnLine");

	AZipline_Anchor_C_GetClosestPointOnLine_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (closestPoint != nullptr)
		*closestPoint = params.closestPoint;
}


// Function Zipline_Anchor.Zipline_Anchor_C.RideZipline
// (NetReliable, NetRequest, Native, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, Const)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ZiplineBuff                    (Parm, ZeroConstructor, IsPlainOldData)

void AZipline_Anchor_C::RideZipline(class APlayerController* PC, class UClass* ZiplineBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.RideZipline");

	AZipline_Anchor_C_RideZipline_Params params;
	params.PC = PC;
	params.ZiplineBuff = ZiplineBuff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zipline_Anchor.Zipline_Anchor_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AZipline_Anchor_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.BPTryMultiUse");

	AZipline_Anchor_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Zipline_Anchor.Zipline_Anchor_C.BPGetMultiUseEntries
// (NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AZipline_Anchor_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.BPGetMultiUseEntries");

	AZipline_Anchor_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Zipline_Anchor.Zipline_Anchor_C.UserConstructionScript
// ()

void AZipline_Anchor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.UserConstructionScript");

	AZipline_Anchor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zipline_Anchor.Zipline_Anchor_C.ReceiveBeginPlay
// ()

void AZipline_Anchor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.ReceiveBeginPlay");

	AZipline_Anchor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Zipline_Anchor.Zipline_Anchor_C.ExecuteUbergraph_Zipline_Anchor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AZipline_Anchor_C::ExecuteUbergraph_Zipline_Anchor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Zipline_Anchor.Zipline_Anchor_C.ExecuteUbergraph_Zipline_Anchor");

	AZipline_Anchor_C_ExecuteUbergraph_Zipline_Anchor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
