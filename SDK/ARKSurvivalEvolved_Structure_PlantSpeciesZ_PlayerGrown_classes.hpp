#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_PlantSpeciesZ_PlayerGrown_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Structure_PlantSpeciesZ_PlayerGrown.Structure_PlantSpeciesZ_PlayerGrown_C
// 0x0000 (0x0C5D - 0x0C5D)
class AStructure_PlantSpeciesZ_PlayerGrown_C : public AStructure_PlantSpeciesZ_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Structure_PlantSpeciesZ_PlayerGrown.Structure_PlantSpeciesZ_PlayerGrown_C");
		return ptr;
	}


	void STATIC_BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser);
	void InitializeState();
	void UserConstructionScript();
	void ExecuteUbergraph_Structure_PlantSpeciesZ_PlayerGrown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
