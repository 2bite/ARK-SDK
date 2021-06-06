#pragma once

// ARKSurvivalEvolved (329.9) SDK

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
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemCanoe_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCanoe.PrimalItemCanoe_C");
		return ptr;
	}


	class UTexture2D* STATIC_BPGetItemIcon(class AShooterPlayerController** ForPC);
	class UMaterialInterface* BPGetCustomIconMaterialParent();
	void SetColors();
	void BPInitIconMaterial();
	class FString BPGetItemName(class FString* ItemNameIn, class AShooterPlayerController** ForPC);
	class FString BPGetCustomDurabilityText();
	float BPGetItemDurabilityPercentage();
	void ExecuteUbergraph_PrimalItemCanoe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
