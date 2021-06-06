#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGrenadeTek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjGrenadeTek.ProjGrenadeTek_C
// 0x00A8 (0x0708 - 0x0660)
class AProjGrenadeTek_C : public AShooterProjectile
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             AudioAttached;                                            // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystemAttached;                                   // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Audio1;                                                   // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  K2Node_Event_Result;                                      // 0x0680(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjGrenadeTek.ProjGrenadeTek_C");
		return ptr;
	}


	void STATIC_BPProjectileBounced(struct FHitResult* ImpactResult, struct FVector* ImpactVelocity);
	void BPAttachedRootComponent();
	void UserConstructionScript();
	void OnExplode(struct FHitResult* Result);
	void ExecuteUbergraph_ProjGrenadeTek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
