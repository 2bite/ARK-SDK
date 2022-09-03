// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Purlovia_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Purlovia_Character_BP.Purlovia_Character_BP_C.HasSelfBuried
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APurlovia_Character_BP_C::HasSelfBuried()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.HasSelfBuried");

	APurlovia_Character_BP_C_HasSelfBuried_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPIsHidden
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APurlovia_Character_BP_C::BPIsHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPIsHidden");

	APurlovia_Character_BP_C_BPIsHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.UpdateCollisions
// ()
// Parameters:
// bool                           Buried                         (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::UpdateCollisions(bool Buried)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.UpdateCollisions");

	APurlovia_Character_BP_C_UpdateCollisions_Params params;
	params.Buried = Buried;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.CanUnburyNormal
// ()
// Parameters:
// bool                           Can                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::CanUnburyNormal(bool* Can)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.CanUnburyNormal");

	APurlovia_Character_BP_C_CanUnburyNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Show Mound Out Particles
// ()

void APurlovia_Character_BP_C::Show_Mound_Out_Particles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Show Mound Out Particles");

	APurlovia_Character_BP_C_Show_Mound_Out_Particles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPTimerNonDedicated
// ()

void APurlovia_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPTimerNonDedicated");

	APurlovia_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Update Bury Mesh Transform Variable
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           updateMeshLocation             (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::STATIC_Update_Bury_Mesh_Transform_Variable(bool updateMeshLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Update Bury Mesh Transform Variable");

	APurlovia_Character_BP_C_Update_Bury_Mesh_Transform_Variable_Params params;
	params.updateMeshLocation = updateMeshLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Show Mound In Particles
// ()

void APurlovia_Character_BP_C::Show_Mound_In_Particles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Show Mound In Particles");

	APurlovia_Character_BP_C_Show_Mound_In_Particles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Show Bury MoundIfNeeded
// ()

void APurlovia_Character_BP_C::Show_Bury_MoundIfNeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Show Bury MoundIfNeeded");

	APurlovia_Character_BP_C_Show_Bury_MoundIfNeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Hide Bury Mound
// ()

void APurlovia_Character_BP_C::Hide_Bury_Mound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Hide Bury Mound");

	APurlovia_Character_BP_C_Hide_Bury_Mound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.RotateToTarget
// (NetRequest, Exec, Native, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)

void APurlovia_Character_BP_C::RotateToTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.RotateToTarget");

	APurlovia_Character_BP_C_RotateToTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.IsValidTarget
// ()
// Parameters:
// bool                           DoWeightCheck                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::IsValidTarget(bool DoWeightCheck, class AActor* Target, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.IsValidTarget");

	APurlovia_Character_BP_C_IsValidTarget_Params params;
	params.DoWeightCheck = DoWeightCheck;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintAdjustOutputDamage
// (Native, NetResponse, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APurlovia_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintAdjustOutputDamage");

	APurlovia_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
	params.AttackIndex = AttackIndex;
	params.OriginalDamageAmount = OriginalDamageAmount;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = params.OutDamageImpulse;

	return params.ReturnValue;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.isBuryAttack
// ()
// Parameters:
// int                            AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isBuryAttack                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::isBuryAttack(int AttackIndex, bool* isBuryAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.isBuryAttack");

	APurlovia_Character_BP_C_isBuryAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isBuryAttack != nullptr)
		*isBuryAttack = params.isBuryAttack;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPDoAttack");

	APurlovia_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.TryBury
// ()
// Parameters:
// bool                           PlayAnim                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           skipBuriedCheck                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           couldBury                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::TryBury(bool PlayAnim, bool skipBuriedCheck, bool* couldBury)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.TryBury");

	APurlovia_Character_BP_C_TryBury_Params params;
	params.PlayAnim = PlayAnim;
	params.skipBuriedCheck = skipBuriedCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (couldBury != nullptr)
		*couldBury = params.couldBury;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Should Show Bury Mound
// ()
// Parameters:
// bool                           shouldShowMesh                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::Should_Show_Bury_Mound(bool* shouldShowMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Should Show Bury Mound");

	APurlovia_Character_BP_C_Should_Show_Bury_Mound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldShowMesh != nullptr)
		*shouldShowMesh = params.shouldShowMesh;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APurlovia_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPAdjustDamage");

	APurlovia_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.IsValidSurface
// (NetReliable, Exec, Event, Static, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::STATIC_IsValidSurface(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.IsValidSurface");

	APurlovia_Character_BP_C_IsValidSurface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPCharacterSleeped
// ()

