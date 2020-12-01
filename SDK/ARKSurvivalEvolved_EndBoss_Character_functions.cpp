// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBoss_Character_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndBoss_Character.EndBoss_Character_C.Update Only Core Transform Time
// ()
// Parameters:
// double                         NewTime                        (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::Update_Only_Core_Transform_Time(double NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.Update Only Core Transform Time");

	AEndBoss_Character_C_Update_Only_Core_Transform_Time_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.ReceiveDestroyed
// ()

void AEndBoss_Character_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.ReceiveDestroyed");

	AEndBoss_Character_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.DestroyAllMinions
// ()

void AEndBoss_Character_C::DestroyAllMinions()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.DestroyAllMinions");

	AEndBoss_Character_C_DestroyAllMinions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.BPGetHealthBarColor
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AEndBoss_Character_C::BPGetHealthBarColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.BPGetHealthBarColor");

	AEndBoss_Character_C_BPGetHealthBarColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndBoss_Character.EndBoss_Character_C.UpdateDesiredNumDrones
// ()

void AEndBoss_Character_C::UpdateDesiredNumDrones()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.UpdateDesiredNumDrones");

	AEndBoss_Character_C_UpdateDesiredNumDrones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.ForceImpulsePrimalCharacter
// ()
// Parameters:
// class APrimalCharacter*        TargetPrimalChar               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Impulse                        (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::ForceImpulsePrimalCharacter(class APrimalCharacter* TargetPrimalChar, const struct FVector& Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.ForceImpulsePrimalCharacter");

	AEndBoss_Character_C_ForceImpulsePrimalCharacter_Params params;
	params.TargetPrimalChar = TargetPrimalChar;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.EndBoss Movement Push
// ()

void AEndBoss_Character_C::EndBoss_Movement_Push()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.EndBoss Movement Push");

	AEndBoss_Character_C_EndBoss_Movement_Push_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.UpdateMobility
// ()

void AEndBoss_Character_C::UpdateMobility()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.UpdateMobility");

	AEndBoss_Character_C_UpdateMobility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.BPShouldForceFlee
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEndBoss_Character_C::BPShouldForceFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.BPShouldForceFlee");

	AEndBoss_Character_C_BPShouldForceFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndBoss_Character.EndBoss_Character_C.EndBoss_GetDifficultyColor
// ()
// Parameters:
// struct FLinearColor            ReturnColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::EndBoss_GetDifficultyColor(struct FLinearColor* ReturnColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.EndBoss_GetDifficultyColor");

	AEndBoss_Character_C_EndBoss_GetDifficultyColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnColor != nullptr)
		*ReturnColor = params.ReturnColor;
}


// Function EndBoss_Character.EndBoss_Character_C.KillAllMinions
// ()

void AEndBoss_Character_C::KillAllMinions()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.KillAllMinions");

	AEndBoss_Character_C_KillAllMinions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.UpdateThrone
// ()

void AEndBoss_Character_C::UpdateThrone()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.UpdateThrone");

	AEndBoss_Character_C_UpdateThrone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.ServerPlayTransitionSound
// ()
// Parameters:
// bool                           InTransition                   (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::ServerPlayTransitionSound(bool InTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.ServerPlayTransitionSound");

	AEndBoss_Character_C_ServerPlayTransitionSound_Params params;
	params.InTransition = InTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.Update Hit Response Cycle at Index
// ()
// Parameters:
// int                            InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ClearEntry                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::Update_Hit_Response_Cycle_at_Index(int InputPin, bool ClearEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.Update Hit Response Cycle at Index");

	AEndBoss_Character_C_Update_Hit_Response_Cycle_at_Index_Params params;
	params.InputPin = InputPin;
	params.ClearEntry = ClearEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.CheckHitLocation
