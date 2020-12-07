#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceWhaleTurret_ImpactEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpaceWhaleTurret_ImpactEmitter.SpaceWhaleTurret_ImpactEmitter_C
// 0x0000 (0x0518 - 0x0518)
class ASpaceWhaleTurret_ImpactEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpaceWhaleTurret_ImpactEmitter.SpaceWhaleTurret_ImpactEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SpaceWhaleTurret_ImpactEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
