// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HealAura_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_HealAura.Buff_HealAura_C.IsAlly
// ()
// Parameters:
// int                            otherTargetingTeam             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isAllyOrSomeTeam               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::IsAlly(int otherTargetingTeam, bool* isAllyOrSomeTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.IsAlly");

	ABuff_HealAura_C_IsAlly_Params params;
	params.otherTargetingTeam = otherTargetingTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isAllyOrSomeTeam != nullptr)
		*isAllyOrSomeTeam = params.isAllyOrSomeTeam;
}


// Function Buff_HealAura.Buff_HealAura_C.BPClientHandleNetExecCommand
// ()
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_HealAura_C::BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.BPClientHandleNetExecCommand");

	ABuff_HealAura_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_HealAura.Buff_HealAura_C.HasReachedMaxHealedCharacters
// ()
// Parameters:
// bool                           hasReachedMax                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::HasReachedMaxHealedCharacters(bool* hasReachedMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.HasReachedMaxHealedCharacters");

	ABuff_HealAura_C_HasReachedMaxHealedCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hasReachedMax != nullptr)
		*hasReachedMax = params.hasReachedMax;
}


// Function Buff_HealAura.Buff_HealAura_C.TryHealCharacterAndSpawnParticles
// ()
// Parameters:
// class APrimalCharacter*        characterToHeal                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           dontHealIfAlreadyHealing       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isInstigator                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::TryHealCharacterAndSpawnParticles(class APrimalCharacter* characterToHeal, bool dontHealIfAlreadyHealing, float DeltaTime, bool isInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.TryHealCharacterAndSpawnParticles");

	ABuff_HealAura_C_TryHealCharacterAndSpawnParticles_Params params;
	params.characterToHeal = characterToHeal;
	params.dontHealIfAlreadyHealing = dontHealIfAlreadyHealing;
	params.DeltaTime = DeltaTime;
	params.isInstigator = isInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.CheckStopHealingCondition
// ()
// Parameters:
// bool                           shouldStopHealing              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::CheckStopHealingCondition(bool* shouldStopHealing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.CheckStopHealingCondition");

	ABuff_HealAura_C_CheckStopHealingCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldStopHealing != nullptr)
		*shouldStopHealing = params.shouldStopHealing;
}


// Function Buff_HealAura.Buff_HealAura_C.ShowHUDNotification
// ()
// Parameters:
// struct FStatusValueModifierDescription notificationDescription        (Parm)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::ShowHUDNotification(const struct FStatusValueModifierDescription& notificationDescription, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.ShowHUDNotification");

	ABuff_HealAura_C_ShowHUDNotification_Params params;
	params.notificationDescription = notificationDescription;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.CalculateFoodConsumptionForHealingAmount
// ()
// Parameters:
// float                          healAmount                     (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          foodAmount                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::CalculateFoodConsumptionForHealingAmount(float healAmount, class APrimalCharacter* Character, float* foodAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.CalculateFoodConsumptionForHealingAmount");

	ABuff_HealAura_C_CalculateFoodConsumptionForHealingAmount_Params params;
	params.healAmount = healAmount;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (foodAmount != nullptr)
		*foodAmount = params.foodAmount;
}


// Function Buff_HealAura.Buff_HealAura_C.StopHealing
// ()
// Parameters:
// bool                           doMulticast                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::StopHealing(bool doMulticast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.StopHealing");

	ABuff_HealAura_C_StopHealing_Params params;
	params.doMulticast = doMulticast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.Get Current Status Amount
// ()
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalCharacterStatusValue> statusField                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          food                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::Get_Current_Status_Amount(class APawn* Pawn, TEnumAsByte<EPrimalCharacterStatusValue> statusField, float* food)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.Get Current Status Amount");

	ABuff_HealAura_C_Get_Current_Status_Amount_Params params;
	params.Pawn = Pawn;
	params.statusField = statusField;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (food != nullptr)
		*food = params.food;
}