// ()
// Parameters:
// struct FVector                 LocationToCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldSetHit                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            PreviousHit                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::CheckHitLocation(const struct FVector& LocationToCheck, float DamageAmount, bool* ShouldSetHit, int* PreviousHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.CheckHitLocation");

	AEndBoss_Character_C_CheckHitLocation_Params params;
	params.LocationToCheck = LocationToCheck;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldSetHit != nullptr)
		*ShouldSetHit = params.ShouldSetHit;
	if (PreviousHit != nullptr)
		*PreviousHit = params.PreviousHit;
}


// Function EndBoss_Character.EndBoss_Character_C.AddShieldHitResponse
// ()
// Parameters:
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          HitDamage                      (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::AddShieldHitResponse(const struct FVector& HitLocation, float HitDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.AddShieldHitResponse");

	AEndBoss_Character_C_AddShieldHitResponse_Params params;
	params.HitLocation = HitLocation;
	params.HitDamage = HitDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.Minion Spawned FX
// (NetReliable, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasDefaults, NetClient, Const, NetValidate)

void AEndBoss_Character_C::STATIC_Minion_Spawned_FX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.Minion Spawned FX");

	AEndBoss_Character_C_Minion_Spawned_FX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.Set Static Mesh Materials
// ()
// Parameters:
// float                          InputPin                       (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::Set_Static_Mesh_Materials(float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.Set Static Mesh Materials");

	AEndBoss_Character_C_Set_Static_Mesh_Materials_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.EndBossSetDissolvePercent
// ()
// Parameters:
// float                          NewPercent                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DissolveParameterName          (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::EndBossSetDissolvePercent(float NewPercent, const struct FName& DissolveParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.EndBossSetDissolvePercent");

	AEndBoss_Character_C_EndBossSetDissolvePercent_Params params;
	params.NewPercent = NewPercent;
	params.DissolveParameterName = DissolveParameterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.EndBoss Get Arena Difficulty
// ()
// Parameters:
// TEnumAsByte<EBossDifficulty_Enum> difficulty                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::EndBoss_Get_Arena_Difficulty(TEnumAsByte<EBossDifficulty_Enum>* difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.EndBoss Get Arena Difficulty");

	AEndBoss_Character_C_EndBoss_Get_Arena_Difficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (difficulty != nullptr)
		*difficulty = params.difficulty;
}


// Function EndBoss_Character.EndBoss_Character_C.EndBossDissolveFunc
// ()
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DissolveParamName              (Parm, ZeroConstructor, IsPlainOldData)
// float                          LastPercentValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::EndBossDissolveFunc(float Rate, const struct FName& DissolveParamName, float* LastPercentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.EndBossDissolveFunc");

	AEndBoss_Character_C_EndBossDissolveFunc_Params params;
	params.Rate = Rate;
	params.DissolveParamName = DissolveParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastPercentValue != nullptr)
		*LastPercentValue = params.LastPercentValue;
}


// Function EndBoss_Character.EndBoss_Character_C.Speed by Cloud
// ()
// Parameters:
// bool                           NoCollision                    (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::Speed_by_Cloud(bool NoCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.Speed by Cloud");

	AEndBoss_Character_C_Speed_by_Cloud_Params params;
	params.NoCollision = NoCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.AttemptBeamAttack
// ()

void AEndBoss_Character_C::AttemptBeamAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.AttemptBeamAttack");

	AEndBoss_Character_C_AttemptBeamAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.CanHaveBeams
// ()
// Parameters:
// bool                           _return                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::CanHaveBeams(bool* _return)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.CanHaveBeams");

	AEndBoss_Character_C_CanHaveBeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_return != nullptr)
		*_return = params._return;
}


// Function EndBoss_Character.EndBoss_Character_C.GetRandomGroundPoint
// (NetRequest, Event, NetResponse, Public, Private, Delegate, NetServer, HasDefaults, NetClient, Const, NetValidate)
// Parameters:
// bool                           Hit                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::GetRandomGroundPoint(bool* Hit, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.GetRandomGroundPoint");

	AEndBoss_Character_C_GetRandomGroundPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
	if (Location != nullptr)
		*Location = params.Location;
}


