#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFlamethrower_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapFlamethrower.WeapFlamethrower_C
// 0x004D (0x0E2D - 0x0DE0)
class AWeapFlamethrower_C : public AShooterWeapon_FlameThrower
{
public:
	class UAudioComponent*                             Idle_SFX;                                                 // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    lighter3p;                                                // 0x0DE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    lighter;                                                  // 0x0DF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsReloading;                                             // 0x0DF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0DF9(0x0003) MISSED OFFSET
	struct FVector                                     Lighter1POffset;                                          // 0x0DFC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Lighter1PScale;                                           // 0x0E08(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Lighter3POffset;                                          // 0x0E14(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Lighter3PScale;                                           // 0x0E20(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0E2C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapFlamethrower.WeapFlamethrower_C");
		return ptr;
	}


	void TogglePilotLight(bool IsActive);
	void StartUnequipEvent();
	void BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void RefreshLighterState();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void AnimNotify_Pilot_On();
	void AnimNotify_Pilot_Off();
	void ExecuteUbergraph_WeapFlamethrower(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
