// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gacha_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gacha_Character_BP.Gacha_Character_BP_C.CalculateItemChanceWild
// ()
// Parameters:
// float                          CrystalQuality                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGacha_Character_BP_C::CalculateItemChanceWild(float CrystalQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.CalculateItemChanceWild");

	AGacha_Character_BP_C_CalculateItemChanceWild_Params params;
	params.CrystalQuality = CrystalQuality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.CalculateItemChance
// ()
// Parameters:
// float                          CrystalQuality                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGacha_Character_BP_C::CalculateItemChance(float CrystalQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.CalculateItemChance");

	AGacha_Character_BP_C_CalculateItemChance_Params params;
	params.CrystalQuality = CrystalQuality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.HasEnemyTarget
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGacha_Character_BP_C::HasEnemyTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.HasEnemyTarget");

	AGacha_Character_BP_C_HasEnemyTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.HasFriendlyTarget
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGacha_Character_BP_C::HasFriendlyTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.HasFriendlyTarget");

	AGacha_Character_BP_C_HasFriendlyTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.GetCrystalDropTransform
// (NetReliable, NetRequest, NetResponse, Private, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AGacha_Character_BP_C::GetCrystalDropTransform(struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.GetCrystalDropTransform");

	AGacha_Character_BP_C_GetCrystalDropTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;

	return params.ReturnValue;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGacha_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BlueprintCanRiderAttack");

	AGacha_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyAimOffsetNoTarget
// ()
// Parameters:
// struct FRotator                Aim                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AGacha_Character_BP_C::BPModifyAimOffsetNoTarget(struct FRotator* Aim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyAimOffsetNoTarget");

	AGacha_Character_BP_C_BPModifyAimOffsetNoTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Aim != nullptr)
		*Aim = params.Aim;

	return params.ReturnValue;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.OverrideRandomWanderLocation
// ()
// Parameters:
// struct FVector                 originalDestination            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 inVec                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.OverrideRandomWanderLocation");

	AGacha_Character_BP_C_OverrideRandomWanderLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (originalDestination != nullptr)
		*originalDestination = params.originalDestination;
	if (inVec != nullptr)
		*inVec = params.inVec;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.ReceiveAnyDamage");

	AGacha_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.InitializeProduction
// (NetReliable, Native, Event, Static, Private, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)

void AGacha_Character_BP_C::STATIC_InitializeProduction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.InitializeProduction");

	AGacha_Character_BP_C_InitializeProduction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.InitializeCrystals
// ()

void AGacha_Character_BP_C::InitializeCrystals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.InitializeCrystals");

	AGacha_Character_BP_C_InitializeCrystals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.FindWanderTarget
// ()

void AGacha_Character_BP_C::FindWanderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.FindWanderTarget");

	AGacha_Character_BP_C_FindWanderTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.GetDigestionFrequencyMultiplier
// (Net, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// float                          mult                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::STATIC_GetDigestionFrequencyMultiplier(float* mult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.GetDigestionFrequencyMultiplier");

	AGacha_Character_BP_C_GetDigestionFrequencyMultiplier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mult != nullptr)
		*mult = params.mult;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.GetCrystalQualityMultiplier
// (NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// float                          mult                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::STATIC_GetCrystalQualityMultiplier(float* mult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.GetCrystalQualityMultiplier");

	AGacha_Character_BP_C_GetCrystalQualityMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mult != nullptr)
		*mult = params.mult;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.Get Digestion Amount Multiplier
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// float                          Multiplier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::STATIC_Get_Digestion_Amount_Multiplier(float* Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.Get Digestion Amount Multiplier");

	AGacha_Character_BP_C_Get_Digestion_Amount_Multiplier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Multiplier != nullptr)
		*Multiplier = params.Multiplier;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyAimOffsetTargetLocation
// ()
// Parameters:
// struct FVector                 AimTargetLocation              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AGacha_Character_BP_C::BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyAimOffsetTargetLocation");

	AGacha_Character_BP_C_BPModifyAimOffsetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AimTargetLocation != nullptr)
		*AimTargetLocation = params.AimTargetLocation;

	return params.ReturnValue;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.BPUnstasisConsumeFood
// ()
// Parameters:
// float*                         FoodNeeded                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGacha_Character_BP_C::BPUnstasisConsumeFood(float* FoodNeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPUnstasisConsumeFood");

	AGacha_Character_BP_C_BPUnstasisConsumeFood_Params params;
	params.FoodNeeded = FoodNeeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.GetEfficiencyFactor
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGacha_Character_BP_C::GetEfficiencyFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.GetEfficiencyFactor");

	AGacha_Character_BP_C_GetEfficiencyFactor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.ResetDigestionTimer
// ()

void AGacha_Character_BP_C::ResetDigestionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.ResetDigestionTimer");

	AGacha_Character_BP_C_ResetDigestionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.BabyDigestion
