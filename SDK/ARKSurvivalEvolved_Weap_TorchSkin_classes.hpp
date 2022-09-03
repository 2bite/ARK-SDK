#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Weap_TorchSkin_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weap_TorchSkin.Weap_TorchSkin_C
// 0x0028 (0x0DB0 - 0x0D88)
class AWeap_TorchSkin_C : public AShooterWeapon_Melee
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0D88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight2;                                              // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight1;                                              // 0x0D98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x0DA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0DA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weap_TorchSkin.Weap_TorchSkin_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Weap_TorchSkin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
