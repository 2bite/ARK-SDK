#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMachinedShotgun_Laser_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapMachinedShotgun_Laser.WeapMachinedShotgun_Laser_C
// 0x0020 (0x0DE0 - 0x0DC0)
class AWeapMachinedShotgun_Laser_C : public AWeapMachinedShotgun_C
{
public:
	class UShooterLaserBeamComponent*                  FPVLaserBeam;                                             // 0x0DC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FirstPersonAttachment;                                    // 0x0DC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShooterLaserBeamComponent*                  TPVLaserBeam;                                             // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ThirdPersonAttachment;                                    // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapMachinedShotgun_Laser.WeapMachinedShotgun_Laser_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapMachinedShotgun_Laser(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
