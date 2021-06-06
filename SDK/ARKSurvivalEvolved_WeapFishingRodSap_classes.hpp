#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFishingRodSap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapFishingRodSap.WeapFishingRodSap_C
// 0x0000 (0x1158 - 0x1158)
class AWeapFishingRodSap_C : public AWeapFishingRod_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapFishingRodSap.WeapFishingRodSap_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapFishingRodSap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