void APurlovia_Character_BP_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPCharacterSleeped");

	APurlovia_Character_BP_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPOnAnimPlayedNotify
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StartSectionName               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicateToOwner              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseAndServerUpdateMesh (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseOnServer         (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::BPOnAnimPlayedNotify(class UAnimMontage** AnimMontage, float* InPlayRate, struct FName* StartSectionName, bool* bReplicate, bool* bReplicateToOwner, bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPOnAnimPlayedNotify");

	APurlovia_Character_BP_C_BPOnAnimPlayedNotify_Params params;
	params.AnimMontage = AnimMontage;
	params.InPlayRate = InPlayRate;
	params.StartSectionName = StartSectionName;
	params.bReplicate = bReplicate;
	params.bReplicateToOwner = bReplicateToOwner;
	params.bForceTickPoseAndServerUpdateMesh = bForceTickPoseAndServerUpdateMesh;
	params.bForceTickPoseOnServer = bForceTickPoseOnServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.FinishBuriedJump
// ()

void APurlovia_Character_BP_C::FinishBuriedJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.FinishBuriedJump");

	APurlovia_Character_BP_C_FinishBuriedJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.CalculateBuryMeshTransform
// (NetRequest, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// struct UObject_FTransform      Transform                      (Parm, OutParm, IsPlainOldData)

void APurlovia_Character_BP_C::CalculateBuryMeshTransform(struct UObject_FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.CalculateBuryMeshTransform");

	APurlovia_Character_BP_C_CalculateBuryMeshTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintDrawFloatingHUD");

	APurlovia_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Get Buried Attack Up Impulse
// (NetRequest, Exec, NetResponse, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 UpImpulse                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::Get_Buried_Attack_Up_Impulse(struct FVector* UpImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Get Buried Attack Up Impulse");

	APurlovia_Character_BP_C_Get_Buried_Attack_Up_Impulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpImpulse != nullptr)
		*UpImpulse = params.UpImpulse;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Get Buried Attack Down Impulse
// (NetReliable, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector                 Impulse                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::Get_Buried_Attack_Down_Impulse(struct FVector* Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Get Buried Attack Down Impulse");

	APurlovia_Character_BP_C_Get_Buried_Attack_Down_Impulse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Impulse != nullptr)
		*Impulse = params.Impulse;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnRep_isBuried
// ()

void APurlovia_Character_BP_C::OnRep_isBuried()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnRep_isBuried");

	APurlovia_Character_BP_C_OnRep_isBuried_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.IsDinoInWater
// ()
// Parameters:
// bool                           onWater                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::IsDinoInWater(bool* onWater)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.IsDinoInWater");

	APurlovia_Character_BP_C_IsDinoInWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (onWater != nullptr)
		*onWater = params.onWater;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.FinishNormalJump
// ()

void APurlovia_Character_BP_C::FinishNormalJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.FinishNormalJump");

	APurlovia_Character_BP_C_FinishNormalJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.ApplyNormalJumpImpulse
// (NetRequest, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)

void APurlovia_Character_BP_C::STATIC_ApplyNormalJumpImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.ApplyNormalJumpImpulse");

	APurlovia_Character_BP_C_ApplyNormalJumpImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnJumped
// ()

void APurlovia_Character_BP_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnJumped");

	APurlovia_Character_BP_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APurlovia_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintCanAttack");

	APurlovia_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPOnMovementModeChangedNotify
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPOnMovementModeChangedNotify");

	APurlovia_Character_BP_C_BPOnMovementModeChangedNotify_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPNotifyBumpedPawn
// ()
// Parameters:
// class APrimalCharacter**       BumpedPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::BPNotifyBumpedPawn(class APrimalCharacter** BumpedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPNotifyBumpedPawn");

	APurlovia_Character_BP_C_BPNotifyBumpedPawn_Params params;
	params.BumpedPawn = BumpedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Can Unbury
// ()
// Parameters:
// bool                           canComeOut                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::Can_Unbury(bool* canComeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Can Unbury");

	APurlovia_Character_BP_C_Can_Unbury_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canComeOut != nullptr)
		*canComeOut = params.canComeOut;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.ShouldComeOut
// ()
// Parameters:
// bool                           comeOut                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::ShouldComeOut(bool* comeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.ShouldComeOut");

	APurlovia_Character_BP_C_ShouldComeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (comeOut != nullptr)
		*comeOut = params.comeOut;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Has Conflict with AI
// ()
// Parameters:
// bool                           hasConflict                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::Has_Conflict_with_AI(bool* hasConflict)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Has Conflict with AI");

	APurlovia_Character_BP_C_Has_Conflict_with_AI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hasConflict != nullptr)
		*hasConflict = params.hasConflict;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.canBury
// (NetRequest, Event, NetResponse, Public, Delegate, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           forceBury                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canBury                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::canBury(bool forceBury, bool* canBury)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.canBury");

	APurlovia_Character_BP_C_canBury_Params params;
	params.forceBury = forceBury;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canBury != nullptr)
		*canBury = params.canBury;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.CanPlayBuryAnim
// ()
// Parameters:
// bool                           canPlayBury                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::CanPlayBuryAnim(bool* canPlayBury)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.CanPlayBuryAnim");

	APurlovia_Character_BP_C_CanPlayBuryAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canPlayBury != nullptr)
		*canPlayBury = params.canPlayBury;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.CanJumpAtTarget
// ()
// Parameters:
// bool                           FoundTarget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::CanJumpAtTarget(bool* FoundTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.CanJumpAtTarget");

	APurlovia_Character_BP_C_CanJumpAtTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundTarget != nullptr)
		*FoundTarget = params.FoundTarget;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPTimerServer
