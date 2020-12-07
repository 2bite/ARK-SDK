#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlantSpeciesZFlashbangEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlantSpeciesZFlashbangEmitter.PlantSpeciesZFlashbangEmitter_C
// 0x0000 (0x0518 - 0x0518)
class APlantSpeciesZFlashbangEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlantSpeciesZFlashbangEmitter.PlantSpeciesZFlashbangEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_PlantSpeciesZFlashbangEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
