#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_CupidArrow_Tranq_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjArrow_CupidArrow_Tranq.ProjArrow_CupidArrow_Tranq_C
// 0x0008 (0x0680 - 0x0678)
class AProjArrow_CupidArrow_Tranq_C : public AProjArrow_Tranq_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjArrow_CupidArrow_Tranq.ProjArrow_CupidArrow_Tranq_C");
		return ptr;
	}


	void OnExplode(struct FHitResult* Result);
	void UserConstructionScript();
	void ExecuteUbergraph_ProjArrow_CupidArrow_Tranq(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