// ()

void APurlovia_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPTimerServer");

	APurlovia_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPGetMultiUseEntries
// (NetRequest, NetResponse, Static, Public, Delegate, NetServer, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> APurlovia_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPGetMultiUseEntries");

	APurlovia_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APurlovia_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPTryMultiUse");

	APurlovia_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.UserConstructionScript
// ()

void APurlovia_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.UserConstructionScript");

	APurlovia_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.Bury
// ()
// Parameters:
// bool                           PlayAnim                       (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::Bury(bool PlayAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.Bury");

	APurlovia_Character_BP_C_Bury_Params params;
	params.PlayAnim = PlayAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOut_Attack
// ()
// Parameters:
// int                            Range                          (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::ComeOut_Attack(int Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOut_Attack");

	APurlovia_Character_BP_C_ComeOut_Attack_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOut_Normal
// ()
// Parameters:
// bool                           PlayAnim                       (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::ComeOut_Normal(bool PlayAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOut_Normal");

	APurlovia_Character_BP_C_ComeOut_Normal_Params params;
	params.PlayAnim = PlayAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.TryComeOutAttack
// ()
// Parameters:
// int                            Range                          (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::TryComeOutAttack(int Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.TryComeOutAttack");

	APurlovia_Character_BP_C_TryComeOutAttack_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnComeOut
// ()

void APurlovia_Character_BP_C::OnComeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnComeOut");

	APurlovia_Character_BP_C_OnComeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnNormalJump
// ()

void APurlovia_Character_BP_C::OnNormalJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnNormalJump");

	APurlovia_Character_BP_C_OnNormalJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPUnstasis
// ()

void APurlovia_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BPUnstasis");

	APurlovia_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnMovementChanged
// ()

void APurlovia_Character_BP_C::OnMovementChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnMovementChanged");

	APurlovia_Character_BP_C_OnMovementChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	APurlovia_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.UpdateMeshesAfterDelay
// ()

void APurlovia_Character_BP_C::UpdateMeshesAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.UpdateMeshesAfterDelay");

	APurlovia_Character_BP_C_UpdateMeshesAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOutShortRange
// ()

void APurlovia_Character_BP_C::ComeOutShortRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOutShortRange");

	APurlovia_Character_BP_C_ComeOutShortRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOutLongRange
// ()
// Parameters:
// int                            Range                          (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::ComeOutLongRange(int Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.ComeOutLongRange");

	APurlovia_Character_BP_C_ComeOutLongRange_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnPurloviaSleeped
// ()

void APurlovia_Character_BP_C::OnPurloviaSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnPurloviaSleeped");

	APurlovia_Character_BP_C_OnPurloviaSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.PreComeOutActions
// ()

void APurlovia_Character_BP_C::PreComeOutActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.PreComeOutActions");

	APurlovia_Character_BP_C_PreComeOutActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.TryComeOutNormal
// ()
// Parameters:
// bool                           PlayAnim                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           forceUnbury                    (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::TryComeOutNormal(bool PlayAnim, bool forceUnbury)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.TryComeOutNormal");

	APurlovia_Character_BP_C_TryComeOutNormal_Params params;
	params.PlayAnim = PlayAnim;
	params.forceUnbury = forceUnbury;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnBuried
// ()

void APurlovia_Character_BP_C::OnBuried()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnBuried");

	APurlovia_Character_BP_C_OnBuried_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.ShowBuryMeshAfterDelay
// ()

void APurlovia_Character_BP_C::ShowBuryMeshAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.ShowBuryMeshAfterDelay");

	APurlovia_Character_BP_C_ShowBuryMeshAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.HideBuryMeshAfterDelay
// ()

void APurlovia_Character_BP_C::HideBuryMeshAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.HideBuryMeshAfterDelay");

	APurlovia_Character_BP_C_HideBuryMeshAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.FastBury
// ()

void APurlovia_Character_BP_C::FastBury()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.FastBury");

	APurlovia_Character_BP_C_FastBury_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnClientConnect
// ()

void APurlovia_Character_BP_C::OnClientConnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnClientConnect");

	APurlovia_Character_BP_C_OnClientConnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnWildServerConnect
// ()

void APurlovia_Character_BP_C::OnWildServerConnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnWildServerConnect");

	APurlovia_Character_BP_C_OnWildServerConnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnTamedServerConnect
// ()

void APurlovia_Character_BP_C::OnTamedServerConnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.OnTamedServerConnect");

	APurlovia_Character_BP_C_OnTamedServerConnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.ReceiveBeginPlay
// ()

void APurlovia_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.ReceiveBeginPlay");

	APurlovia_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP.Purlovia_Character_BP_C.ExecuteUbergraph_Purlovia_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_C::ExecuteUbergraph_Purlovia_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP.Purlovia_Character_BP_C.ExecuteUbergraph_Purlovia_Character_BP");

	APurlovia_Character_BP_C_ExecuteUbergraph_Purlovia_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
