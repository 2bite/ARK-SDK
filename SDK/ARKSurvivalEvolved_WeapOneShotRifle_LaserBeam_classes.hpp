#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapOneShotRifle_LaserBeam_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapOneShotRifle_LaserBeam.WeapOneShotRifle_LaserBeam_C
// 0x0020 (0x0DE8 - 0x0DC8)
class AWeapOneShotRifle_LaserBeam_C : public AWeapOneShotRifle_C
{
public:
	class UShooterLaserBeamComponent*                  TPVLaserBeam;                                             // 0x0DC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ThirdPersonAttachment;                                    // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShooterLaserBeamComponent*                  FPVLaserBeam;                                             // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FirstPersonAttachment;                                    // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapOneShotRifle_LaserBeam.WeapOneShotRifle_LaserBeam_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapOneShotRifle_LaserBeam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
