#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBoss_ProjEnergyBeam_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndBoss_ProjEnergyBeam_Medium.EndBoss_ProjEnergyBeam_Medium_C
// 0x007F (0x0B20 - 0x0AA1)
class AEndBoss_ProjEnergyBeam_Medium_C : public AEndBoss_ProjEnergyBeam_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AA1(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    BeamParticle_1;                                           // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Audio1_1;                                                 // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BeamLength_1;                                             // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBeamActive_1;                                            // 0x0ABC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0ABD(0x0003) MISSED OFFSET
	TArray<class AActor*>                              HitTargets_1;                                             // 0x0AC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              BeamDamage_1;                                             // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	class UClass*                                      BeamDamageType_1;                                         // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetAimDir_1;                                           // 0x0AE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MyCurrentAim_1;                                           // 0x0AEC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamDamageRadius_AI_1;                                    // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamDamageRadius_Players_1;                               // 0x0AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeginDamageBeamMovementDelay_1;                           // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseConstantFollowSpeed_1;                                // 0x0B04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0B05(0x0003) MISSED OFFSET
	float                                              BeamLerpAlpha_1;                                          // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamInterpTime_1;                                         // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsVisualBeam_1;                                          // 0x0B10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0B11(0x0003) MISSED OFFSET
	struct FName                                       BeamOriginSocket_1;                                       // 0x0B14(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScorchVisualsPerSecond_1;                                 // 0x0B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndBoss_ProjEnergyBeam_Medium.EndBoss_ProjEnergyBeam_Medium_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EndBoss_ProjEnergyBeam_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
