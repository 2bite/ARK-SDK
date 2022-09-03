#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EmitterImpact_TekExplosive_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EmitterImpact_TekExplosive.EmitterImpact_TekExplosive_C
// 0x0000 (0x0518 - 0x0518)
class AEmitterImpact_TekExplosive_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EmitterImpact_TekExplosive.EmitterImpact_TekExplosive_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EmitterImpact_TekExplosive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