// Function Buff_HealAura.Buff_HealAura_C.ConsumeFood
// ()
// Parameters:
// float                          foodAmount                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::ConsumeFood(float foodAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.ConsumeFood");

	ABuff_HealAura_C_ConsumeFood_Params params;
	params.foodAmount = foodAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.DisableHealingForCharacter
// ()
// Parameters:
// class APrimalCharacter*        characterIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           disableParticles               (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::DisableHealingForCharacter(class APrimalCharacter* characterIndex, bool disableParticles)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.DisableHealingForCharacter");

	ABuff_HealAura_C_DisableHealingForCharacter_Params params;
	params.characterIndex = characterIndex;
	params.disableParticles = disableParticles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.RestoreBitFlag
// ()
// Parameters:
// class APrimalCharacter*        forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::RestoreBitFlag(class APrimalCharacter* forCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.RestoreBitFlag");

	ABuff_HealAura_C_RestoreBitFlag_Params params;
	params.forCharacter = forCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.CanHealCharacter
// ()
// Parameters:
// class APrimalCharacter*        PrimalCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canHeal                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::CanHealCharacter(class APrimalCharacter* PrimalCharacter, bool* canHeal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.CanHealCharacter");

	ABuff_HealAura_C_CanHealCharacter_Params params;
	params.PrimalCharacter = PrimalCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canHeal != nullptr)
		*canHeal = params.canHeal;
}


// Function Buff_HealAura.Buff_HealAura_C.CleanHealArray
// ()

void ABuff_HealAura_C::CleanHealArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.CleanHealArray");

	ABuff_HealAura_C_CleanHealArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.BuffTickServer");

	ABuff_HealAura_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.Activate Healing
// ()

void ABuff_HealAura_C::Activate_Healing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.Activate Healing");

	ABuff_HealAura_C_Activate_Healing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.TryHeal Character and Consume Food
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isSelf                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           couldHeal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::TryHeal_Character_and_Consume_Food(class APrimalCharacter* Character, bool isSelf, float DeltaTime, bool* couldHeal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.TryHeal Character and Consume Food");

	ABuff_HealAura_C_TryHeal_Character_and_Consume_Food_Params params;
	params.Character = Character;
	params.isSelf = isSelf;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (couldHeal != nullptr)
		*couldHeal = params.couldHeal;
}


// Function Buff_HealAura.Buff_HealAura_C.CheckFoodCondition
// ()
// Parameters:
// bool                           hasEnoughFood                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::CheckFoodCondition(bool* hasEnoughFood)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.CheckFoodCondition");

	ABuff_HealAura_C_CheckFoodCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hasEnoughFood != nullptr)
		*hasEnoughFood = params.hasEnoughFood;
}


