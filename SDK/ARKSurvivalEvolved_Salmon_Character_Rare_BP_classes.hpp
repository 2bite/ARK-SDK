#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Salmon_Character_Rare_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Salmon_Character_Rare_BP.Salmon_Character_Rare_BP_C
// 0x0008 (0x2278 - 0x2270)
class ASalmon_Character_Rare_BP_C : public ASalmon_Character_BP_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x2270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Salmon_Character_Rare_BP.Salmon_Character_Rare_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Salmon_Character_Rare_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
