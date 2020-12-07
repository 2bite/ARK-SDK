#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TreeHarvestImpactEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TreeHarvestImpactEmitter.TreeHarvestImpactEmitter_C
// 0x0000 (0x0518 - 0x0518)
class ATreeHarvestImpactEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TreeHarvestImpactEmitter.TreeHarvestImpactEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TreeHarvestImpactEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
