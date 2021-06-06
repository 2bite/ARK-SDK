#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjPoop_Shapeshifter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C
// 0x0000 (0x0688 - 0x0688)
class AProjPoop_Shapeshifter_C : public APrimalProjectileArrow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C");
		return ptr;
	}


	bool BP_IgnoreProjectileImpact(struct FHitResult* ImpactHit);
	void BPProjectileBounced(struct FHitResult* ImpactResult, struct FVector* ImpactVelocity);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_ProjPoop_Shapeshifter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
