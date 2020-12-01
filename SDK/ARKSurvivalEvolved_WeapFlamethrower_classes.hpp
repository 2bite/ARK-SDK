#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x001A (0x0D92 - 0x0D78)
class AWeapFlamethrower_C : public AShooterWeapon_FlameThrower
{
public:
	class UAudioComponent*                             Idle_SFX;                                                 // 0x0D78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    lighter3p;                                                // 0x0D80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    lighter;                                                  // 0x0D88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsReloading;                                             // 0x0D90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0D91(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

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
