#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DeathItemCache_PlayerDeath_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DeathItemCache_PlayerDeath.DeathItemCache_PlayerDeath_C
// 0x0000 (0x0E18 - 0x0E18)
class ADeathItemCache_PlayerDeath_C : public ADeathItemCache_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DeathItemCache_PlayerDeath.DeathItemCache_PlayerDeath_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DeathItemCache_PlayerDeath(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
