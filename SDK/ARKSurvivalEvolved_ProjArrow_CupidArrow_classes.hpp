#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_CupidArrow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjArrow_CupidArrow.ProjArrow_CupidArrow_C
// 0x0008 (0x0698 - 0x0690)
class AProjArrow_CupidArrow_C : public AProjArrow_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjArrow_CupidArrow.ProjArrow_CupidArrow_C");
		return ptr;
	}


	void OnExplode(struct FHitResult* Result);
	void UserConstructionScript();
	void ExecuteUbergraph_ProjArrow_CupidArrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
