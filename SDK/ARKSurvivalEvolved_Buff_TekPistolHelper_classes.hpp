#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekPistolHelper_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekPistolHelper.Buff_TekPistolHelper_C
// 0x0750 (0x10C8 - 0x0978)
class ABuff_TekPistolHelper_C : public APrimalBuff
{
public:
	struct FHUDElement                                 ModeTextHUDElement;                                       // 0x0978(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	double                                             LastModeSwitchTime;                                       // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                KillModeTextColor;                                        // 0x0AD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                StunModeTextColor;                                        // 0x0AE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HealModeTextColor;                                        // 0x0AF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 HealthBarHUDElementTemplate;                              // 0x0B00(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TEnumAsByte<EObjectTypeQuery>>              HUDDetectObjectTypes;                                     // 0x0C50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FHUDElement                                 HealthBarFrameHUDElementTemplate;                         // 0x0C60(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                HighHPColor;                                              // 0x0DB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                LowHPColor;                                               // 0x0DC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HUDIndicatorVisibilityRange;                              // 0x0DD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0DD4(0x0004) MISSED OFFSET
	struct FHUDElement                                 KillBarHUDElementTemplate;                                // 0x0DD8(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 StunBarHUDElementTemplate;                                // 0x0F28(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              HUDElementScaleClose;                                     // 0x1078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HUDElementScaleFar;                                       // 0x107C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HealthBarWorldOffsetClose;                                // 0x1080(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HealthBarWorldOffsetFar;                                  // 0x108C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     KillBarWorldOffsetClose;                                  // 0x1098(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     KillBarWorldOffsetFar;                                    // 0x10A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StunBarWorldOffsetClose;                                  // 0x10B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StunBarWorldOffsetFar;                                    // 0x10BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekPistolHelper.Buff_TekPistolHelper_C");
		return ptr;
	}


	void BPReactivateWithDamageCauser(class AActor** ForInstigator, class AActor** ForDamageCauser);
	void Set_HUDElement_Location_and_Scale_from_World_Projection(class APlayerController* PlayerController, class AActor* TargetActor, const struct FVector& WorldOffsetWhenClose, const struct FVector& WorldOffsetWhenFar, struct FHUDElement* HUDElement, struct FHUDElement* Out_Elem, bool* IsTargetOnScreen);
	void STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekPistolHelper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
