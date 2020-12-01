#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_GreenCrystalsLight_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GreenCrystalsLight.BP_GreenCrystalsLight_C
// 0x0000 (0x0810 - 0x0810)
class UBP_GreenCrystalsLight_C : public UParticleSystemComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GreenCrystalsLight.BP_GreenCrystalsLight_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_GreenCrystalsLight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
