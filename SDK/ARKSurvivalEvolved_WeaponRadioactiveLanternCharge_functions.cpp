// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeaponRadioactiveLanternCharge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.GetNumBatteries
// ()
// Parameters:
// int                            numBatteries                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::GetNumBatteries(int* numBatteries)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.GetNumBatteries");

	AWeaponRadioactiveLanternCharge_C_GetNumBatteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (numBatteries != nullptr)
		*numBatteries = params.numBatteries;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Get Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::Get_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Get Charge Variable Interface");

	AWeaponRadioactiveLanternCharge_C_Get_Charge_Variable_Interface_Params params;
	params.variableType = variableType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (fValue != nullptr)
		*fValue = params.fValue;
	if (dValue != nullptr)
		*dValue = params.dValue;
	if (bBValue != nullptr)
		*bBValue = params.bBValue;
	if (iValue != nullptr)
		*iValue = params.iValue;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.RemoveAllBeamsServer
// ()

void AWeaponRadioactiveLanternCharge_C::RemoveAllBeamsServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.RemoveAllBeamsServer");

	AWeaponRadioactiveLanternCharge_C_RemoveAllBeamsServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.IsFreeBeamForActor
// ()
// Parameters:
// class AActor*                  forActor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isFreeBeam                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::IsFreeBeamForActor(class AActor* forActor, bool* isFreeBeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.IsFreeBeamForActor");

	AWeaponRadioactiveLanternCharge_C_IsFreeBeamForActor_Params params;
	params.forActor = forActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isFreeBeam != nullptr)
		*isFreeBeam = params.isFreeBeam;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPPrefireAction
// ()

void AWeaponRadioactiveLanternCharge_C::BPPrefireAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPPrefireAction");

	AWeaponRadioactiveLanternCharge_C_BPPrefireAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.RechargeFromMaxBattery
// ()
// Parameters:
// bool                           couldRecharge                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::RechargeFromMaxBattery(bool* couldRecharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.RechargeFromMaxBattery");

	AWeaponRadioactiveLanternCharge_C_RechargeFromMaxBattery_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (couldRecharge != nullptr)
		*couldRecharge = params.couldRecharge;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPWeaponCanFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeaponRadioactiveLanternCharge_C::BPWeaponCanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPWeaponCanFire");

	AWeaponRadioactiveLanternCharge_C_BPWeaponCanFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UpdateMaterial
// ()
// Parameters:
// class UMaterialInstanceDynamic* dynamicMaterial                (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::UpdateMaterial(class UMaterialInstanceDynamic* dynamicMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UpdateMaterial");

	AWeaponRadioactiveLanternCharge_C_UpdateMaterial_Params params;
	params.dynamicMaterial = dynamicMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyChargeBuff
// ()

void AWeaponRadioactiveLanternCharge_C::DestroyChargeBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyChargeBuff");

	AWeaponRadioactiveLanternCharge_C_DestroyChargeBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPAdjustAmmoPerShot
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWeaponRadioactiveLanternCharge_C::BPAdjustAmmoPerShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPAdjustAmmoPerShot");

	AWeaponRadioactiveLanternCharge_C_BPAdjustAmmoPerShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.SetBeamIntensity
// ()
// Parameters:
// class UParticleSystemComponent* BeamComponent                  (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::SetBeamIntensity(class UParticleSystemComponent* BeamComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.SetBeamIntensity");

	AWeaponRadioactiveLanternCharge_C_SetBeamIntensity_Params params;
	params.BeamComponent = BeamComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPSecondaryAction
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeaponRadioactiveLanternCharge_C::BPSecondaryAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPSecondaryAction");

	AWeaponRadioactiveLanternCharge_C_BPSecondaryAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.GetLightMultiplier
// ()
// Parameters:
// float                          lightMultiplier                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::GetLightMultiplier(float* lightMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.GetLightMultiplier");

	AWeaponRadioactiveLanternCharge_C_GetLightMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lightMultiplier != nullptr)
		*lightMultiplier = params.lightMultiplier;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPWaitingForPlacement
// ()

