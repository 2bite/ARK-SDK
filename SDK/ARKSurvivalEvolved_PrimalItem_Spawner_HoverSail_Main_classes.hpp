#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Spawner_HoverSail_Main_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C
// 0x0038 (0x0EA0 - 0x0E68)
class UPrimalItem_Spawner_HoverSail_Main_C : public UPrimalItem_Spawner_HoverSail_Parent_C
{
public:
	bool                                               show_fuel_percentage___not_working_on_dedi;               // 0x0E68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0E69(0x0007) MISSED OFFSET
	class FString                                      failed_to_spawn_cause_on_dino_string;                     // 0x0E70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      failed_to_spawn_cause_seated_string;                      // 0x0E80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      failed_to_transfer_inventory_cause_reference_invalid_string;// 0x0E90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C");
		return ptr;
	}


	void BPInitIconMaterial();
	void BlueprintUsed();
	void STATIC_OnDinoSpawned(class APrimalDinoCharacter** NewDino);
	class FString BPGetCustomInventoryWidgetText();
	void ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Main(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
