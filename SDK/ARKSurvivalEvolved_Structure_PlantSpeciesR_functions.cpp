// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_PlantSpeciesR_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.RefreshIdleAudio
// ()

void AStructure_PlantSpeciesR_C::RefreshIdleAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.RefreshIdleAudio");

	AStructure_PlantSpeciesR_C_RefreshIdleAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BPOnDemolish
// (NetReliable, NetRequest, Event, Static, Private, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesR_C::STATIC_BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BPOnDemolish");

	AStructure_PlantSpeciesR_C_BPOnDemolish_Params params;
	params.ForPC = ForPC;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.ClearLastHitRot
// ()

void AStructure_PlantSpeciesR_C::ClearLastHitRot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.ClearLastHitRot");

	AStructure_PlantSpeciesR_C_ClearLastHitRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.FillHarvestHealth
// (NetReliable, Native, Event, Static, Private, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)

void AStructure_PlantSpeciesR_C::STATIC_FillHarvestHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.FillHarvestHealth");

	AStructure_PlantSpeciesR_C_FillHarvestHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.OnRep_HarvestHealth
// ()

void AStructure_PlantSpeciesR_C::OnRep_HarvestHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.OnRep_HarvestHealth");

	AStructure_PlantSpeciesR_C_OnRep_HarvestHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.PlayHarvestVFX
// ()
// Parameters:
// struct UObject_FTransform      Transform                      (Parm, IsPlainOldData)

void AStructure_PlantSpeciesR_C::PlayHarvestVFX(const struct UObject_FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.PlayHarvestVFX");

	AStructure_PlantSpeciesR_C_PlayHarvestVFX_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.SetPlantEmissivePercent
// ()
// Parameters:
// float                          NewEmissiveVal                 (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesR_C::SetPlantEmissivePercent(float NewEmissiveVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.SetPlantEmissivePercent");

	AStructure_PlantSpeciesR_C_SetPlantEmissivePercent_Params params;
	params.NewEmissiveVal = NewEmissiveVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.ReceiveBeginPlay
// ()

void AStructure_PlantSpeciesR_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.ReceiveBeginPlay");

	AStructure_PlantSpeciesR_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.SetHarvestClassColor
// ()

void AStructure_PlantSpeciesR_C::SetHarvestClassColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.SetHarvestClassColor");

	AStructure_PlantSpeciesR_C_SetHarvestClassColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BPUpdatedHealth
// ()
// Parameters:
// bool*                          bDoReplication                 (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesR_C::BPUpdatedHealth(bool* bDoReplication)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BPUpdatedHealth");

	AStructure_PlantSpeciesR_C_BPUpdatedHealth_Params params;
	params.bDoReplication = bDoReplication;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.FindOrCreateDynamicMaterials
// ()
// Parameters:
// TArray<class UMaterialInstanceDynamic*> DynamicMaterials               (Parm, OutParm, ZeroConstructor)

void AStructure_PlantSpeciesR_C::FindOrCreateDynamicMaterials(TArray<class UMaterialInstanceDynamic*>* DynamicMaterials)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.FindOrCreateDynamicMaterials");

	AStructure_PlantSpeciesR_C_FindOrCreateDynamicMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DynamicMaterials != nullptr)
		*DynamicMaterials = params.DynamicMaterials;
}


// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BPAdjustDamage
// (NetReliable, NetRequest, Native, Event, NetMulticast, Private, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AStructure_PlantSpeciesR_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BPAdjustDamage");

	AStructure_PlantSpeciesR_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BlueprintDrawHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesR_C::BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BlueprintDrawHUD");

	AStructure_PlantSpeciesR_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.UserConstructionScript
// ()

void AStructure_PlantSpeciesR_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.UserConstructionScript");

	AStructure_PlantSpeciesR_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.Timeline_UpdateMatZHeight__FinishedFunc
// ()

void AStructure_PlantSpeciesR_C::Timeline_UpdateMatZHeight__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.Timeline_UpdateMatZHeight__FinishedFunc");

	AStructure_PlantSpeciesR_C_Timeline_UpdateMatZHeight__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.Timeline_UpdateMatZHeight__UpdateFunc
// ()

void AStructure_PlantSpeciesR_C::Timeline_UpdateMatZHeight__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.Timeline_UpdateMatZHeight__UpdateFunc");

	AStructure_PlantSpeciesR_C_Timeline_UpdateMatZHeight__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.Multi_UpdateHarvestVFX
// ()
// Parameters:
// struct UObject_FTransform      Transform                      (Parm, IsPlainOldData)
// int                            AnimIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesR_C::Multi_UpdateHarvestVFX(const struct UObject_FTransform& Transform, int AnimIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.Multi_UpdateHarvestVFX");

	AStructure_PlantSpeciesR_C_Multi_UpdateHarvestVFX_Params params;
	params.Transform = Transform;
	params.AnimIndex = AnimIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.UpdateMatZHeight
// ()
// Parameters:
// bool                           Retracted                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Instant                        (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesR_C::UpdateMatZHeight(bool Retracted, bool Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.UpdateMatZHeight");

	AStructure_PlantSpeciesR_C_UpdateMatZHeight_Params params;
	params.Retracted = Retracted;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.ExecuteUbergraph_Structure_PlantSpeciesR
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_PlantSpeciesR_C::ExecuteUbergraph_Structure_PlantSpeciesR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.ExecuteUbergraph_Structure_PlantSpeciesR");

	AStructure_PlantSpeciesR_C_ExecuteUbergraph_Structure_PlantSpeciesR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
