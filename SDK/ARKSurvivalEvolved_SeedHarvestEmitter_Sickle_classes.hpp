#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SeedHarvestEmitter_Sickle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SeedHarvestEmitter_Sickle.SeedHarvestEmitter_Sickle_C
// 0x0000 (0x0500 - 0x0500)
class ASeedHarvestEmitter_Sickle_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SeedHarvestEmitter_Sickle.SeedHarvestEmitter_Sickle_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SeedHarvestEmitter_Sickle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