// Function Buff_HealAura.Buff_HealAura_C.HealCharacter
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::HealCharacter(class APrimalCharacter* Character, float amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.HealCharacter");

	ABuff_HealAura_C_HealCharacter_Params params;
	params.Character = Character;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.Restore All Bit Flags
// ()

void ABuff_HealAura_C::Restore_All_Bit_Flags()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.Restore All Bit Flags");

	ABuff_HealAura_C_Restore_All_Bit_Flags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.BPDeactivated");

	ABuff_HealAura_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.ReceiveDestroyed
// ()

void ABuff_HealAura_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.ReceiveDestroyed");

	ABuff_HealAura_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.Calculate Healing Amount For Character
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isSelf                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          healingAmount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::Calculate_Healing_Amount_For_Character(class APrimalCharacter* Character, bool isSelf, float DeltaTime, float* healingAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.Calculate Healing Amount For Character");

	ABuff_HealAura_C_Calculate_Healing_Amount_For_Character_Params params;
	params.Character = Character;
	params.isSelf = isSelf;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (healingAmount != nullptr)
		*healingAmount = params.healingAmount;
}


// Function Buff_HealAura.Buff_HealAura_C.UserConstructionScript
// ()

void ABuff_HealAura_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.UserConstructionScript");

	ABuff_HealAura_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.FadeOut__FinishedFunc
// ()

void ABuff_HealAura_C::FadeOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.FadeOut__FinishedFunc");

	ABuff_HealAura_C_FadeOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.FadeOut__UpdateFunc
// ()

void ABuff_HealAura_C::FadeOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.FadeOut__UpdateFunc");

	ABuff_HealAura_C_FadeOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.FadeIn__FinishedFunc
// ()

void ABuff_HealAura_C::FadeIn__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.FadeIn__FinishedFunc");

	ABuff_HealAura_C_FadeIn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.FadeIn__UpdateFunc
// ()

void ABuff_HealAura_C::FadeIn__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.FadeIn__UpdateFunc");

	ABuff_HealAura_C_FadeIn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.SpawnHealParticleOnCharacter
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::SpawnHealParticleOnCharacter(class APrimalCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.SpawnHealParticleOnCharacter");

	ABuff_HealAura_C_SpawnHealParticleOnCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.FadeInPulse
// ()
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::FadeInPulse(float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.FadeInPulse");

	ABuff_HealAura_C_FadeInPulse_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.ReceiveBeginPlay
// ()

void ABuff_HealAura_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.ReceiveBeginPlay");

	ABuff_HealAura_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.FadeOutPulse
// ()

void ABuff_HealAura_C::FadeOutPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.FadeOutPulse");

	ABuff_HealAura_C_FadeOutPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.DestroyHealingParticleForCharacter_Multicast
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::DestroyHealingParticleForCharacter_Multicast(class APrimalCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.DestroyHealingParticleForCharacter_Multicast");

	ABuff_HealAura_C_DestroyHealingParticleForCharacter_Multicast_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.DeactivateAndDestroyAllParticles_Multicast
// ()

void ABuff_HealAura_C::DeactivateAndDestroyAllParticles_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.DeactivateAndDestroyAllParticles_Multicast");

	ABuff_HealAura_C_DeactivateAndDestroyAllParticles_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.DeactivateAllParticles
// ()

void ABuff_HealAura_C::DeactivateAllParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.DeactivateAllParticles");

	ABuff_HealAura_C_DeactivateAllParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.DestroyAllHealingParticles
// ()

void ABuff_HealAura_C::DestroyAllHealingParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.DestroyAllHealingParticles");

	ABuff_HealAura_C_DestroyAllHealingParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.DeactivateAndDestroyAllParticles
// ()

void ABuff_HealAura_C::DeactivateAndDestroyAllParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.DeactivateAndDestroyAllParticles");

	ABuff_HealAura_C_DeactivateAndDestroyAllParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.FadeOutPulse_Multicast
// ()

void ABuff_HealAura_C::FadeOutPulse_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.FadeOutPulse_Multicast");

	ABuff_HealAura_C_FadeOutPulse_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.FadeInPulse_Multicast
// ()

void ABuff_HealAura_C::FadeInPulse_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.FadeInPulse_Multicast");

	ABuff_HealAura_C_FadeInPulse_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.ShowHUDNotificationForPlayer_FromServer
// ()
// Parameters:
// class AShooterCharacter*       PlayerCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CommandName                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::ShowHUDNotificationForPlayer_FromServer(class AShooterCharacter* PlayerCharacter, const struct FName& CommandName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.ShowHUDNotificationForPlayer_FromServer");

	ABuff_HealAura_C_ShowHUDNotificationForPlayer_FromServer_Params params;
	params.PlayerCharacter = PlayerCharacter;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.DeactivateAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::DeactivateAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.DeactivateAfterDelay");

	ABuff_HealAura_C_DeactivateAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HealAura.Buff_HealAura_C.ExecuteUbergraph_Buff_HealAura
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HealAura_C::ExecuteUbergraph_Buff_HealAura(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealAura.Buff_HealAura_C.ExecuteUbergraph_Buff_HealAura");

	ABuff_HealAura_C_ExecuteUbergraph_Buff_HealAura_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