void AWeaponRadioactiveLanternCharge_C::BPWaitingForPlacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPWaitingForPlacement");

	AWeaponRadioactiveLanternCharge_C_BPWaitingForPlacement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CheckIfFireStopped
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::CheckIfFireStopped(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CheckIfFireStopped");

	AWeaponRadioactiveLanternCharge_C_CheckIfFireStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UpdateLightEffects
// ()

void AWeaponRadioactiveLanternCharge_C::UpdateLightEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UpdateLightEffects");

	AWeaponRadioactiveLanternCharge_C_UpdateLightEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Update MaterialsAndParticles
// ()
// Parameters:
// bool                           couldUpdateMaterial            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::Update_MaterialsAndParticles(bool* couldUpdateMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Update MaterialsAndParticles");

	AWeaponRadioactiveLanternCharge_C_Update_MaterialsAndParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (couldUpdateMaterial != nullptr)
		*couldUpdateMaterial = params.couldUpdateMaterial;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DisableFiringEffects
// ()

void AWeaponRadioactiveLanternCharge_C::DisableFiringEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DisableFiringEffects");

	AWeaponRadioactiveLanternCharge_C_DisableFiringEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.InitializeFiringEffects
// ()

void AWeaponRadioactiveLanternCharge_C::InitializeFiringEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.InitializeFiringEffects");

	AWeaponRadioactiveLanternCharge_C_InitializeFiringEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DetectChupasAndTriggerBeams
// ()

void AWeaponRadioactiveLanternCharge_C::DetectChupasAndTriggerBeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DetectChupasAndTriggerBeams");

	AWeaponRadioactiveLanternCharge_C_DetectChupasAndTriggerBeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStopFiring
// ()

void AWeaponRadioactiveLanternCharge_C::OnStopFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStopFiring");

	AWeaponRadioactiveLanternCharge_C_OnStopFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyBeamForTarget
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrimalCharacter*        forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::STATIC_DestroyBeamForTarget(class APrimalCharacter* forCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyBeamForTarget");

	AWeaponRadioactiveLanternCharge_C_DestroyBeamForTarget_Params params;
	params.forCharacter = forCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyBeamVisuals
// ()
// Parameters:
// struct FSTR_ChargeBeamInfo     beamInfo                       (Parm)

void AWeaponRadioactiveLanternCharge_C::DestroyBeamVisuals(const struct FSTR_ChargeBeamInfo& beamInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyBeamVisuals");

	AWeaponRadioactiveLanternCharge_C_DestroyBeamVisuals_Params params;
	params.beamInfo = beamInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ServerTick
// ()

void AWeaponRadioactiveLanternCharge_C::ServerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ServerTick");

	AWeaponRadioactiveLanternCharge_C_ServerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ClientTick
// (NetRequest, Native, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void AWeaponRadioactiveLanternCharge_C::ClientTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ClientTick");

	AWeaponRadioactiveLanternCharge_C_ClientTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Remove All BeamsClient
// (NetRequest, Exec, Native, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void AWeaponRadioactiveLanternCharge_C::Remove_All_BeamsClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Remove All BeamsClient");

	AWeaponRadioactiveLanternCharge_C_Remove_All_BeamsClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ReceiveDestroyed
// ()

void AWeaponRadioactiveLanternCharge_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ReceiveDestroyed");

	AWeaponRadioactiveLanternCharge_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.TryAddNewBeam
// ()
// Parameters:
// class AActor*                  forActor                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::TryAddNewBeam(class AActor* forActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.TryAddNewBeam");

	AWeaponRadioactiveLanternCharge_C_TryAddNewBeam_Params params;
	params.forActor = forActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.StartUnequipEvent
// ()

void AWeaponRadioactiveLanternCharge_C::StartUnequipEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.StartUnequipEvent");

	AWeaponRadioactiveLanternCharge_C_StartUnequipEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Should Remove Beam
// ()
// Parameters:
// struct FSTR_ChargeBeamInfo     beamInfo                       (Parm)
// bool                           shouldRemove                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::Should_Remove_Beam(const struct FSTR_ChargeBeamInfo& beamInfo, bool* shouldRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Should Remove Beam");

	AWeaponRadioactiveLanternCharge_C_Should_Remove_Beam_Params params;
	params.beamInfo = beamInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldRemove != nullptr)
		*shouldRemove = params.shouldRemove;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Update Impact Particles
// ()
// Parameters:
// struct FSTR_ChargeBeamInfo     beamInfo                       (Parm)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::Update_Impact_Particles(const struct FSTR_ChargeBeamInfo& beamInfo, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Update Impact Particles");

	AWeaponRadioactiveLanternCharge_C_Update_Impact_Particles_Params params;
	params.beamInfo = beamInfo;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.SetEndPoints
// ()
// Parameters:
// class UParticleSystemComponent* beam                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndPoint1                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 endPoint2                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 endPoint3                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::SetEndPoints(class UParticleSystemComponent* beam, const struct FVector& EndPoint1, const struct FVector& endPoint2, const struct FVector& endPoint3)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.SetEndPoints");

	AWeaponRadioactiveLanternCharge_C_SetEndPoints_Params params;
	params.beam = beam;
	params.EndPoint1 = EndPoint1;
	params.endPoint2 = endPoint2;
	params.endPoint3 = endPoint3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ConnectBeamToTarget
// ()
// Parameters:
// struct FSTR_ChargeBeamInfo     beamInfo                       (Parm)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::ConnectBeamToTarget(const struct FSTR_ChargeBeamInfo& beamInfo, int index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ConnectBeamToTarget");

	AWeaponRadioactiveLanternCharge_C_ConnectBeamToTarget_Params params;
	params.beamInfo = beamInfo;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CreateNewBeam
// (NetReliable, Native, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AActor*                  ToActor                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::STATIC_CreateNewBeam(class AActor* ToActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CreateNewBeam");

	AWeaponRadioactiveLanternCharge_C_CreateNewBeam_Params params;
	params.ToActor = ToActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ShouldRemoveBeamForTarget
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           shouldRemove                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::ShouldRemoveBeamForTarget(class APrimalCharacter* Character, bool* shouldRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ShouldRemoveBeamForTarget");

	AWeaponRadioactiveLanternCharge_C_ShouldRemoveBeamForTarget_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldRemove != nullptr)
		*shouldRemove = params.shouldRemove;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.RemoveBeamTarget_Server
// ()
// Parameters:
// class AActor*                  BeamTarget                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::RemoveBeamTarget_Server(class AActor* BeamTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.RemoveBeamTarget_Server");

	AWeaponRadioactiveLanternCharge_C_RemoveBeamTarget_Server_Params params;
	params.BeamTarget = BeamTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UpdateCharge
// ()
// Parameters:
// bool                           ShouldActivate                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::UpdateCharge(bool ShouldActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UpdateCharge");

	AWeaponRadioactiveLanternCharge_C_UpdateCharge_Params params;
	params.ShouldActivate = ShouldActivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.EffectsDisableCheck
// ()

void AWeaponRadioactiveLanternCharge_C::EffectsDisableCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.EffectsDisableCheck");

	AWeaponRadioactiveLanternCharge_C_EffectsDisableCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPFiredWeapon
// ()

void AWeaponRadioactiveLanternCharge_C::BPFiredWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPFiredWeapon");

	AWeaponRadioactiveLanternCharge_C_BPFiredWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.StartSecondaryActionEvent
// ()

void AWeaponRadioactiveLanternCharge_C::StartSecondaryActionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.StartSecondaryActionEvent");

	AWeaponRadioactiveLanternCharge_C_StartSecondaryActionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UserConstructionScript
// ()

void AWeaponRadioactiveLanternCharge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.UserConstructionScript");

	AWeaponRadioactiveLanternCharge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightFlickerTimeline__FinishedFunc
// ()

void AWeaponRadioactiveLanternCharge_C::LightFlickerTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightFlickerTimeline__FinishedFunc");

	AWeaponRadioactiveLanternCharge_C_LightFlickerTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightFlickerTimeline__UpdateFunc
// ()

void AWeaponRadioactiveLanternCharge_C::LightFlickerTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightFlickerTimeline__UpdateFunc");

	AWeaponRadioactiveLanternCharge_C_LightFlickerTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightTurnOffTimeline__FinishedFunc
// ()

void AWeaponRadioactiveLanternCharge_C::LightTurnOffTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightTurnOffTimeline__FinishedFunc");

	AWeaponRadioactiveLanternCharge_C_LightTurnOffTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightTurnOffTimeline__UpdateFunc
// ()

void AWeaponRadioactiveLanternCharge_C::LightTurnOffTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.LightTurnOffTimeline__UpdateFunc");

	AWeaponRadioactiveLanternCharge_C_LightTurnOffTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::Charge_Variable_Event_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Interface");

	AWeaponRadioactiveLanternCharge_C_Charge_Variable_Event_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Trigger Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            iVariable                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::Charge_Variable_Event_Trigger_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iVariable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Trigger Multicast Interface");

	AWeaponRadioactiveLanternCharge_C_Charge_Variable_Event_Trigger_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;
	params.fValue = fValue;
	params.dValue = dValue;
	params.iVariable = iVariable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Interface Check for Batteries and Update Multicast
// ()

void AWeaponRadioactiveLanternCharge_C::Interface_Check_for_Batteries_and_Update_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Interface Check for Batteries and Update Multicast");

	AWeaponRadioactiveLanternCharge_C_Interface_Check_for_Batteries_and_Update_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Double MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::Charge_Variable_Event_Double_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Double MulticastInterface");

	AWeaponRadioactiveLanternCharge_C_Charge_Variable_Event_Double_MulticastInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventDoubleInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::ChargeVariableEventDoubleInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventDoubleInterface");

	AWeaponRadioactiveLanternCharge_C_ChargeVariableEventDoubleInterface_Params params;
	params.variableType = variableType;
	params.dValue = dValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventIntInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::ChargeVariableEventIntInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventIntInterface");

	AWeaponRadioactiveLanternCharge_C_ChargeVariableEventIntInterface_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventIntMulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::ChargeVariableEventIntMulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventIntMulticastInterface");

	AWeaponRadioactiveLanternCharge_C_ChargeVariableEventIntMulticastInterface_Params params;
	params.variableType = variableType;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ReceiveBeginPlay
// ()

void AWeaponRadioactiveLanternCharge_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ReceiveBeginPlay");

	AWeaponRadioactiveLanternCharge_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnNewActorAffected_Multicast
// ()
// Parameters:
// class AActor*                  actorAffected                  (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::OnNewActorAffected_Multicast(class AActor* actorAffected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnNewActorAffected_Multicast");

	AWeaponRadioactiveLanternCharge_C_OnNewActorAffected_Multicast_Params params;
	params.actorAffected = actorAffected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyBeamForTarget_Multicast
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::DestroyBeamForTarget_Multicast(class APrimalCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DestroyBeamForTarget_Multicast");

	AWeaponRadioactiveLanternCharge_C_DestroyBeamForTarget_Multicast_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.PlayLanternCameraShake
// ()

void AWeaponRadioactiveLanternCharge_C::PlayLanternCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.PlayLanternCameraShake");

	AWeaponRadioactiveLanternCharge_C_PlayLanternCameraShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CreateChargeManager
// ()

void AWeaponRadioactiveLanternCharge_C::CreateChargeManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CreateChargeManager");

	AWeaponRadioactiveLanternCharge_C_CreateChargeManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Set Charge Variable Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicast                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         dValue                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           triggerEvent                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           multicastEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            iValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::Set_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int iValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Set Charge Variable Interface");

	AWeaponRadioactiveLanternCharge_C_Set_Charge_Variable_Interface_Params params;
	params.variableType = variableType;
	params.multicast = multicast;
	params.fValue = fValue;
	params.dValue = dValue;
	params.bBValue = bBValue;
	params.triggerEvent = triggerEvent;
	params.multicastEvent = multicastEvent;
	params.iValue = iValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.FiringBeamLogic
// ()

void AWeaponRadioactiveLanternCharge_C::FiringBeamLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.FiringBeamLogic");

	AWeaponRadioactiveLanternCharge_C_FiringBeamLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStartFiring
// ()

void AWeaponRadioactiveLanternCharge_C::OnStartFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStartFiring");

	AWeaponRadioactiveLanternCharge_C_OnStartFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Boolean
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::ChargeVariableEvent_Boolean(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Boolean");

	AWeaponRadioactiveLanternCharge_C_ChargeVariableEvent_Boolean_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Float
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::ChargeVariableEvent_Float(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Float");

	AWeaponRadioactiveLanternCharge_C_ChargeVariableEvent_Float_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Float_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::ChargeVariableEvent_Float_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Float_Multicast");

	AWeaponRadioactiveLanternCharge_C_ChargeVariableEvent_Float_Multicast_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Boolean Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::Charge_Variable_Event_Boolean_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Boolean Interface");

	AWeaponRadioactiveLanternCharge_C_Charge_Variable_Event_Boolean_Interface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventFloatInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::ChargeVariableEventFloatInterface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEventFloatInterface");

	AWeaponRadioactiveLanternCharge_C_ChargeVariableEventFloatInterface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Boolean_Multicast
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::ChargeVariableEvent_Boolean_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ChargeVariableEvent_Boolean_Multicast");

	AWeaponRadioactiveLanternCharge_C_ChargeVariableEvent_Boolean_Multicast_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Boolean MulticastInterface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBValue                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::Charge_Variable_Event_Boolean_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Boolean MulticastInterface");

	AWeaponRadioactiveLanternCharge_C_Charge_Variable_Event_Boolean_MulticastInterface_Params params;
	params.variableType = variableType;
	params.bBValue = bBValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Float Multicast Interface
// ()
// Parameters:
// TEnumAsByte<E_ChargeVariableNames> variableType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          fValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::Charge_Variable_Event_Float_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.Charge Variable Event Float Multicast Interface");

	AWeaponRadioactiveLanternCharge_C_Charge_Variable_Event_Float_Multicast_Interface_Params params;
	params.variableType = variableType;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DoLightFlicker
// ()
// Parameters:
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::DoLightFlicker(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.DoLightFlicker");

	AWeaponRadioactiveLanternCharge_C_DoLightFlicker_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.InitialMaterialUpdate
// ()

void AWeaponRadioactiveLanternCharge_C::InitialMaterialUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.InitialMaterialUpdate");

	AWeaponRadioactiveLanternCharge_C_InitialMaterialUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.TurnOffLight
// ()

void AWeaponRadioactiveLanternCharge_C::TurnOffLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.TurnOffLight");

	AWeaponRadioactiveLanternCharge_C_TurnOffLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStopFiring_Multicast
// ()

void AWeaponRadioactiveLanternCharge_C::OnStopFiring_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStopFiring_Multicast");

	AWeaponRadioactiveLanternCharge_C_OnStopFiring_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CancelPlacement
// ()

void AWeaponRadioactiveLanternCharge_C::CancelPlacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.CancelPlacement");

	AWeaponRadioactiveLanternCharge_C_CancelPlacement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.BPAnimNotifyCustomEvent");

	AWeaponRadioactiveLanternCharge_C_BPAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.InitialMeterAnim
// ()

void AWeaponRadioactiveLanternCharge_C::InitialMeterAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.InitialMeterAnim");

	AWeaponRadioactiveLanternCharge_C_InitialMeterAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStartFiring_Multicast
// ()

void AWeaponRadioactiveLanternCharge_C::OnStartFiring_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.OnStartFiring_Multicast");

	AWeaponRadioactiveLanternCharge_C_OnStartFiring_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ExecuteUbergraph_WeaponRadioactiveLanternCharge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRadioactiveLanternCharge_C::ExecuteUbergraph_WeaponRadioactiveLanternCharge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C.ExecuteUbergraph_WeaponRadioactiveLanternCharge");

	AWeaponRadioactiveLanternCharge_C_ExecuteUbergraph_WeaponRadioactiveLanternCharge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
