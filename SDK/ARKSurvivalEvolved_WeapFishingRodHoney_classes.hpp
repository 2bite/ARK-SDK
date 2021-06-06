#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFishingRodHoney_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapFishingRodHoney.WeapFishingRodHoney_C
// 0x0000 (0x1158 - 0x1158)
class AWeapFishingRodHoney_C : public AWeapFishingRod_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapFishingRodHoney.WeapFishingRodHoney_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapFishingRodHoney(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
