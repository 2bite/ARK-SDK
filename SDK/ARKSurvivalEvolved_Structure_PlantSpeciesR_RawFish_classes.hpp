#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_PlantSpeciesR_RawFish_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Structure_PlantSpeciesR_RawFish.Structure_PlantSpeciesR_RawFish_C
// 0x0000 (0x0C78 - 0x0C78)
class AStructure_PlantSpeciesR_RawFish_C : public AStructure_PlantSpeciesR_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Structure_PlantSpeciesR_RawFish.Structure_PlantSpeciesR_RawFish_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Structure_PlantSpeciesR_RawFish(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
