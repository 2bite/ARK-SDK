#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Spawner_Enforcer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_Spawner_Enforcer.PrimalItem_Spawner_Enforcer_C
// 0x0020 (0x0B48 - 0x0B28)
class UPrimalItem_Spawner_Enforcer_C : public UPrimalItem_DinoSpawner_Base_C
{
public:
	class FString                                      FoodStatLabel;                                            // 0x0B28(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      MeleeDamageStatLabel;                                     // 0x0B38(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_Spawner_Enforcer.PrimalItem_Spawner_Enforcer_C");
		return ptr;
	}


	void PreDinoSpawned();
	void GetStatDisplayString(TEnumAsByte<EPrimalCharacterStatusValue>* Stat, int* Value, int* StatConvertMapIndex, class FString* StatDisplay, class FString* ValueDisplay, bool* ShowInTooltip);
	void ExecuteUbergraph_PrimalItem_Spawner_Enforcer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
