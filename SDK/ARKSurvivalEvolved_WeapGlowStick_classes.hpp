#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x012C (0x0FCC - 0x0EA0)
class AWeapGlowStick_C : public APrimalWeaponGrenade
{
public:
	class UAudioComponent*                             GlowStickCrack;                                           // 0x0EA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight3P;                                             // 0x0EA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight1P;                                             // 0x0EB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBroken;                                                 // 0x0EB8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0EB9(0x0003) MISSED OFFSET
	float                                              LightRadius;                                              // 0x0EBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              lightIntensity;                                           // 0x0EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Emissiveness;                                             // 0x0EC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShakeTemplate;                                      // 0x0EC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShakeIntensityOnBreak;                              // 0x0ED0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShakeIntensityOnThrow;                              // 0x0ED4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterialInstance;                                  // 0x0ED8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TempSlotPos;                                              // 0x0EE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0EE4(0x0004) MISSED OFFSET
	class UPrimalItem_GlowStick_C*                     PI_Glowstick;                                             // 0x0EE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InventoryOpen;                                            // 0x0EF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0EF1(0x0003) MISSED OFFSET
	float                                              GlowStickDurabilityPerInterval;                           // 0x0EF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrackGlowStickDelay;                                      // 0x0EF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0EFC(0x0004) MISSED OFFSET
	double                                             lastFakeReloadTime;                                       // 0x0F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TPV_EquipAnimDuration;                                    // 0x0F08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFakeReloading;                                         // 0x0F0C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0F0D(0x0003) MISSED OFFSET
	struct FLinearColor                                mainColorizationColor;                                    // 0x0F10(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Colorization_MinChannelClamp;                             // 0x0F20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BlacklightColor;                                          // 0x0F24(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isEquipping;                                              // 0x0F34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0F35(0x0003) MISSED OFFSET
	double                                             lastEquipStartTime;                                       // 0x0F38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              equipDuration;                                            // 0x0F40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       selfGlowstickSocketName;                                  // 0x0F44(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0F4C(0x0004) MISSED OFFSET
	class UClass*                                      selfGlowstickprojectileClass;                             // 0x0F50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastTimeDidMeleeAttack;                                   // 0x0F58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              meleAttackCooldown;                                       // 0x0F60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               preventAllGlowStickActions;                               // 0x0F64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0F65(0x0003) MISSED OFFSET
	class UAnimMontage*                                Ref_BreakGlowStickMontage;                                // 0x0F68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EquipAnimDuration;                                        // 0x0F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrackAnimDuration;                                        // 0x0F74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_PlayWeaponAnimation_ReturnValue;                 // 0x0F78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0F7C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0F7D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0F7E(0x0002) MISSED OFFSET
	int                                                CallFunc_IncrementItemQuantity_ReturnValue;               // 0x0F80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetItemStatModifier_ReturnValue;                 // 0x0F84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0F88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0F89(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x0F90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x0F98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x0F9C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0F9D(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayWeaponAnimation_ReturnValue2;                // 0x0FA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x0FA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0FA5(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0FA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Delay;                                 // 0x0FAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x0FB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0FB1(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_duration;                              // 0x0FB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FWeaponAnim                                 K2Node_MakeStruct_WeaponAnim;                             // 0x0FB8(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayWeaponAnimationEx_ReturnValue;               // 0x0FC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapGlowStick.WeapGlowStick_C");
		return ptr;
	}


	void BPHandleMeleeAttack();
	void STATIC_BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
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
