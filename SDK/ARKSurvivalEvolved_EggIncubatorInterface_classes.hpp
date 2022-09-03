#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EggIncubatorInterface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EggIncubatorInterface.EggIncubatorInterface_C
// 0x0000 (0x0028 - 0x0028)
class UEggIncubatorInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EggIncubatorInterface.EggIncubatorInterface_C");
		return ptr;
	}


	void IsEggItemAllowed(class UPrimalItemConsumable_Egg_C* eggItem, bool* IsAllowed);
	void GetItemDisplaySlot(class UPrimalItem* ForItem, int* InSlot, bool* SlotFound);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
