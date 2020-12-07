// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Yutyrannus_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPTimerNonDedicated
// ()

void AYutyrannus_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPTimerNonDedicated");

	AYutyrannus_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.SetAutoCourage
// ()
// Parameters:
// bool                           autoCourageValue               (Parm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::SetAutoCourage(bool autoCourageValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.SetAutoCourage");

	AYutyrannus_Character_BP_C_SetAutoCourage_Params params;
	params.autoCourageValue = autoCourageValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintDrawFloatingHUD");

	AYutyrannus_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPGetMultiUseEntries
// (Native, Event, Static, MulticastDelegate, Protected, NetServer, HasDefaults, DLLImport, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AYutyrannus_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPGetMultiUseEntries");

	AYutyrannus_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AYutyrannus_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPTryMultiUse");

	AYutyrannus_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AYutyrannus_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPAdjustDamage");

	AYutyrannus_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPShouldCancelDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AYutyrannus_Character_BP_C::BPShouldCancelDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPShouldCancelDoAttack");

	AYutyrannus_Character_BP_C_BPShouldCancelDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.All WildFollowers Attack Target
// ()
// Parameters:
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::All_WildFollowers_Attack_Target(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.All WildFollowers Attack Target");

	AYutyrannus_Character_BP_C_All_WildFollowers_Attack_Target_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Cone Check Custom
// ()
// Parameters:
// float                          coneRadius                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        OtherCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewParam1                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isInCone                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::Cone_Check_Custom(float coneRadius, class APrimalCharacter* OtherCharacter, const struct FVector& NewParam, const struct FVector& NewParam1, bool* isInCone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Cone Check Custom");

	AYutyrannus_Character_BP_C_Cone_Check_Custom_Params params;
	params.coneRadius = coneRadius;
	params.OtherCharacter = OtherCharacter;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isInCone != nullptr)
		*isInCone = params.isInCone;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AYutyrannus_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintCanRiderAttack");

	AYutyrannus_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.IsOfFollowerClass
// ()
// Parameters:
// class UClass*                  classToCheck                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           hasFollowerClass               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::IsOfFollowerClass(class UClass* classToCheck, bool* hasFollowerClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.IsOfFollowerClass");

	AYutyrannus_Character_BP_C_IsOfFollowerClass_Params params;
	params.classToCheck = classToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hasFollowerClass != nullptr)
		*hasFollowerClass = params.hasFollowerClass;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.CanAddFearCommonChecks
// ()
// Parameters:
// class APrimalCharacter*        OtherCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canAddFear                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::CanAddFearCommonChecks(class APrimalCharacter* OtherCharacter, bool* canAddFear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.CanAddFearCommonChecks");

	AYutyrannus_Character_BP_C_CanAddFearCommonChecks_Params params;
	params.OtherCharacter = OtherCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canAddFear != nullptr)
		*canAddFear = params.canAddFear;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ConeCheck
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, DLLImport, BlueprintPure)
// Parameters:
// float                          coneRadius                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        OtherCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           useHeadSocketForReference      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isInCone                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VectorA                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VectorB                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::ConeCheck(float coneRadius, class APrimalCharacter* OtherCharacter, bool useHeadSocketForReference, bool* isInCone, struct FVector* VectorA, struct FVector* VectorB)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ConeCheck");

	AYutyrannus_Character_BP_C_ConeCheck_Params params;
	params.coneRadius = coneRadius;
	params.OtherCharacter = OtherCharacter;
	params.useHeadSocketForReference = useHeadSocketForReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isInCone != nullptr)
		*isInCone = params.isInCone;
	if (VectorA != nullptr)
		*VectorA = params.VectorA;
	if (VectorB != nullptr)
		*VectorB = params.VectorB;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintAdjustOutputDamage
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, DLLImport, BlueprintPure)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AYutyrannus_Character_BP_C::STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintAdjustOutputDamage");

	AYutyrannus_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
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


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.IsFromSameTeamOrAlliedTribe
// ()
// Parameters:
// int                            otherTargetingTeam             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isAllyOrSameTeam               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::IsFromSameTeamOrAlliedTribe(int otherTargetingTeam, bool* isAllyOrSameTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.IsFromSameTeamOrAlliedTribe");

	AYutyrannus_Character_BP_C_IsFromSameTeamOrAlliedTribe_Params params;
	params.otherTargetingTeam = otherTargetingTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isAllyOrSameTeam != nullptr)
		*isAllyOrSameTeam = params.isAllyOrSameTeam;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ReceiveAnyDamage");

	AYutyrannus_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.GetFearCourageBuffClass