// Function EndBoss_Character.EndBoss_Character_C.FindMinionSpawnLoc
// ()
// Parameters:
// struct FVector                 SpawnLoc                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                SpawnRot                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           FoundGoodLoc                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::FindMinionSpawnLoc(struct FVector* SpawnLoc, struct FRotator* SpawnRot, bool* FoundGoodLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.FindMinionSpawnLoc");

	AEndBoss_Character_C_FindMinionSpawnLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnLoc != nullptr)
		*SpawnLoc = params.SpawnLoc;
	if (SpawnRot != nullptr)
		*SpawnRot = params.SpawnRot;
	if (FoundGoodLoc != nullptr)
		*FoundGoodLoc = params.FoundGoodLoc;
}


// Function EndBoss_Character.EndBoss_Character_C.AttemptToSpawnMinions
// ()
// Parameters:
// bool                           IgnoreTimeCheck                (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::AttemptToSpawnMinions(bool IgnoreTimeCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.AttemptToSpawnMinions");

	AEndBoss_Character_C_AttemptToSpawnMinions_Params params;
	params.IgnoreTimeCheck = IgnoreTimeCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.SummonTankMinions
// ()

void AEndBoss_Character_C::SummonTankMinions()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.SummonTankMinions");

	AEndBoss_Character_C_SummonTankMinions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.SummonDroneMinions
// ()

void AEndBoss_Character_C::SummonDroneMinions()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.SummonDroneMinions");

	AEndBoss_Character_C_SummonDroneMinions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.Remove Bad Minions from List
// ()
// Parameters:
// TArray<class APrimalCharacter*> InputPin                       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AEndBoss_Character_C::Remove_Bad_Minions_from_List(TArray<class APrimalCharacter*>* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.Remove Bad Minions from List");

	AEndBoss_Character_C_Remove_Bad_Minions_from_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputPin != nullptr)
		*InputPin = params.InputPin;
}


// Function EndBoss_Character.EndBoss_Character_C.SpawnMinionDinoFromAttackInfo
// (NetReliable, Native, NetMulticast, Public, Private, Delegate, NetServer, HasDefaults, NetClient, Const, NetValidate)
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    SpawnedDino                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::SpawnMinionDinoFromAttackInfo(int AttackIndex, class APrimalDinoCharacter** SpawnedDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.SpawnMinionDinoFromAttackInfo");

	AEndBoss_Character_C_SpawnMinionDinoFromAttackInfo_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedDino != nullptr)
		*SpawnedDino = params.SpawnedDino;
}


// Function EndBoss_Character.EndBoss_Character_C.BPTimerNonDedicated
// ()

void AEndBoss_Character_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.BPTimerNonDedicated");

	AEndBoss_Character_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.Update Visual Core Transform
// ()

void AEndBoss_Character_C::Update_Visual_Core_Transform()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.Update Visual Core Transform");

	AEndBoss_Character_C_Update_Visual_Core_Transform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.Set Core Values
// ()
// Parameters:
// float                          Health                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         TransformTime                  (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::Set_Core_Values(float Health, double TransformTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.Set Core Values");

	AEndBoss_Character_C_Set_Core_Values_Params params;
	params.Health = Health;
	params.TransformTime = TransformTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEndBoss_Character_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.BPAdjustDamage");

	AEndBoss_Character_C_BPAdjustDamage_Params params;
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


// Function EndBoss_Character.EndBoss_Character_C.IterateCurrentBeamIndex
// ()
// Parameters:
// bool                           didReset                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::IterateCurrentBeamIndex(bool* didReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.IterateCurrentBeamIndex");

	AEndBoss_Character_C_IterateCurrentBeamIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (didReset != nullptr)
		*didReset = params.didReset;
}


// Function EndBoss_Character.EndBoss_Character_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEndBoss_Character_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.BlueprintCanAttack");

	AEndBoss_Character_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndBoss_Character.EndBoss_Character_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.BPDoAttack");

	AEndBoss_Character_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.UserConstructionScript
// ()

void AEndBoss_Character_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.UserConstructionScript");

	AEndBoss_Character_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.BeamFire__FinishedFunc
// ()

