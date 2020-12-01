#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeEmitter.Buff_ChargeEmitter_C
// 0x0148 (0x0AB8 - 0x0970)
class ABuff_ChargeEmitter_C : public ABuff_ChargeManager_C
{
public:
	class UStaticMeshComponent*                        ChargeSphereSolid;                                        // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            ChargeSphere;                                             // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTimeline_FadeOutAlpha_0773ADF748C88887CC468C8F12C3B3D9;// 0x0980(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeOutTimeline__Direction_0773ADF748C88887CC468C8F12C3B3D9;// 0x0984(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0985(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeOutTimeline;                                          // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeInTimeline_FadeInAlpha_BFB4480A4B7ADE83F853E2ABF3FD6FBD;// 0x0990(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeInTimeline__Direction_BFB4480A4B7ADE83F853E2ABF3FD6FBD;// 0x0994(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0995(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeInTimeline;                                           // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              emitterAngle;                                             // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               doTraceToTarget;                                          // 0x09A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x09A5(0x0003) MISSED OFFSET
	float                                              chargeEffectFadeInDuration;                               // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              chargeEffectFadeOutDuration;                              // 0x09AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               usesEmitterEffects;                                       // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x09B1(0x0003) MISSED OFFSET
	float                                              solidEffectScaleMultiplier;                               // 0x09B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               consumesChargeWhenEmitting;                               // 0x09B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               allowsHarvesting;                                         // 0x09B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               harvestRechargesBatteries;                                // 0x09BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x09BB(0x0001) MISSED OFFSET
	float                                              harvestingCooldown;                                       // 0x09BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      cantHarvestString;                                        // 0x09C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      attachmentSocket;                                         // 0x09D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bForceUseActorEnteredEmitterArea;                         // 0x09E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x09E1(0x0007) MISSED OFFSET
	TArray<class ABuff_ChargeManager_C*>               currentReceiversConsumingCharge;                          // 0x09E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<float>                                      consumedChargeForReceiverMultiplier;                      // 0x09F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<E_ChargeManagerType>>           consumeChargeForReceiverType;                             // 0x0A08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      cantHarvestFullPetString;                                 // 0x0A18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0A28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0A29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0A2A(0x0002) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x0A2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x0A30(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x0A34(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0A35(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x0A36(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x0A37(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x0A38(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0A44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x0A48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0A49(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x0A4C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x0A58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0A59(0x0007) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_GetMaterial_ReturnValue;                         // 0x0A60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic;             // 0x0A68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0A70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0A71(0x0007) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_GetMaterial_ReturnValue2;                        // 0x0A78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue;       // 0x0A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0A88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0A89(0x0007) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_GetMaterial_ReturnValue3;                        // 0x0A90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic2;            // 0x0A98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0AA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0AA1(0x0003) MISSED OFFSET
	float                                              CallFunc_Get_Charge_Variable_fValue;                      // 0x0AA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Get_Charge_Variable_dValue;                      // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Get_Charge_Variable_bBValue;                     // 0x0AB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0AB1(0x0003) MISSED OFFSET
	int                                                CallFunc_Get_Charge_Variable_iValue;                      // 0x0AB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitter.Buff_ChargeEmitter_C");
		return ptr;
	}


	void EmitterIsBuffOfType(TEnumAsByte<E_ChargeManagerType> typeToCheck, bool* isOfType);
	void Get_Extra_Charge_Consumed_Multiplier_for_Receiver(class ABuff_ChargeManager_C* Receiver, float* retMultiplier);
	void GetDistanceAndAngleCheckOrigin(class AActor* emitterActor, struct FVector* distanceAngleOrigin);
	void TakeChargeConsumedByReceivers(float chargeToTake);
	void GetChargeVariableExternalEmitter(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* ivalue);
	void ShouldProcessChargeConsumedByReceivers(bool* shouldProcess);
	void OnChargeConsumedByReceiversChanged(float newCharge);
	void WillReceiverAffectChargeConsumption(class ABuff_ChargeManager_C* Receiver, bool* canProcess);
	void Is_Valid_Receiver_for_Charge_Consumption(class ABuff_ChargeManager_C* Receiver, bool* IsValid);
	void Process_Charge_Consumed_by_Receivers();
	void Can_Process_New_Receiver_For_Charge_Consumption(bool* canProcess);
	void GetRadiusForDistanceCheck(float* radiusForCheck);
	void OnActorEnteredEmitterArea(class AActor* enteringActor);
	void GetEmitterLineTraceOrigin(class AActor* emitterActor, struct FVector* lineTraceOrigin);
	void On_EnteredEmitterRadius(class ABuff_ChargeManager_C* chargeReceiver);
	void GetActorsToIgnoreOnRaycast(class AActor* emitterActor, TArray<class AActor*>* ActorsToIgnore);
	void GetEmitterActor(class AActor** emitterActor);
	void Is_Point_Affected_By_Emitter(const struct FVector& affectedPoint, class AActor* requestingActor, bool* isAffected);
	void Take_Harvesting_Charge_From_Character(float chargeHarvested, float* chargeTaken);
	void OnChargeHarvested(float amountHarvested);
	void InitializeManager(class AActor** Owner);
	void OnEmitterIsActiveChanged();
	void ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames>* variableType, bool* bBValue, float* fValue, double* dValue, int* ivalue);
	void OnEmitterRangeChanged();
	void Is_EmitterAvailableForHarvesting(bool* available);
	void GetEmitterForwardVector(struct FVector* ForwardVector);
	void CanPlayerHarvest(class APlayerController* Controller, bool toBattery, bool* canHarvest);
	void HarvestCharge(bool MountedDino, class APlayerController* Controller);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void BPDeactivated(class AActor** ForInstigator);
	void ShouldEnableTimers(bool* tickServer, bool* TickClient);
	void EmitterShouldUpdateChargeOnTimer(bool* shouldUpdateOnTimer);
	void BuffTickClient(float* DeltaTime);
	void EmitterUpdateChargeOnTimer(float DeltaTime);
	void BuffTickServer(float* DeltaTime);
	void CanEmitCharge(bool* canEmit);
	void Is_ActorAffected_by_Emitter(class AActor* affectedActor, bool skipLineTrace, bool* isAffected);
	void UserConstructionScript();
	void FadeInTimeline__FinishedFunc();
	void FadeInTimeline__UpdateFunc();
	void FadeOutTimeline__FinishedFunc();
	void FadeOutTimeline__UpdateFunc();
	void FadeInPulse();
	void FadeInPulse_Multicast();
	void FadeOutPulse();
	void FadeOutPulse_Multicast();
	void UpdateEmitterEffectsRadius();
	void UpdateEmitterEffectsRadius_Multicast();
	void InitializeEmitter();
	void ExecuteUbergraph_Buff_ChargeEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
