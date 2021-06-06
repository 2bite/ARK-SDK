#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_PlantSpeciesR_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Seed_PlantSpeciesR.PrimalItemConsumable_Seed_PlantSpeciesR_C
// 0x0008 (0x0AE8 - 0x0AE0)
class UPrimalItemConsumable_Seed_PlantSpeciesR_C : public UPrimalItemConsumableSeed_C
{
public:
	class UTexture2D*                                  MeatCropIcon;                                             // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Seed_PlantSpeciesR.PrimalItemConsumable_Seed_PlantSpeciesR_C");
		return ptr;
	}


	void BPDrawItemIcon(class UCanvas** ItemCanvas, bool* bItemEnabled, struct FVector2D* ItemCanvasSize, struct FVector2D* ItemCanvasScale, struct FLinearColor* TheTintColor);
	void ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
