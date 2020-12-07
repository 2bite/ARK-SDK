#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Spawner_Enforcer_CityTerminal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_Spawner_Enforcer_CityTerminal.PrimalItem_Spawner_Enforcer_CityTerminal_C
// 0x0020 (0x0C20 - 0x0C00)
class UPrimalItem_Spawner_Enforcer_CityTerminal_C : public UPrimalItem_Spawner_Enforcer_C
{
public:
	class FString                                      FoodStatLabel_1;                                          // 0x0C00(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      MeleeDamageStatLabel_1;                                   // 0x0C10(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_Spawner_Enforcer_CityTerminal.PrimalItem_Spawner_Enforcer_CityTerminal_C");
		return ptr;
	}


	void STATIC_PreDinoSpawned();
	void GetStatDisplayString(TEnumAsByte<EPrimalCharacterStatusValue>* Stat, int* Value, int* StatConvertMapIndex, class FString* StatDisplay, class FString* ValueDisplay, bool* ShowInTooltip);
	void ExecuteUbergraph_PrimalItem_Spawner_Enforcer_CityTerminal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