void AEndBoss_Character_C::BeamFire__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.BeamFire__FinishedFunc");

	AEndBoss_Character_C_BeamFire__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.BeamFire__UpdateFunc
// ()

void AEndBoss_Character_C::BeamFire__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.BeamFire__UpdateFunc");

	AEndBoss_Character_C_BeamFire__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.UpdateCloudVisuals__FinishedFunc
// ()

void AEndBoss_Character_C::UpdateCloudVisuals__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.UpdateCloudVisuals__FinishedFunc");

	AEndBoss_Character_C_UpdateCloudVisuals__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.UpdateCloudVisuals__UpdateFunc
// ()

void AEndBoss_Character_C::UpdateCloudVisuals__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.UpdateCloudVisuals__UpdateFunc");

	AEndBoss_Character_C_UpdateCloudVisuals__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.FireBeamAroundCircle
// ()

void AEndBoss_Character_C::FireBeamAroundCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.FireBeamAroundCircle");

	AEndBoss_Character_C_FireBeamAroundCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.FireBeamNum
// ()
// Parameters:
// bool                           AtAimDir                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            BeamIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            BeamDesiredNum                 (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::FireBeamNum(bool AtAimDir, int BeamIndex, int BeamDesiredNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.FireBeamNum");

	AEndBoss_Character_C_FireBeamNum_Params params;
	params.AtAimDir = AtAimDir;
	params.BeamIndex = BeamIndex;
	params.BeamDesiredNum = BeamDesiredNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.BPTimerServer
// ()

void AEndBoss_Character_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.BPTimerServer");

	AEndBoss_Character_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.ReceiveBeginPlay
// ()

void AEndBoss_Character_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.ReceiveBeginPlay");

	AEndBoss_Character_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.OnDied_Event
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.OnDied_Event");

	AEndBoss_Character_C_OnDied_Event_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.ImpulseUnderCore
// ()
// Parameters:
// struct FVector                 ImpulseLoc                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::ImpulseUnderCore(const struct FVector& ImpulseLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.ImpulseUnderCore");

	AEndBoss_Character_C_ImpulseUnderCore_Params params;
	params.ImpulseLoc = ImpulseLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.StartDamageResponse
// ()
// Parameters:
// struct FHitResult              PointHit                       (Parm)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::StartDamageResponse(const struct FHitResult& PointHit, float DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.StartDamageResponse");

	AEndBoss_Character_C_StartDamageResponse_Params params;
	params.PointHit = PointHit;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.SetCloudForm
// ()
// Parameters:
// bool                           NewCloudForm                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NoCollision                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DissolveTransition             (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::SetCloudForm(bool NewCloudForm, bool NoCollision, bool DissolveTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.SetCloudForm");

	AEndBoss_Character_C_SetCloudForm_Params params;
	params.NewCloudForm = NewCloudForm;
	params.NoCollision = NoCollision;
	params.DissolveTransition = DissolveTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.StartCloudVisualUpdate
// ()