// ()
// Parameters:
// bool                           isFear                         (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    DinoCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  BuffClass                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           isTrustBuff                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::GetFearCourageBuffClass(bool isFear, class APrimalDinoCharacter* DinoCharacter, class UClass** BuffClass, bool* isTrustBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.GetFearCourageBuffClass");

	AYutyrannus_Character_BP_C_GetFearCourageBuffClass_Params params;
	params.isFear = isFear;
	params.DinoCharacter = DinoCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuffClass != nullptr)
		*BuffClass = params.BuffClass;
	if (isTrustBuff != nullptr)
		*isTrustBuff = params.isTrustBuff;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintCanAttack
// (NetReliable, Event, MulticastDelegate, Protected, NetServer, HasDefaults, DLLImport, BlueprintPure)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AYutyrannus_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintCanAttack");

	AYutyrannus_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Add Fear
// ()
// Parameters:
// class APrimalDinoCharacter*    DinoCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::Add_Fear(class APrimalDinoCharacter* DinoCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Add Fear");

	AYutyrannus_Character_BP_C_Add_Fear_Params params;
	params.DinoCharacter = DinoCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.FindNearbyDinosForFear
// (NetRequest, Exec, Static, MulticastDelegate, Protected, NetServer, HasDefaults, DLLImport, BlueprintPure)
// Parameters:
// TArray<class APrimalDinoCharacter*> dinosFound                     (Parm, OutParm, ZeroConstructor)

void AYutyrannus_Character_BP_C::STATIC_FindNearbyDinosForFear(TArray<class APrimalDinoCharacter*>* dinosFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.FindNearbyDinosForFear");

	AYutyrannus_Character_BP_C_FindNearbyDinosForFear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dinosFound != nullptr)
		*dinosFound = params.dinosFound;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.WildYuty Can Add Fear
// ()
// Parameters:
// class APrimalDinoCharacter*    DinoCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canScare                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::WildYuty_Can_Add_Fear(class APrimalDinoCharacter* DinoCharacter, bool* canScare)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.WildYuty Can Add Fear");

	AYutyrannus_Character_BP_C_WildYuty_Can_Add_Fear_Params params;
	params.DinoCharacter = DinoCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canScare != nullptr)
		*canScare = params.canScare;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.WildOrderFollowersAttackTarget
// ()
// Parameters:
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::WildOrderFollowersAttackTarget(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.WildOrderFollowersAttackTarget");

	AYutyrannus_Character_BP_C_WildOrderFollowersAttackTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Add Courage TamedToWild
// ()
// Parameters:
// class APrimalDinoCharacter*    DinoCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canAddConfidenceToDino         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::Can_Add_Courage_TamedToWild(class APrimalDinoCharacter* DinoCharacter, bool* canAddConfidenceToDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Add Courage TamedToWild");

	AYutyrannus_Character_BP_C_Can_Add_Courage_TamedToWild_Params params;
	params.DinoCharacter = DinoCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canAddConfidenceToDino != nullptr)
		*canAddConfidenceToDino = params.canAddConfidenceToDino;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Add Courage
// ()
// Parameters:
// class APrimalDinoCharacter*    DinoCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalBuff*             Buff                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::Add_Courage(class APrimalDinoCharacter* DinoCharacter, class APrimalBuff** Buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Add Courage");

	AYutyrannus_Character_BP_C_Add_Courage_Params params;
	params.DinoCharacter = DinoCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Buff != nullptr)
		*Buff = params.Buff;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPOnTamedProcessOrder
// ()
// Parameters:
// class APrimalCharacter**       FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDinoTamedOrder>*  OrderType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 enemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          orderNotExecuted               (Parm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPOnTamedProcessOrder");

	AYutyrannus_Character_BP_C_BPOnTamedProcessOrder_Params params;
	params.FromCharacter = FromCharacter;
	params.OrderType = OrderType;
	params.bForce = bForce;
	params.enemyTarget = enemyTarget;
	params.orderNotExecuted = orderNotExecuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can AddFollowerWhileTamed
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canBeFollower                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::Can_AddFollowerWhileTamed(class APrimalDinoCharacter* Dino, bool* canBeFollower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can AddFollowerWhileTamed");

	AYutyrannus_Character_BP_C_Can_AddFollowerWhileTamed_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canBeFollower != nullptr)
		*canBeFollower = params.canBeFollower;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Try Add Follower WhileTamed
// ()
// Parameters:
// class APrimalDinoCharacter*    follower                       (Parm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::Try_Add_Follower_WhileTamed(class APrimalDinoCharacter* follower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Try Add Follower WhileTamed");

	AYutyrannus_Character_BP_C_Try_Add_Follower_WhileTamed_Params params;
	params.follower = follower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Add Courage WildToWild
// ()
// Parameters:
// class APrimalDinoCharacter*    DinoCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canAddConfidenceToDino         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::Can_Add_Courage_WildToWild(class APrimalDinoCharacter* DinoCharacter, bool* canAddConfidenceToDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Add Courage WildToWild");

	AYutyrannus_Character_BP_C_Can_Add_Courage_WildToWild_Params params;
	params.DinoCharacter = DinoCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canAddConfidenceToDino != nullptr)
		*canAddConfidenceToDino = params.canAddConfidenceToDino;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Try Add Courage
// (NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasDefaults, DLLImport, BlueprintPure)
// Parameters:
// class APrimalDinoCharacter*    PotentialTarget                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           tamedToTamed                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           wildToWild                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           tamedToWild                    (Parm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::Try_Add_Courage(class APrimalDinoCharacter* PotentialTarget, bool tamedToTamed, bool wildToWild, bool tamedToWild)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Try Add Courage");

	AYutyrannus_Character_BP_C_Try_Add_Courage_Params params;
	params.PotentialTarget = PotentialTarget;
	params.tamedToTamed = tamedToTamed;
	params.wildToWild = wildToWild;
	params.tamedToWild = tamedToWild;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Add Courage TamedToTamed
// ()
// Parameters:
// class APrimalDinoCharacter*    DinoCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canAddConfidenceToDino         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::Can_Add_Courage_TamedToTamed(class APrimalDinoCharacter* DinoCharacter, bool* canAddConfidenceToDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Add Courage TamedToTamed");

	AYutyrannus_Character_BP_C_Can_Add_Courage_TamedToTamed_Params params;
	params.DinoCharacter = DinoCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canAddConfidenceToDino != nullptr)
		*canAddConfidenceToDino = params.canAddConfidenceToDino;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.TamedAdd CourageTo Nearby Dinos
// ()

void AYutyrannus_Character_BP_C::TamedAdd_CourageTo_Nearby_Dinos()
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.TamedAdd CourageTo Nearby Dinos");

	AYutyrannus_Character_BP_C_TamedAdd_CourageTo_Nearby_Dinos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.TamedYuty Can Add Fear
// ()
// Parameters:
// class APrimalDinoCharacter*    DinoCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canScare                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::TamedYuty_Can_Add_Fear(class APrimalDinoCharacter* DinoCharacter, bool* canScare)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.TamedYuty Can Add Fear");

	AYutyrannus_Character_BP_C_TamedYuty_Can_Add_Fear_Params params;
	params.DinoCharacter = DinoCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canScare != nullptr)
		*canScare = params.canScare;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPDoAttack");

	AYutyrannus_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can AddFollowerWhileWild
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ignoreTerrorCheck              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canBeFollower                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::Can_AddFollowerWhileWild(class APrimalDinoCharacter* Dino, bool ignoreTerrorCheck, bool* canBeFollower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can AddFollowerWhileWild");

	AYutyrannus_Character_BP_C_Can_AddFollowerWhileWild_Params params;
	params.Dino = Dino;
	params.ignoreTerrorCheck = ignoreTerrorCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canBeFollower != nullptr)
		*canBeFollower = params.canBeFollower;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Try Add FollowerWhileWild
