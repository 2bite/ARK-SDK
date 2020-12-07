#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedShotgun_Flashlight_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapMachinedShotgun_Flashlight.WeapMachinedShotgun_Flashlight_C
// 0x0030 (0x0DC0 - 0x0D90)
class AWeapMachinedShotgun_Flashlight_C : public AWeapMachinedShotgun_C
{
public:
	class UParticleSystemComponent*                    SecondaryFPVToggleComponent;                              // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         FPVToggleComponent;                                       // 0x0D98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FirstPersonAttachment;                                    // 0x0DA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SecondaryTPVToggleComponent;                              // 0x0DA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         TPVToggleComponent;                                       // 0x0DB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ThirdPersonAttachment;                                    // 0x0DB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapMachinedShotgun_Flashlight.WeapMachinedShotgun_Flashlight_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapMachinedShotgun_Flashlight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
