// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Direwolf_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Direwolf_Character_BP.Direwolf_Character_BP_C.RidingTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADirewolf_Character_BP_C::RidingTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.RidingTick");

	ADirewolf_Character_BP_C_RidingTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direwolf_Character_BP.Direwolf_Character_BP_C.AddHowlCooldownBuff
// (NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport)

void ADirewolf_Character_BP_C::STATIC_AddHowlCooldownBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.AddHowlCooldownBuff");

	ADirewolf_Character_BP_C_AddHowlCooldownBuff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direwolf_Character_BP.Direwolf_Character_BP_C.PackRoar
// ()

void ADirewolf_Character_BP_C::PackRoar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.PackRoar");

	ADirewolf_Character_BP_C_PackRoar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direwolf_Character_BP.Direwolf_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ADirewolf_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.BlueprintDrawFloatingHUD");

	ADirewolf_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direwolf_Character_BP.Direwolf_Character_BP_C.GatherPack
// ()

void ADirewolf_Character_BP_C::GatherPack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.GatherPack");

	ADirewolf_Character_BP_C_GatherPack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void ADirewolf_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPDoAttack");

	ADirewolf_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direwolf_Character_BP.Direwolf_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** meshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADirewolf_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	ADirewolf_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.meshComp = meshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direwolf_Character_BP.Direwolf_Character_BP_C.DoSniffAbility
// ()

void ADirewolf_Character_BP_C::DoSniffAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.DoSniffAbility");

	ADirewolf_Character_BP_C_DoSniffAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direwolf_Character_BP.Direwolf_Character_BP_C.GetHiddenDinos
// ()
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          foundDinos                     (Parm, OutParm, ZeroConstructor)

void ADirewolf_Character_BP_C::GetHiddenDinos(float Radius, TArray<class AActor*>* foundDinos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.GetHiddenDinos");

	ADirewolf_Character_BP_C_GetHiddenDinos_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (foundDinos != nullptr)
		*foundDinos = params.foundDinos;
}


// Function Direwolf_Character_BP.Direwolf_Character_BP_C.GetExplorerChestsInRange
// ()
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          FoundExplorerChests            (Parm, OutParm, ZeroConstructor)

void ADirewolf_Character_BP_C::GetExplorerChestsInRange(float Radius, TArray<class AActor*>* FoundExplorerChests)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.GetExplorerChestsInRange");

	ADirewolf_Character_BP_C_GetExplorerChestsInRange_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundExplorerChests != nullptr)
		*FoundExplorerChests = params.FoundExplorerChests;
}


// Function Direwolf_Character_BP.Direwolf_Character_BP_C.UpdateSniffedTargets
// ()

void ADirewolf_Character_BP_C::UpdateSniffedTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.UpdateSniffedTargets");

	ADirewolf_Character_BP_C_UpdateSniffedTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPDrawToRiderHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)

void ADirewolf_Character_BP_C::BPDrawToRiderHUD(class AShooterHUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPDrawToRiderHUD");

	ADirewolf_Character_BP_C_BPDrawToRiderHUD_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direwolf_Character_BP.Direwolf_Character_BP_C.DrawSniffedTargets
// ()
// Parameters:
// class AHUD*                    HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          LowHealthTargets               (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          HiddenTargets                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          ExplorerChests                 (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ADirewolf_Character_BP_C::DrawSniffedTargets(class AHUD* HUD, TArray<class AActor*>* LowHealthTargets, TArray<class AActor*>* HiddenTargets, TArray<class AActor*>* ExplorerChests)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.DrawSniffedTargets");

	ADirewolf_Character_BP_C_DrawSniffedTargets_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LowHealthTargets != nullptr)
		*LowHealthTargets = params.LowHealthTargets;
	if (HiddenTargets != nullptr)
		*HiddenTargets = params.HiddenTargets;
	if (ExplorerChests != nullptr)
		*ExplorerChests = params.ExplorerChests;
}


// Function Direwolf_Character_BP.Direwolf_Character_BP_C.GetEnemysBelowHealthTreshold
// ()
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          HealthTreshold                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          FoundActors                    (Parm, OutParm, ZeroConstructor)

void ADirewolf_Character_BP_C::GetEnemysBelowHealthTreshold(float Radius, float HealthTreshold, TArray<class AActor*>* FoundActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.GetEnemysBelowHealthTreshold");

	ADirewolf_Character_BP_C_GetEnemysBelowHealthTreshold_Params params;
	params.Radius = Radius;
	params.HealthTreshold = HealthTreshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundActors != nullptr)
		*FoundActors = params.FoundActors;
}


// Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ADirewolf_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPNotifyClearRider");

	ADirewolf_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ADirewolf_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPNotifySetRider");

	ADirewolf_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPModifyHarvestingQuantity
// ()
// Parameters:
// float*                         originalQuantity               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 resourceSelected               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADirewolf_Character_BP_C::BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.BPModifyHarvestingQuantity");

	ADirewolf_Character_BP_C_BPModifyHarvestingQuantity_Params params;
	params.originalQuantity = originalQuantity;
	params.resourceSelected = resourceSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Direwolf_Character_BP.Direwolf_Character_BP_C.UserConstructionScript
// ()

void ADirewolf_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.UserConstructionScript");

	ADirewolf_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direwolf_Character_BP.Direwolf_Character_BP_C.ExecuteUbergraph_Direwolf_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADirewolf_Character_BP_C::ExecuteUbergraph_Direwolf_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direwolf_Character_BP.Direwolf_Character_BP_C.ExecuteUbergraph_Direwolf_Character_BP");

	ADirewolf_Character_BP_C_ExecuteUbergraph_Direwolf_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
