#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CookingCampfireEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CookingCampfireEmitter.CookingCampfireEmitter_C
// 0x0000 (0x0500 - 0x0500)
class ACookingCampfireEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CookingCampfireEmitter.CookingCampfireEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CookingCampfireEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