// ()
// Parameters:
// class APrimalDinoCharacter*    follower                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ignoreTerrorCheck              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           followerAdded                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::Try_Add_FollowerWhileWild(class APrimalDinoCharacter* follower, bool ignoreTerrorCheck, bool* followerAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Try Add FollowerWhileWild");

	AYutyrannus_Character_BP_C_Try_Add_FollowerWhileWild_Params params;
	params.follower = follower;
	params.ignoreTerrorCheck = ignoreTerrorCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (followerAdded != nullptr)
		*followerAdded = params.followerAdded;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.UpdateCurrentFollowers
// ()

void AYutyrannus_Character_BP_C::UpdateCurrentFollowers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.UpdateCurrentFollowers");

	AYutyrannus_Character_BP_C_UpdateCurrentFollowers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Look for New Followers
// ()
// Parameters:
// bool                           canLook                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::Can_Look_for_New_Followers(bool* canLook)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Look for New Followers");

	AYutyrannus_Character_BP_C_Can_Look_for_New_Followers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canLook != nullptr)
		*canLook = params.canLook;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPTimerServer
// ()

void AYutyrannus_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPTimerServer");

	AYutyrannus_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Wild Find New Followers
// ()

void AYutyrannus_Character_BP_C::Wild_Find_New_Followers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Wild Find New Followers");

	AYutyrannus_Character_BP_C_Wild_Find_New_Followers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.UserConstructionScript
// ()

void AYutyrannus_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.UserConstructionScript");

	AYutyrannus_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.AddFearToNearbyDinos
// ()

void AYutyrannus_Character_BP_C::AddFearToNearbyDinos()
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.AddFearToNearbyDinos");

	AYutyrannus_Character_BP_C_AddFearToNearbyDinos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.WildTryAddCourageToFollowers
// ()

void AYutyrannus_Character_BP_C::WildTryAddCourageToFollowers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.WildTryAddCourageToFollowers");

	AYutyrannus_Character_BP_C_WildTryAddCourageToFollowers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AYutyrannus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DoFearAfterDelay
// ()

void AYutyrannus_Character_BP_C::DoFearAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DoFearAfterDelay");

	AYutyrannus_Character_BP_C_DoFearAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DrawCone_Multicast
// ()

void AYutyrannus_Character_BP_C::DrawCone_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DrawCone_Multicast");

	AYutyrannus_Character_BP_C_DrawCone_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DoCourageAfterDelay
// ()

void AYutyrannus_Character_BP_C::DoCourageAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DoCourageAfterDelay");

	AYutyrannus_Character_BP_C_DoCourageAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DoCourageToFollowersAfterDelay
// ()

void AYutyrannus_Character_BP_C::DoCourageToFollowersAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DoCourageToFollowersAfterDelay");

	AYutyrannus_Character_BP_C_DoCourageToFollowersAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DisableFollowerDistanceCheckForSeconds
// ()
// Parameters:
// float                          Seconds                        (Parm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::DisableFollowerDistanceCheckForSeconds(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DisableFollowerDistanceCheckForSeconds");

	AYutyrannus_Character_BP_C_DisableFollowerDistanceCheckForSeconds_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DrawArrow_Multicast
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::DrawArrow_Multicast(const struct FVector& Origin, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DrawArrow_Multicast");

	AYutyrannus_Character_BP_C_DrawArrow_Multicast_Params params;
	params.Origin = Origin;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ReceiveBeginPlay
// ()

void AYutyrannus_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ReceiveBeginPlay");

	AYutyrannus_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPUnstasis
// ()

void AYutyrannus_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPUnstasis");

	AYutyrannus_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ExecuteUbergraph_Yutyrannus_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AYutyrannus_Character_BP_C::ExecuteUbergraph_Yutyrannus_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ExecuteUbergraph_Yutyrannus_Character_BP");

	AYutyrannus_Character_BP_C_ExecuteUbergraph_Yutyrannus_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
