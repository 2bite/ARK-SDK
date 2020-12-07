#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HordeCrateImpactEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HordeCrateImpactEmitter.HordeCrateImpactEmitter_C
// 0x0000 (0x0518 - 0x0518)
class AHordeCrateImpactEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HordeCrateImpactEmitter.HordeCrateImpactEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_HordeCrateImpactEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
