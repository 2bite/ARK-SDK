#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceDolphinLaserUpgrade_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C
// 0x0034 (0x049C - 0x0468)
class ASpaceDolphinLaserUpgrade_C : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LaserLevel2;                                              // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LaserLevel1;                                              // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpgradeRadius;                                            // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	double                                             Awarded;                                                  // 0x0490(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotSpeed;                                                 // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpaceDolphinLaserUpgrade.SpaceDolphinLaserUpgrade_C");
		return ptr;
	}


	bool BPCustomIsRelevantForClient(class APlayerController** ForPC);
	void ReceiveTick(float* DeltaSeconds);
	void UserConstructionScript();
	void ExecuteUbergraph_SpaceDolphinLaserUpgrade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
