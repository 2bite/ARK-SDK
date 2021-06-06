#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_FishBasketFilled_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C
// 0x0030 (0x0B10 - 0x0AE0)
class UPrimalItem_FishBasketFilled_C : public UPrimalItem_Base_C
{
public:
	class APrimalCharacter*                            ServerShadowmaneToHack;                                   // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            PreviousShadowmaneClientValue;                            // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ShadowmaneCustomTag;                                      // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minimum_size_requirement_for_feeding_shadowmane;          // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AFC(0x0004) MISSED OFFSET
	class FString                                      _Localize__fish_is_too_small_string;                      // 0x0B00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C");
		return ptr;
	}


	void Find_Shadowmane(bool backup, class APrimalDinoCharacter** Shadowmane);
	void BPDrawItemIcon(class UCanvas** ItemCanvas, bool* bItemEnabled, struct FVector2D* ItemCanvasSize, struct FVector2D* ItemCanvasScale, struct FLinearColor* TheTintColor);
	void SlottedTick(float* DeltaSeconds);
	void STATIC_BlueprintUsed();
	class FString STATIC_BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC);
	bool BPCanUse(bool* bIgnoreCooldown);
	void ExecuteUbergraph_PrimalItem_FishBasketFilled(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
