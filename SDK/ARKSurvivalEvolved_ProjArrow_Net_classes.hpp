#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Net_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjArrow_Net.ProjArrow_Net_C
// 0x0049 (0x06D9 - 0x0690)
class AProjArrow_Net_C : public AProjArrow_C
{
public:
	class UParticleSystemComponent*                    NetTrail_5;                                               // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    NetTrail_4;                                               // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    NetTrail_3;                                               // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    NetTrail_2;                                               // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenedNet;                                               // 0x06B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06B9(0x0003) MISSED OFFSET
	float                                              TimeUntilOpenNet;                                         // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ProjectileSound;                                          // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  MissedSound;                                              // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HitCharacterSound;                                        // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x06D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjArrow_Net.ProjArrow_Net_C");
		return ptr;
	}


	void OnExplode(struct FHitResult* Result);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void Multicast_OpenNet();
	void ExecuteUbergraph_ProjArrow_Net(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
