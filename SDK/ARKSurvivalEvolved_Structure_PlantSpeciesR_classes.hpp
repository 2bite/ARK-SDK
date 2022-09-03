#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_PlantSpeciesR_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Structure_PlantSpeciesR.Structure_PlantSpeciesR_C
// 0x0190 (0x0C78 - 0x0AE8)
class AStructure_PlantSpeciesR_C : public AStructureBaseBP_C
{
public:
	class UAudioComponent*                             IdleAudio;                                                // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MoundMesh;                                                // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_UpdateMatZHeight_Alpha_431E2BA24E2DE9B4DDB60FB6E9B6D34A;// 0x0B00(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_UpdateMatZHeight__Direction_431E2BA24E2DE9B4DDB60FB6E9B6D34A;// 0x0B04(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B05(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_UpdateMatZHeight;                                // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   HurtSound;                                                // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      HarvestItemClass;                                         // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HarvestHealth;                                            // 0x0B20(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHarvestHealth;                                         // 0x0B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              HarvestDamageTypes;                                       // 0x0B28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              HarvestResourceQuantityPerInterval;                       // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HarvestReplenishInterval;                                 // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastHarvestedTime;                                        // 0x0B40(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HarvestHealthGiveResourceInterval;                        // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B4C(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x0B50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        TentacleMontages;                                         // 0x0B60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRotator                                    LastHitRot;                                               // 0x0B70(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                PlantColor;                                               // 0x0B7C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   MatRetractedZHeightMaskVals;                              // 0x0B8C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x0B94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0B98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0B9C(0x0004) MISSED OFFSET
	struct UObject_FTransform                          K2Node_CustomEvent_Transform;                             // 0x0BA0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_AnimIndex;                             // 0x0BD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x0BD4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0BD5(0x0003) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue;                     // 0x0BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x0BE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0BE1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x0BE4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x0BF0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x0BFC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x0C08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0C09(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_VectorVector_ReturnValue;               // 0x0C0A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue;                  // 0x0C0B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0C0C(0x0004) MISSED OFFSET
	class UAnimMontage*                                CallFunc_Array_Get_Item;                                  // 0x0C10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_WithBlending_ReturnValue;           // 0x0C18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x0C1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x0C20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Retracted;                             // 0x0C24(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Instant;                               // 0x0C25(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0C26(0x0002) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            CallFunc_FindOrCreateDynamicMaterials_DynamicMaterials;   // 0x0C28(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMaterialInstanceDynamic*>            CallFunc_FindOrCreateDynamicMaterials_DynamicMaterials2;  // 0x0C38(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0C48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x0C4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0C50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x0C51(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0C52(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_Array_Get_Item2;                                 // 0x0C58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_Array_Get_Item3;                                 // 0x0C60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X;                                 // 0x0C68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y;                                 // 0x0C6C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x0C70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x0C74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Structure_PlantSpeciesR.Structure_PlantSpeciesR_C");
		return ptr;
	}


	void RefreshIdleAudio();
	void BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser);
	void ClearLastHitRot();
	void FillHarvestHealth();
	void OnRep_HarvestHealth();
	void PlayHarvestVFX(const struct UObject_FTransform& Transform);
	void SetPlantEmissivePercent(float NewEmissiveVal);
	void ReceiveBeginPlay();
	void SetHarvestClassColor();
	void BPUpdatedHealth(bool* bDoReplication);
	void FindOrCreateDynamicMaterials(TArray<class UMaterialInstanceDynamic*>* DynamicMaterials);
	float STATIC_BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY);
	void UserConstructionScript();
	void Timeline_UpdateMatZHeight__FinishedFunc();
	void Timeline_UpdateMatZHeight__UpdateFunc();
	void Multi_UpdateHarvestVFX(const struct UObject_FTransform& Transform, int AnimIndex);
	void UpdateMatZHeight(bool Retracted, bool Instant);
	void ExecuteUbergraph_Structure_PlantSpeciesR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
