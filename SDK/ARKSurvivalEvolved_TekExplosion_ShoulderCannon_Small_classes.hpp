#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekExplosion_ShoulderCannon_Small_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekExplosion_ShoulderCannon_Small.TekExplosion_ShoulderCannon_Small_C
// 0x0000 (0x0510 - 0x0510)
class ATekExplosion_ShoulderCannon_Small_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekExplosion_ShoulderCannon_Small.TekExplosion_ShoulderCannon_Small_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TekExplosion_ShoulderCannon_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
