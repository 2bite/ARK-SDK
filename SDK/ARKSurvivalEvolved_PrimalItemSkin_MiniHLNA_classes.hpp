#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_MiniHLNA_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C
// 0x0060 (0x0B48 - 0x0AE8)
class UPrimalItemSkin_MiniHLNA_C : public UPrimalItemSkinGeneric_C
{
public:
	class USoundAttenuation*                           VoiceAttenuation;                                         // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class USoundBase*>                          EquippedQuips;                                            // 0x0AF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          UnequippedQuips;                                          // 0x0B00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMeshComponent*                      HLNAComponent;                                            // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AddedParticles;                                           // 0x0B18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B19(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    TrailFXComponent;                                         // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimalItem*                                 ShieldItem;                                               // 0x0B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPointLightComponent*                        PointLightComponent;                                      // 0x0B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointLightZOffset;                                        // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialPointLightIntensity;                               // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ThrusterFXComponent;                                      // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_MiniHLNA.PrimalItemSkin_MiniHLNA_C");
		return ptr;
	}


	void IsPlayingExplorerNote(bool* Ret);
	void hide_skin();
	class FString STATIC_BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC);
	void SetVisibility(bool Visibility);
	void BPClientHandleItemNetExecCommand(struct FName* CommandName, class AShooterPlayerController** ForPC, struct FBPNetExecParams* ExecParams);
	void TryRemoveBuffOnUnequip();
	void RemovedSkinFromItem(class UPrimalItem** FromOwnerItem, bool* bIsFirstTime);
	void OnEquipDelayedFn();
	void Spawn_Emitter(class UParticleSystem* Emitter, const struct FName& Socket, bool AutoDestroy, class UParticleSystemComponent** ParticleComponent);
	void PlayRandomSoundFromSounds(TArray<class USoundBase*>* Sounds);
	void BlueprintUnequipped();
	void BPAddedAttachments();
	void ExecuteUbergraph_PrimalItemSkin_MiniHLNA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
