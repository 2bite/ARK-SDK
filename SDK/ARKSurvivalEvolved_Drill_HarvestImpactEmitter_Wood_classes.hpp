#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Drill_HarvestImpactEmitter_Wood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Drill_HarvestImpactEmitter_Wood.Drill_HarvestImpactEmitter_Wood_C
// 0x0000 (0x0518 - 0x0518)
class ADrill_HarvestImpactEmitter_Wood_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Drill_HarvestImpactEmitter_Wood.Drill_HarvestImpactEmitter_Wood_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Drill_HarvestImpactEmitter_Wood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
