#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0000 (0x116A - 0x116A)
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
