#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCrossbow_Zipline_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapCrossbow_Zipline.WeapCrossbow_Zipline_C
// 0x0120 (0x0F70 - 0x0E50)
class AWeapCrossbow_Zipline_C : public AWeapCrossbow_C
{
public:
	class USceneComponent*                             PreviewCableAttach;                                       // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PreviewTargetPoint;                                       // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ProjectileMesh1P;                                         // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AProjZiplineAnchor_C*                        PendingAnchor;                                            // 0x0E68(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAnchorDistance;                                        // 0x0E70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E74(0x0004) MISSED OFFSET
	class UPrimalCableComponent*                       PreviewCable;                                             // 0x0E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Steps;                                                    // 0x0E80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepTime;                                                 // 0x0E84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TracesPerCentimeter;                                      // 0x0E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0E8C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    PreviewEmitter;                                           // 0x0E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PreviewEmitterParticle;                                   // 0x0E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviewHitLocation;                                       // 0x0EA0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreviewInterpSpeed;                                       // 0x0EAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        PreviewMeshComp;                                          // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    NewVar;                                                   // 0x0EB8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinAnchorDistance;                                        // 0x0EC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreviewHitValid;                                          // 0x0EC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0EC9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    PreviewCableMID;                                          // 0x0ED0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsePreviewColorChange;                                    // 0x0ED8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0ED9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    PreviewMeshMID;                                           // 0x0EE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x0EE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable2;                             // 0x0EE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x0EEA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable2;                       // 0x0EEB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;// 0x0EEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable3;                       // 0x0EED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0EEE(0x0002) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x0EF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x0EF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0F00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyOwned_ReturnValue;                      // 0x0F01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable3;                             // 0x0F02(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0xD];                                       // 0x0F03(0x000D) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_AddComponent_RelativeTransform_AddComponentDefaultTransform;// 0x0F10(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_AddComponent_RelativeTransform2_AddComponentDefaultTransform;// 0x0F40(0x0030) (Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapCrossbow_Zipline.WeapCrossbow_Zipline_C");
		return ptr;
	}


	void STATIC_ZiplineObstructionTrace(const struct FVector& Start, bool* Hit);
	void BPHandleMeleeAttack();
	void IsValidHitLocationForAttachment(struct FHitResult* Hit, bool* IsValidHit);
	bool BPWeaponCanFire();
	void Get_ZipProjectile_Default_Object(class AProjZiplineAnchor_C** AsProjArrow_Zipline_Bolt_C);
	void STATIC_Update_Preview_Cable();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveDestroyed();
	void UserConstructionScript();
	void ReloadNow();
	void ResetReload();
	void NoPlacementNoti();
	void BPFiredWeapon();
	void ExecuteUbergraph_WeapCrossbow_Zipline(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