// ()
// Parameters:
// bool                           AteSomething                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::BabyDigestion(bool* AteSomething)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BabyDigestion");

	AGacha_Character_BP_C_BabyDigestion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AteSomething != nullptr)
		*AteSomething = params.AteSomething;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.Is Unhappy
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGacha_Character_BP_C::Is_Unhappy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.Is Unhappy");

	AGacha_Character_BP_C_Is_Unhappy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.IsHappy
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGacha_Character_BP_C::IsHappy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.IsHappy");

	AGacha_Character_BP_C_IsHappy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.CalculateCrystalQuality
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGacha_Character_BP_C::CalculateCrystalQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.CalculateCrystalQuality");

	AGacha_Character_BP_C_CalculateCrystalQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.OnRep_EmotionLevel
// ()

void AGacha_Character_BP_C::OnRep_EmotionLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.OnRep_EmotionLevel");

	AGacha_Character_BP_C_OnRep_EmotionLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.EmotionCheck
// ()

void AGacha_Character_BP_C::EmotionCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.EmotionCheck");

	AGacha_Character_BP_C_EmotionCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.ReceiveTick");

	AGacha_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.Play Start Digest Animation
// ()

void AGacha_Character_BP_C::Play_Start_Digest_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.Play Start Digest Animation");

	AGacha_Character_BP_C_Play_Start_Digest_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.BPOnDinoCheat
// ()
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPOnDinoCheat");

	AGacha_Character_BP_C_BPOnDinoCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.DistributeFood
// (NetReliable, Native, NetResponse, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// float                          FoodEaten                      (Parm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::DistributeFood(float FoodEaten)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.DistributeFood");

	AGacha_Character_BP_C_DistributeFood_Params params;
	params.FoodEaten = FoodEaten;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.Look for Food Drops
// ()
// Parameters:
// bool                           PlayerAttack                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FoundSomething                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::Look_for_Food_Drops(bool PlayerAttack, bool* FoundSomething)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.Look for Food Drops");

	AGacha_Character_BP_C_Look_for_Food_Drops_Params params;
	params.PlayerAttack = PlayerAttack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundSomething != nullptr)
		*FoundSomething = params.FoundSomething;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.GetItemTamingValue
// (Exec, Event, Public, Private, Protected, Delegate, HasOutParms, BlueprintPure, NetValidate)
// Parameters:
// class UPrimalItem*             Object                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Affinity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsWanted                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::GetItemTamingValue(class UPrimalItem* Object, float* Affinity, bool* IsWanted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.GetItemTamingValue");

	AGacha_Character_BP_C_GetItemTamingValue_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Affinity != nullptr)
		*Affinity = params.Affinity;
	if (IsWanted != nullptr)
		*IsWanted = params.IsWanted;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.GetItemFoodValue
// (NetReliable, NetRequest, Exec, Native, Event, Public, Private, Protected, Delegate, HasOutParms, BlueprintPure, NetValidate)
// Parameters:
// class UPrimalItem*             Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPremium                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FoodValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::GetItemFoodValue(class UPrimalItem* Object, bool* IsPremium, float* FoodValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.GetItemFoodValue");

	AGacha_Character_BP_C_GetItemFoodValue_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPremium != nullptr)
		*IsPremium = params.IsPremium;
	if (FoodValue != nullptr)
		*FoodValue = params.FoodValue;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.Stop Eating
// ()

void AGacha_Character_BP_C::Stop_Eating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.Stop Eating");

	AGacha_Character_BP_C_Stop_Eating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.StartEating
// ()

void AGacha_Character_BP_C::StartEating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.StartEating");

	AGacha_Character_BP_C_StartEating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.BPNotifyWildHarvestAttack
// ()
// Parameters:
// int*                           harvestIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::BPNotifyWildHarvestAttack(int* harvestIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPNotifyWildHarvestAttack");

	AGacha_Character_BP_C_BPNotifyWildHarvestAttack_Params params;
	params.harvestIndex = harvestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.GetItemBaseValue
// (NetReliable, NetRequest, Native, Event, NetResponse, Public, Private, Protected, Delegate, HasOutParms, BlueprintPure, NetValidate)
// Parameters:
// class UPrimalItem*             PrimalItem                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          BaseValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::GetItemBaseValue(class UPrimalItem* PrimalItem, float BaseValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.GetItemBaseValue");

	AGacha_Character_BP_C_GetItemBaseValue_Params params;
	params.PrimalItem = PrimalItem;
	params.BaseValue = BaseValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.ChooseLootSet
// ()

void AGacha_Character_BP_C::ChooseLootSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.ChooseLootSet");

	AGacha_Character_BP_C_ChooseLootSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPClientDoMultiUse");

	AGacha_Character_BP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.BPTryMultiUse
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGacha_Character_BP_C::STATIC_BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPTryMultiUse");

	AGacha_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.BPGetMultiUseEntries
// (NetReliable, Exec, Event, Static, Public, Private, Protected, Delegate, HasOutParms, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AGacha_Character_BP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPGetMultiUseEntries");

	AGacha_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.WildDigestion
// ()

void AGacha_Character_BP_C::WildDigestion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.WildDigestion");

	AGacha_Character_BP_C_WildDigestion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.Play Digest Animation
// ()

