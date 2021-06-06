// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Equus_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Equus_Character_BP.Equus_Character_BP_C.BPModifyHarvestDamage
// ()
// Parameters:
// class UPrimalHarvestingComponent** harvestComponent               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         inDamage                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEquus_Character_BP_C::BPModifyHarvestDamage(class UPrimalHarvestingComponent** harvestComponent, float* inDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.BPModifyHarvestDamage");

	AEquus_Character_BP_C_BPModifyHarvestDamage_Params params;
	params.harvestComponent = harvestComponent;
	params.inDamage = inDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Equus_Character_BP.Equus_Character_BP_C.Setup Buck Taming Stats
// ()

void AEquus_Character_BP_C::Setup_Buck_Taming_Stats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.Setup Buck Taming Stats");

	AEquus_Character_BP_C_Setup_Buck_Taming_Stats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEquus_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.BPTryMultiUse");

	AEquus_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Equus_Character_BP.Equus_Character_BP_C.BPGetMultiUseEntries
// (Native, Public, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AEquus_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.BPGetMultiUseEntries");

	AEquus_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Equus_Character_BP.Equus_Character_BP_C.BPTimerNonDedicated
// ()

void AEquus_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.BPTimerNonDedicated");

	AEquus_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.UpdateRandomLocation
// ()
// Parameters:
// bool                           FoundValidPoint                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocationPoint               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEquus_Character_BP_C::UpdateRandomLocation(bool* FoundValidPoint, struct FVector* NewLocationPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.UpdateRandomLocation");

	AEquus_Character_BP_C_UpdateRandomLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundValidPoint != nullptr)
		*FoundValidPoint = params.FoundValidPoint;
	if (NewLocationPoint != nullptr)
		*NewLocationPoint = params.NewLocationPoint;
}


// Function Equus_Character_BP.Equus_Character_BP_C.IncreaseTamingAffinity
// ()

void AEquus_Character_BP_C::IncreaseTamingAffinity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.IncreaseTamingAffinity");

	AEquus_Character_BP_C_IncreaseTamingAffinity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AEquus_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.BPDoAttack");

	AEquus_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.Reset Buck Taming Stats
// ()
// Parameters:
// bool                           ForceReset                     (Parm, ZeroConstructor, IsPlainOldData)

void AEquus_Character_BP_C::Reset_Buck_Taming_Stats(bool ForceReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.Reset Buck Taming Stats");

	AEquus_Character_BP_C_Reset_Buck_Taming_Stats_Params params;
	params.ForceReset = ForceReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void AEquus_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.BPSetupTamed");

	AEquus_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.BPPreventInputType
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEquus_Character_BP_C::BPPreventInputType(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.BPPreventInputType");

	AEquus_Character_BP_C_BPPreventInputType_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Equus_Character_BP.Equus_Character_BP_C.ForceDismount
// ()

void AEquus_Character_BP_C::ForceDismount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.ForceDismount");

	AEquus_Character_BP_C_ForceDismount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.ConsumeValidFood
// ()
// Parameters:
// bool                           DidConsumeFood                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          EffectivenessMultiplier        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEquus_Character_BP_C::ConsumeValidFood(bool* DidConsumeFood, float* EffectivenessMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.ConsumeValidFood");

	AEquus_Character_BP_C_ConsumeValidFood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DidConsumeFood != nullptr)
		*DidConsumeFood = params.DidConsumeFood;
	if (EffectivenessMultiplier != nullptr)
		*EffectivenessMultiplier = params.EffectivenessMultiplier;
}


// Function Equus_Character_BP.Equus_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AEquus_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.BPNotifySetRider");

	AEquus_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.BPTimerServer
// ()

void AEquus_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.BPTimerServer");

	AEquus_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.BPUntamedConsumeFoodItem
// ()
// Parameters:
// class UPrimalItem**            foodItem                       (Parm, ZeroConstructor, IsPlainOldData)

void AEquus_Character_BP_C::BPUntamedConsumeFoodItem(class UPrimalItem** foodItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.BPUntamedConsumeFoodItem");

	AEquus_Character_BP_C_BPUntamedConsumeFoodItem_Params params;
	params.foodItem = foodItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.UserConstructionScript
// ()

void AEquus_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.UserConstructionScript");

	AEquus_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.StartMount
// ()
// Parameters:
// class AShooterCharacter*       TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData)

void AEquus_Character_BP_C::StartMount(class AShooterCharacter* TargetPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.StartMount");

	AEquus_Character_BP_C_StartMount_Params params;
	params.TargetPlayer = TargetPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.ThrowPlayerOrTame
// ()
// Parameters:
// float                          BuckAnimLength                 (Parm, ZeroConstructor, IsPlainOldData)

void AEquus_Character_BP_C::ThrowPlayerOrTame(float BuckAnimLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.ThrowPlayerOrTame");

	AEquus_Character_BP_C_ThrowPlayerOrTame_Params params;
	params.BuckAnimLength = BuckAnimLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.SetAllowRiding
// ()
// Parameters:
// bool                           ShouldAllow                    (Parm, ZeroConstructor, IsPlainOldData)

void AEquus_Character_BP_C::SetAllowRiding(bool ShouldAllow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.SetAllowRiding");

	AEquus_Character_BP_C_SetAllowRiding_Params params;
	params.ShouldAllow = ShouldAllow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.Server_PlayFedSound
// ()

void AEquus_Character_BP_C::Server_PlayFedSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.Server_PlayFedSound");

	AEquus_Character_BP_C_Server_PlayFedSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.ClearBucking
// ()

void AEquus_Character_BP_C::ClearBucking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.ClearBucking");

	AEquus_Character_BP_C_ClearBucking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.Server_PlayStoleFoodSound
// ()

void AEquus_Character_BP_C::Server_PlayStoleFoodSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.Server_PlayStoleFoodSound");

	AEquus_Character_BP_C_Server_PlayStoleFoodSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.PathingInput
// ()

void AEquus_Character_BP_C::PathingInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.PathingInput");

	AEquus_Character_BP_C_PathingInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.Server_Path
// ()

void AEquus_Character_BP_C::Server_Path()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.Server_Path");

	AEquus_Character_BP_C_Server_Path_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.Multi_UpdateRandomDestination
// ()
// Parameters:
// struct FVector                 Destination                    (Parm, ZeroConstructor, IsPlainOldData)

void AEquus_Character_BP_C::Multi_UpdateRandomDestination(const struct FVector& Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.Multi_UpdateRandomDestination");

	AEquus_Character_BP_C_Multi_UpdateRandomDestination_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.ThrowOrTameNoDelay
// ()

void AEquus_Character_BP_C::ThrowOrTameNoDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.ThrowOrTameNoDelay");

	AEquus_Character_BP_C_ThrowOrTameNoDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.RespondToDismount
// ()

void AEquus_Character_BP_C::RespondToDismount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.RespondToDismount");

	AEquus_Character_BP_C_RespondToDismount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Equus_Character_BP.Equus_Character_BP_C.ExecuteUbergraph_Equus_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEquus_Character_BP_C::ExecuteUbergraph_Equus_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Equus_Character_BP.Equus_Character_BP_C.ExecuteUbergraph_Equus_Character_BP");

	AEquus_Character_BP_C_ExecuteUbergraph_Equus_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
