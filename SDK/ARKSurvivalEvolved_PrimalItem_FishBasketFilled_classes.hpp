#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0060 (0x0B48 - 0x0AE8)
class UPrimalItem_FishBasketFilled_C : public UPrimalItem_Base_C
{
public:
	class APrimalCharacter*                            ServerShadowmaneToHack;                                   // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            PreviousShadowmaneClientValue;                            // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ShadowmaneCustomTag;                                      // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minimum_size_requirement_for_feeding_shadowmane;          // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B04(0x0004) MISSED OFFSET
	class FString                                      _Localize__fish_is_too_small_string;                      // 0x0B08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      _Localize__shadomane_is_already_eating_string;            // 0x0B18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      _Localize__cannot_eat_animal_string;                      // 0x0B28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class APrimalDinoCharacter*                        fish_to_feed_shadowmane;                                  // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                allowed_retry_attempts;                                   // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                current_try_attempts;                                     // 0x0B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C");
		return ptr;
	}


	void try_feed_shadowmane(class APrimalDinoCharacter* fish);
	void Find_Shadowmane(bool Backup, class APrimalDinoCharacter** Shadowmane);
	void STATIC_BPDrawItemIcon(class UCanvas** ItemCanvas, bool* bItemEnabled, struct FVector2D* ItemCanvasSize, struct FVector2D* ItemCanvasScale, struct FLinearColor* TheTintColor);
	void SlottedTick(float* DeltaSeconds);
	void STATIC_BlueprintUsed();
	class FString BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC);
	bool STATIC_BPCanUse(bool* bIgnoreCooldown);
	void ExecuteUbergraph_PrimalItem_FishBasketFilled(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
