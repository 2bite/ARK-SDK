#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Spawner_Mek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_Spawner_Mek.PrimalItem_Spawner_Mek_C
// 0x0000 (0x0CF0 - 0x0CF0)
class UPrimalItem_Spawner_Mek_C : public UPrimalItem_DinoSpawner_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_Spawner_Mek.PrimalItem_Spawner_Mek_C");
		return ptr;
	}


	bool BPCanUse(bool* bIgnoreCooldown);
	void GetStatDisplayString(TEnumAsByte<EPrimalCharacterStatusValue>* Stat, int* Value, int* StatConvertMapIndex, class FString* StatDisplay, class FString* ValueDisplay, bool* ShowInTooltip);
	void ExecuteUbergraph_PrimalItem_Spawner_Mek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
