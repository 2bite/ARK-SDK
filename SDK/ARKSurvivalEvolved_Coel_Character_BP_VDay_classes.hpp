#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Coel_Character_BP_VDay_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Coel_Character_BP_VDay.Coel_Character_BP_VDay_C
// 0x0008 (0x2098 - 0x2090)
class ACoel_Character_BP_VDay_C : public ACoel_Character_BP_C
{
public:
	class UParticleSystemComponent*                    HeartParticles;                                           // 0x2090(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Coel_Character_BP_VDay.Coel_Character_BP_VDay_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Coel_Character_BP_VDay(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