void AGacha_Character_BP_C::Play_Digest_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.Play Digest Animation");

	AGacha_Character_BP_C_Play_Digest_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.SetCrystalScale
// ()

void AGacha_Character_BP_C::SetCrystalScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.SetCrystalScale");

	AGacha_Character_BP_C_SetCrystalScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.DropCrystal
// (Net, NetReliable, Exec, Native, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintPure, NetValidate)

void AGacha_Character_BP_C::DropCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.DropCrystal");

	AGacha_Character_BP_C_DropCrystal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.FinishDigestion
// ()

void AGacha_Character_BP_C::FinishDigestion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.FinishDigestion");

	AGacha_Character_BP_C_FinishDigestion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.TamedDigestion
// (NetRequest, Exec, NetResponse, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// bool                           AteSomething                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::TamedDigestion(bool* AteSomething)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.TamedDigestion");

	AGacha_Character_BP_C_TamedDigestion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AteSomething != nullptr)
		*AteSomething = params.AteSomething;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.Play Release Animation
// ()

void AGacha_Character_BP_C::Play_Release_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.Play Release Animation");

	AGacha_Character_BP_C_Play_Release_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.DigestionTick
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::DigestionTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.DigestionTick");

	AGacha_Character_BP_C_DigestionTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.TamingTick
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::TamingTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.TamingTick");

	AGacha_Character_BP_C_TamingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.LookForTamingDrops
// (Net, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// bool                           FoundSomething                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::LookForTamingDrops(bool* FoundSomething)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.LookForTamingDrops");

	AGacha_Character_BP_C_LookForTamingDrops_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundSomething != nullptr)
		*FoundSomething = params.FoundSomething;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.GiveAffinity
// ()
// Parameters:
// class APrimalCharacter*        tamer                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          AffinityToGive                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           wasTamed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::GiveAffinity(float AffinityToGive, class APrimalCharacter** tamer, bool* wasTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.GiveAffinity");

	AGacha_Character_BP_C_GiveAffinity_Params params;
	params.AffinityToGive = AffinityToGive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (tamer != nullptr)
		*tamer = params.tamer;
	if (wasTamed != nullptr)
		*wasTamed = params.wasTamed;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.WantsResource
// ()
// Parameters:
// class UPrimalItem*             Item                           (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           IsWanted                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Affinity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::WantsResource(class UPrimalItem** Item, bool* IsWanted, float* Affinity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.WantsResource");

	AGacha_Character_BP_C_WantsResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
	if (IsWanted != nullptr)
		*IsWanted = params.IsWanted;
	if (Affinity != nullptr)
		*Affinity = params.Affinity;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.BPDoHarvestAttack
// ()
// Parameters:
// int*                           harvestIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::BPDoHarvestAttack(int* harvestIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPDoHarvestAttack");

	AGacha_Character_BP_C_BPDoHarvestAttack_Params params;
	params.harvestIndex = harvestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyHarvestingQuantity
// ()
// Parameters:
// float*                         originalQuantity               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 resourceSelected               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGacha_Character_BP_C::BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyHarvestingQuantity");

	AGacha_Character_BP_C_BPModifyHarvestingQuantity_Params params;
	params.originalQuantity = originalQuantity;
	params.resourceSelected = resourceSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyHarvestDamage
// ()
// Parameters:
// class UPrimalHarvestingComponent** harvestComponent               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         inDamage                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGacha_Character_BP_C::BPModifyHarvestDamage(class UPrimalHarvestingComponent** harvestComponent, float* inDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPModifyHarvestDamage");

	AGacha_Character_BP_C_BPModifyHarvestDamage_Params params;
	params.harvestComponent = harvestComponent;
	params.inDamage = inDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.UserConstructionScript
// ()

void AGacha_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.UserConstructionScript");

	AGacha_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.AnimNotify_DoneEating
// ()

void AGacha_Character_BP_C::AnimNotify_DoneEating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.AnimNotify_DoneEating");

	AGacha_Character_BP_C_AnimNotify_DoneEating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.AnimNotify_DropCrystal
// ()

void AGacha_Character_BP_C::AnimNotify_DropCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.AnimNotify_DropCrystal");

	AGacha_Character_BP_C_AnimNotify_DropCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.BPDinoPostBeginPlay
// ()

void AGacha_Character_BP_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.BPDinoPostBeginPlay");

	AGacha_Character_BP_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.AnimNotify_CheckForCrystal
// ()

void AGacha_Character_BP_C::AnimNotify_CheckForCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.AnimNotify_CheckForCrystal");

	AGacha_Character_BP_C_AnimNotify_CheckForCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.CleanUpEating
// ()

void AGacha_Character_BP_C::CleanUpEating()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.CleanUpEating");

	AGacha_Character_BP_C_CleanUpEating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gacha_Character_BP.Gacha_Character_BP_C.ExecuteUbergraph_Gacha_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGacha_Character_BP_C::ExecuteUbergraph_Gacha_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gacha_Character_BP.Gacha_Character_BP_C.ExecuteUbergraph_Gacha_Character_BP");

	AGacha_Character_BP_C_ExecuteUbergraph_Gacha_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