void AEndBoss_Character_C::StartCloudVisualUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.StartCloudVisualUpdate");

	AEndBoss_Character_C_StartCloudVisualUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.Multi_SetLocation
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rot                            (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::Multi_SetLocation(const struct FVector& Loc, const struct FRotator& Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.Multi_SetLocation");

	AEndBoss_Character_C_Multi_SetLocation_Params params;
	params.Loc = Loc;
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.MultiMinionSpawned
// ()

void AEndBoss_Character_C::MultiMinionSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.MultiMinionSpawned");

	AEndBoss_Character_C_MultiMinionSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.Multi_AddShieldHitResponse
// ()
// Parameters:
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::Multi_AddShieldHitResponse(const struct FVector& HitLocation, float DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.Multi_AddShieldHitResponse");

	AEndBoss_Character_C_Multi_AddShieldHitResponse_Params params;
	params.HitLocation = HitLocation;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.MultiPlaySound
// ()
// Parameters:
// class USoundBase*              SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Attach                         (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::MultiPlaySound(class USoundBase* SoundToPlay, bool Attach)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.MultiPlaySound");

	AEndBoss_Character_C_MultiPlaySound_Params params;
	params.SoundToPlay = SoundToPlay;
	params.Attach = Attach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.Multi_SetCloudForm
// ()
// Parameters:
// bool                           NewCloudForm                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NoCollision                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDissolveTransition           (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::Multi_SetCloudForm(bool NewCloudForm, bool NoCollision, bool IsDissolveTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.Multi_SetCloudForm");

	AEndBoss_Character_C_Multi_SetCloudForm_Params params;
	params.NewCloudForm = NewCloudForm;
	params.NoCollision = NoCollision;
	params.IsDissolveTransition = IsDissolveTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.Multi_SpawnThroneParticle
// ()

void AEndBoss_Character_C::Multi_SpawnThroneParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.Multi_SpawnThroneParticle");

	AEndBoss_Character_C_Multi_SpawnThroneParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.SpawnFloatingWakeEffects
// ()

void AEndBoss_Character_C::SpawnFloatingWakeEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.SpawnFloatingWakeEffects");

	AEndBoss_Character_C_SpawnFloatingWakeEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.Multi_SpawnDeathByDamageParticle
// ()

void AEndBoss_Character_C::Multi_SpawnDeathByDamageParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.Multi_SpawnDeathByDamageParticle");

	AEndBoss_Character_C_Multi_SpawnDeathByDamageParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.DebugWanderDestination_Multicast
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::DebugWanderDestination_Multicast(const struct FVector& Location, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.DebugWanderDestination_Multicast");

	AEndBoss_Character_C_DebugWanderDestination_Multicast_Params params;
	params.Location = Location;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.DebugWanderDestination_Server
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::DebugWanderDestination_Server(const struct FVector& Origin, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.DebugWanderDestination_Server");

	AEndBoss_Character_C_DebugWanderDestination_Server_Params params;
	params.Origin = Origin;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.DebugLineTrace_Multicasty
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::DebugLineTrace_Multicasty(const struct FVector& Location, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.DebugLineTrace_Multicasty");

	AEndBoss_Character_C_DebugLineTrace_Multicasty_Params params;
	params.Location = Location;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.DebugLineTrace_Server
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::DebugLineTrace_Server(const struct FVector& Origin, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.DebugLineTrace_Server");

	AEndBoss_Character_C_DebugLineTrace_Server_Params params;
	params.Origin = Origin;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.SpawnThroneParticle
// ()

void AEndBoss_Character_C::SpawnThroneParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.SpawnThroneParticle");

	AEndBoss_Character_C_SpawnThroneParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.Multi_PlayDeathMatinee
// ()
// Parameters:
// class AMatineeActor*           DeathMat                       (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::Multi_PlayDeathMatinee(class AMatineeActor* DeathMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.Multi_PlayDeathMatinee");

	AEndBoss_Character_C_Multi_PlayDeathMatinee_Params params;
	params.DeathMat = DeathMat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.PlayBossSound
// ()
// Parameters:
// class USoundBase*              SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Attach                         (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::PlayBossSound(class USoundBase* SoundToPlay, bool Attach)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.PlayBossSound");

	AEndBoss_Character_C_PlayBossSound_Params params;
	params.SoundToPlay = SoundToPlay;
	params.Attach = Attach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.Multi_SpawnImpulseVFXAtLoc
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::Multi_SpawnImpulseVFXAtLoc(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.Multi_SpawnImpulseVFXAtLoc");

	AEndBoss_Character_C_Multi_SpawnImpulseVFXAtLoc_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.Multi_DrawHealthBar
// ()

void AEndBoss_Character_C::Multi_DrawHealthBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.Multi_DrawHealthBar");

	AEndBoss_Character_C_Multi_DrawHealthBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBoss_Character.EndBoss_Character_C.ExecuteUbergraph_EndBoss_Character
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndBoss_Character_C::ExecuteUbergraph_EndBoss_Character(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBoss_Character.EndBoss_Character_C.ExecuteUbergraph_EndBoss_Character");

	AEndBoss_Character_C_ExecuteUbergraph_EndBoss_Character_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
