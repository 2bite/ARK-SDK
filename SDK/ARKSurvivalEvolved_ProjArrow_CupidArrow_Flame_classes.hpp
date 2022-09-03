#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_CupidArrow_Flame_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjArrow_CupidArrow_Flame.ProjArrow_CupidArrow_Flame_C
// 0x0008 (0x06A8 - 0x06A0)
class AProjArrow_CupidArrow_Flame_C : public AProjArrow_Flame_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjArrow_CupidArrow_Flame.ProjArrow_CupidArrow_Flame_C");
		return ptr;
	}


	void OnExplode(struct FHitResult* Result);
	void UserConstructionScript();
	void ExecuteUbergraph_ProjArrow_CupidArrow_Flame(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
