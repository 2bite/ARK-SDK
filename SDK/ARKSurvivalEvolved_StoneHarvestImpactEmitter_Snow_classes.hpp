#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StoneHarvestImpactEmitter_Snow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StoneHarvestImpactEmitter_Snow.StoneHarvestImpactEmitter_Snow_C
// 0x0000 (0x0518 - 0x0518)
class AStoneHarvestImpactEmitter_Snow_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StoneHarvestImpactEmitter_Snow.StoneHarvestImpactEmitter_Snow_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StoneHarvestImpactEmitter_Snow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
