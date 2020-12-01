#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapGlowStick_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapGlowStick.WeapGlowStick_C
// 0x012C (0x0F6C - 0x0E40)
class AWeapGlowStick_C : public APrimalWeaponGrenade
{
public:
	class UAudioComponent*                             GlowStickCrack;                                           // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight3P;                                             // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight1P;                                             // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBroken;                                                 // 0x0E58(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E59(0x0003) MISSED OFFSET
	float                                              lightRadius;                                              // 0x0E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              lightIntensity;                                           // 0x0E60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Emissiveness;                                             // 0x0E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShakeTemplate;                                      // 0x0E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShakeIntensityOnBreak;                              // 0x0E70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShakeIntensityOnThrow;                              // 0x0E74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterialInstance;                                  // 0x0E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TempSlotPos;                                              // 0x0E80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0E84(0x0004) MISSED OFFSET
	class UPrimalItem_GlowStick_C*                     PI_Glowstick;                                             // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InventoryOpen;                                            // 0x0E90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0E91(0x0003) MISSED OFFSET
	float                                              GlowStickDurabilityPerInterval;                           // 0x0E94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrackGlowStickDelay;                                      // 0x0E98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0E9C(0x0004) MISSED OFFSET
	double                                             lastFakeReloadTime;                                       // 0x0EA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TPV_EquipAnimDuration;                                    // 0x0EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFakeReloading;                                         // 0x0EAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0EAD(0x0003) MISSED OFFSET
	struct FLinearColor                                mainColorizationColor;                                    // 0x0EB0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Colorization_MinChannelClamp;                             // 0x0EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BlacklightColor;                                          // 0x0EC4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isEquipping;                                              // 0x0ED4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0ED5(0x0003) MISSED OFFSET
	double                                             lastEquipStartTime;                                       // 0x0ED8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              equipDuration;                                            // 0x0EE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       selfGlowstickSocketName;                                  // 0x0EE4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0EEC(0x0004) MISSED OFFSET
	class UClass*                                      selfGlowstickprojectileClass;                             // 0x0EF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastTimeDidMeleeAttack;                                   // 0x0EF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              meleAttackCooldown;                                       // 0x0F00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               preventAllGlowStickActions;                               // 0x0F04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0F05(0x0003) MISSED OFFSET
	class UAnimMontage*                                Ref_BreakGlowStickMontage;                                // 0x0F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EquipAnimDuration;                                        // 0x0F10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrackAnimDuration;                                        // 0x0F14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_PlayWeaponAnimation_ReturnValue;                 // 0x0F18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0F1C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0F1D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0F1E(0x0002) MISSED OFFSET
	int                                                CallFunc_IncrementItemQuantity_ReturnValue;               // 0x0F20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetItemStatModifier_ReturnValue;                 // 0x0F24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0F28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0F29(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x0F30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x0F38(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x0F3C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0F3D(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayWeaponAnimation_ReturnValue2;                // 0x0F40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x0F44(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0F45(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0F48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Delay;                                 // 0x0F4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x0F50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0F51(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_Duration;                              // 0x0F54(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FWeaponAnim                                 K2Node_MakeStruct_WeaponAnim;                             // 0x0F58(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayWeaponAnimationEx_ReturnValue;               // 0x0F68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapGlowStick.WeapGlowStick_C");
		return ptr;
	}


	void BPHandleMeleeAttack();
	void BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void BPLostController();
	void ReceiveTick(float* DeltaSeconds);
	void IsColorized(const struct FLinearColor& currColor, bool* Result);
	void ClampMinColorVals(const struct FLinearColor& Color, float MinVal, struct FLinearColor* clampedColor);
	void BPAppliedPrimalItemToWeapon();
	void PullOutNewGlowStick();
	bool BPWeaponCanFire();
	void InitGlowStick();
	void NetSetIsBroken(bool newIsBroken);
	void TurnOnGlowStick();
	void BPStartEquippedNotify();
	void BP_OnReloadNotify();
	void PlayCameraShake(float Intensity);
	void OnRep_IsBroken();
	void Create_Dynamic_Material();
	void TurnOffGlowStick();
	void SetMaterialEmissiveness(class UMaterialInstanceDynamic* Material, float Value);
	void SetLightIntensityAndAttenuationRadius(class UPointLightComponent* Light, float Intensity, float Radius);
	void UserConstructionScript();
	void ProjectileFired();
	void ReceiveBeginPlay();
	void StartUnequipEvent();
	void Multi_FakeReload();
	void BPFireWeapon();
	void AfterProjectileFired_ROS();
	void CrackGlowStickAfterDelay();
	void Multi_UnequipGlowStick();
	void PlayTPVShakeAnimAfterDelay();
	void CrackGlowStick();
	void OnMeleeAttack_Multicast();
	void MultiFakeReloadAfterDelay(float Delay);
	void PreventUsingGlowstickForDuration(float Duration);
	void Multi_BeginCrackingGlowstick();
	void ExecuteUbergraph_WeapGlowStick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
