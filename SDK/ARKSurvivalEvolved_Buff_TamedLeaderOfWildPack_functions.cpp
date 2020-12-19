// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TamedLeaderOfWildPack_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_TamedLeaderOfWildPack_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.BuffAdjustDamage");

	ABuff_TamedLeaderOfWildPack_C_BuffAdjustDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;

	return params.ReturnValue;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TamedLeaderOfWildPack_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.BPServerHandleNetExecCommand");

	ABuff_TamedLeaderOfWildPack_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.IsFollower
// ()
// Parameters:
// class APrimalDinoCharacter*    DinoCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           characterIsFollower            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TamedLeaderOfWildPack_C::IsFollower(class APrimalDinoCharacter* DinoCharacter, bool* characterIsFollower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.IsFollower");

	ABuff_TamedLeaderOfWildPack_C_IsFollower_Params params;
	params.DinoCharacter = DinoCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (characterIsFollower != nullptr)
		*characterIsFollower = params.characterIsFollower;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OrderFollowersAttack Target
// ()
// Parameters:
// class AActor*                  characterToAttack              (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        FromCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canOverrideTarget              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           showArrowEffect                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TamedLeaderOfWildPack_C::OrderFollowersAttack_Target(class AActor* characterToAttack, class APrimalCharacter* FromCharacter, bool canOverrideTarget, bool showArrowEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OrderFollowersAttack Target");

	ABuff_TamedLeaderOfWildPack_C_OrderFollowersAttack_Target_Params params;
	params.characterToAttack = characterToAttack;
	params.FromCharacter = FromCharacter;
	params.canOverrideTarget = canOverrideTarget;
	params.showArrowEffect = showArrowEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.ReceiveDestroyed
// ()

void ABuff_TamedLeaderOfWildPack_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.ReceiveDestroyed");

	ABuff_TamedLeaderOfWildPack_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OnBuffDeactivated
// ()

void ABuff_TamedLeaderOfWildPack_C::OnBuffDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OnBuffDeactivated");

	ABuff_TamedLeaderOfWildPack_C_OnBuffDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TamedLeaderOfWildPack_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.BPDeactivated");

	ABuff_TamedLeaderOfWildPack_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OnAddedFollower
// ()
// Parameters:
// class APrimalDinoCharacter*    newFollower                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TamedLeaderOfWildPack_C::OnAddedFollower(class APrimalDinoCharacter* newFollower, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OnAddedFollower");

	ABuff_TamedLeaderOfWildPack_C_OnAddedFollower_Params params;
	params.newFollower = newFollower;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.InitializeBuff
// ()
// Parameters:
// TArray<class UClass*>          classesCanFollow               (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            maxNumFollowers                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TamedLeaderOfWildPack_C::InitializeBuff(int maxNumFollowers, TArray<class UClass*>* classesCanFollow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.InitializeBuff");

	ABuff_TamedLeaderOfWildPack_C_InitializeBuff_Params params;
	params.maxNumFollowers = maxNumFollowers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (classesCanFollow != nullptr)
		*classesCanFollow = params.classesCanFollow;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.TryAdd Follower
// ()
// Parameters:
// class APrimalDinoCharacter*    newFollower                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           followerAdded                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TamedLeaderOfWildPack_C::TryAdd_Follower(class APrimalDinoCharacter* newFollower, bool* followerAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.TryAdd Follower");

	ABuff_TamedLeaderOfWildPack_C_TryAdd_Follower_Params params;
	params.newFollower = newFollower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (followerAdded != nullptr)
		*followerAdded = params.followerAdded;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.PreventActorTargeting
// ()
// Parameters:
// class AActor**                 ByActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TamedLeaderOfWildPack_C::PreventActorTargeting(class AActor** ByActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.PreventActorTargeting");

	ABuff_TamedLeaderOfWildPack_C_PreventActorTargeting_Params params;
	params.ByActor = ByActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.UserConstructionScript
// ()

void ABuff_TamedLeaderOfWildPack_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.UserConstructionScript");

	ABuff_TamedLeaderOfWildPack_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.LinkDamage
// ()
// Parameters:
// class APrimalDinoCharacter*    follower                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TamedLeaderOfWildPack_C::LinkDamage(class APrimalDinoCharacter* follower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.LinkDamage");

	ABuff_TamedLeaderOfWildPack_C_LinkDamage_Params params;
	params.follower = follower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OnTakeAnyDamage_Event
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TamedLeaderOfWildPack_C::OnTakeAnyDamage_Event(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.OnTakeAnyDamage_Event");

	ABuff_TamedLeaderOfWildPack_C_OnTakeAnyDamage_Event_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.SpawnParticlesForFollowers_Multicast
// ()
// Parameters:
// class APrimalDinoCharacter*    follower                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TamedLeaderOfWildPack_C::SpawnParticlesForFollowers_Multicast(class APrimalDinoCharacter* follower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.SpawnParticlesForFollowers_Multicast");

	ABuff_TamedLeaderOfWildPack_C_SpawnParticlesForFollowers_Multicast_Params params;
	params.follower = follower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.SpawnParticlesForFollowers
// ()
// Parameters:
// class APrimalDinoCharacter*    follower                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TamedLeaderOfWildPack_C::SpawnParticlesForFollowers(class APrimalDinoCharacter* follower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.SpawnParticlesForFollowers");

	ABuff_TamedLeaderOfWildPack_C_SpawnParticlesForFollowers_Params params;
	params.follower = follower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.SpawnInitialParticles
// ()
// Parameters:
// int                            numParticlesAlreadySpawned     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TamedLeaderOfWildPack_C::SpawnInitialParticles(int numParticlesAlreadySpawned)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.SpawnInitialParticles");

	ABuff_TamedLeaderOfWildPack_C_SpawnInitialParticles_Params params;
	params.numParticlesAlreadySpawned = numParticlesAlreadySpawned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.ReceiveBeginPlay
// ()

void ABuff_TamedLeaderOfWildPack_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.ReceiveBeginPlay");

	ABuff_TamedLeaderOfWildPack_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.LinkDamageTaken
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TamedLeaderOfWildPack_C::LinkDamageTaken(class APrimalCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.LinkDamageTaken");

	ABuff_TamedLeaderOfWildPack_C_LinkDamageTaken_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.TakePointDamageSignature__DelegateSignature_Event
// ()
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ShotFromDirection              (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TamedLeaderOfWildPack_C::TakePointDamageSignature__DelegateSignature_Event(float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.TakePointDamageSignature__DelegateSignature_Event");

	ABuff_TamedLeaderOfWildPack_C_TakePointDamageSignature__DelegateSignature_Event_Params params;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.ExecuteUbergraph_Buff_TamedLeaderOfWildPack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TamedLeaderOfWildPack_C::ExecuteUbergraph_Buff_TamedLeaderOfWildPack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TamedLeaderOfWildPack.Buff_TamedLeaderOfWildPack_C.ExecuteUbergraph_Buff_TamedLeaderOfWildPack");

	ABuff_TamedLeaderOfWildPack_C_ExecuteUbergraph_Buff_TamedLeaderOfWildPack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
