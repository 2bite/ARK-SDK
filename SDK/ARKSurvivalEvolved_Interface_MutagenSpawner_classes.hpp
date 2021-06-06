#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Interface_MutagenSpawner_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interface_MutagenSpawner.Interface_MutagenSpawner_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_MutagenSpawner_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interface_MutagenSpawner.Interface_MutagenSpawner_C");
		return ptr;
	}


	void AdjustableSpawnDelayChanged();
	void itemPickedUp(class AActor* Item, class APlayerController* ByPC);
	void SpawnItem(class AActor* Manager, class AActor** SpawnedItem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
