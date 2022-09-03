#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0030 (0x0DF0 - 0x0DC0)
class AWeapMachinedShotgun_Flashlight_C : public AWeapMachinedShotgun_C
{
public:
	class UParticleSystemComponent*                    SecondaryFPVToggleComponent;                              // 0x0DC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         FPVToggleComponent;                                       // 0x0DC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FirstPersonAttachment;                                    // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SecondaryTPVToggleComponent;                              // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         TPVToggleComponent;                                       // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ThirdPersonAttachment;                                    // 0x0DE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
