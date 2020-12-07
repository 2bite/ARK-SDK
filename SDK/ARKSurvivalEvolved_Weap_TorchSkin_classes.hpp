#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x0028 (0x0D80 - 0x0D58)
class AWeap_TorchSkin_C : public AShooterWeapon_Melee
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight2;                                              // 0x0D60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight1;                                              // 0x0D68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x0D70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0D78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
