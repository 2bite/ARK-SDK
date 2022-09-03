#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCanoe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemCanoe.PrimalItemCanoe_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemCanoe_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCanoe.PrimalItemCanoe_C");
		return ptr;
	}


	bool BPCanUse(bool* bIgnoreCooldown);
	class UTexture2D* BPGetItemIcon(class AShooterPlayerController** ForPC);
	class UMaterialInterface* BPGetCustomIconMaterialParent();
	void STATIC_SetColors();
	void BPInitIconMaterial();
	class FString STATIC_BPGetItemName(class FString* ItemNameIn, class AShooterPlayerController** ForPC);
	class FString STATIC_BPGetCustomDurabilityText();
	float STATIC_BPGetItemDurabilityPercentage();
	void ExecuteUbergraph_PrimalItemCanoe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
