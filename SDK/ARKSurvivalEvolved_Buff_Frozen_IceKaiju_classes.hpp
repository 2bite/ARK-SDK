#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Frozen_IceKaiju_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C
// 0x01BB (0x0B0B - 0x0950)
class ABuff_Frozen_IceKaiju_C : public APrimalBuff
{
public:
	double                                             DeactivationTimeFromSettings;                             // 0x0950(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         NewVar;                                                   // 0x0958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0959(0x0003) MISSED OFFSET
	int                                                MaterialLength;                                           // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  PrevMaterials;                                            // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstance*                           ParentForDynamicMat;                                      // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      FrozenMesh;                                               // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    dynamicMic;                                               // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FrozenStarted;                                            // 0x0988(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0989(0x0003) MISSED OFFSET
	float                                              FrozenProgress;                                           // 0x098C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FrozenThawRate;                                           // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0994(0x0004) MISSED OFFSET
	double                                             LastTimeUpdatedFrozen;                                    // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FrozenThawAmountPerRate;                                  // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x09A4(0x0004) MISSED OFFSET
	double                                             LastTimeSelfClick;                                        // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FPVCheckRate;                                             // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x09B4(0x0004) MISSED OFFSET
	double                                             LastTimeFPVCheckRate;                                     // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreFreezeS;                                               // 0x09C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCorrupted;                                              // 0x09C1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x09C2(0x0006) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x09C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x09D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x09D1(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x09D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x09D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x09D9(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_Amount;                                // 0x09DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_CustomEvent_Char;                                  // 0x09E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Freeze;                                // 0x09E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x09E9(0x0007) MISSED OFFSET
	double                                             CallFunc_GetDeactivationTime_ReturnValue;                 // 0x09F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue;             // 0x09F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x09F9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue;       // 0x0A00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0A08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0A0C(0x0004) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter2;                    // 0x0A10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0A18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0A19(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x0A20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsShooterCharacter_ReturnValue;                  // 0x0A28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0A29(0x0007) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetRelativeTransform_ReturnValue;                // 0x0A30(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class USkeletalMeshComponent*                      CallFunc_AddComponent_ReturnValue;                        // 0x0A60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x0A68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x0A6C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0A6D(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x0A70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0A74(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0A78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x0A80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0A81(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter3;                    // 0x0A88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0A90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0A91(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x0A94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue;                   // 0x0A98(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0AA4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0AB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x0AB1(0x0007) MISSED OFFSET
	struct FSkeletalMaterial                           CallFunc_Array_Get_Item;                                  // 0x0AB8(0x0010) (Transient, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0AC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x0ACC(0x0004) MISSED OFFSET
	class UMaterialInstance*                           K2Node_DynamicCast_AsMaterialInstance;                    // 0x0AD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0AD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x0AD9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue2;            // 0x0ADA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue3;            // 0x0ADB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue4;            // 0x0ADC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue5;            // 0x0ADD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue6;            // 0x0ADE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue7;            // 0x0ADF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue8;            // 0x0AE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue9;            // 0x0AE1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue10;           // 0x0AE2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0AE3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x0AE4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0AE5(0x0003) MISSED OFFSET
	class APrimalBuff*                                 K2Node_DynamicCast_AsPrimalBuff;                          // 0x0AE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x0AF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x0AF1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x0AF2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x5];                                       // 0x0AF3(0x0005) MISSED OFFSET
	class AIceJumper_Character_BP_C*                   K2Node_DynamicCast_AsIceJumper_Character_BP_C;            // 0x0AF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x0B00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue5;                          // 0x0B01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue6;                          // 0x0B02(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x1];                                       // 0x0B03(0x0001) MISSED OFFSET
	float                                              CallFunc_GetThawSpeed_FrozenThawAmountPerRate;            // 0x0B04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue7;                          // 0x0B08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue8;                          // 0x0B09(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue9;                          // 0x0B0A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Frozen_IceKaiju.Buff_Frozen_IceKaiju_C");
		return ptr;
	}


	bool BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void BPSetupForInstigator(class AActor** ForInstigator);
	bool BPPreventflight();
	void BPHandleOnStartFire(bool* bFromGamepad);
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void NotifyDamage(float* DamageAmount, class UClass** DamageClass, class AController** EventInstigator, class AActor** TheDamageCauser);
	void BuffPostAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser);
	void BuffTickClient(float* DeltaTime);
	void STATIC_BuffTickServer(float* DeltaTime);
	void FreezeCharacter(class APrimalCharacter* InputPin, bool Freeze);
	bool BPPreventCharacterStatusValueModifiers(class APrimalCharacter** ForInstigator);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void BPDeactivated(class AActor** ForInstigator);
	void BPActivated(class AActor** ForInstigator);
	void AddFrozenTime();
	void UserConstructionScript();
	void UpdateFrozenMIC(float amount);
	void FreezeChar(class APrimalCharacter* Char, bool Freeze);
	void ReceiveBeginPlay();
	void Server_HandleOnStartFire();
	void Multi_PlayIceBreakVFX();
	void ExecuteUbergraph_Buff_Frozen_IceKaiju(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
