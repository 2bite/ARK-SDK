#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ViewableIncubatorEgg_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ViewableIncubatorEgg.ViewableIncubatorEgg_C
// 0x0068 (0x04D0 - 0x0468)
class AViewableIncubatorEgg_C : public AActor
{
public:
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalItemConsumable_Egg_C*                 eggItem;                                                  // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FloatingHUDWorldOffset;                                   // 0x0488(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlliedFloatingHUDDistance;                                // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NonAlliedFloatingHUDDistance;                             // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	class UClass*                                      FloatingHUDToolTipClass;                                  // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   OverlayTooltipPadding;                                    // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   OverlayTooltipScale;                                      // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ScreenProjectionOffset;                                   // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasHadFirstUpdate;                                       // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04C1(0x0003) MISSED OFFSET
	struct FVector                                     LastSetPositionOffset;                                    // 0x04C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ViewableIncubatorEgg.ViewableIncubatorEgg_C");
		return ptr;
	}


	void SetDisplay();
	void UpdateDisplay(bool FromAdd, class UPrimalItemConsumable_Egg_C* EggClass);
	void DrawBasicFloatingHUD(class AHUD** ForHUD);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ViewableIncubatorEgg(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
