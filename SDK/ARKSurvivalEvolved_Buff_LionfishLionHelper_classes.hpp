#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_LionfishLionHelper_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_LionfishLionHelper.Buff_LionfishLionHelper_C
// 0x0760 (0x10C0 - 0x0960)
class ABuff_LionfishLionHelper_C : public APrimalBuff
{
public:
	class ALionfishLion_Character_BP_C*                LionfishRef;                                              // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 ComboCounterHUDElementTemplate;                           // 0x0968(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 TeleportAttackHUDElementTemplate;                         // 0x0AB8(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 StealthAbilityHUDElementTemplate;                         // 0x0C08(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 RoarAbilityHUDElement;                                    // 0x0D58(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                                  TeleportTargetIcon;                                       // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   TeleWorldHUDElementSize;                                  // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAnchors                                    TeleWorldHUDElementAnchor;                                // 0x0EB8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TeleWorldIndicatorSizeMult;                               // 0x0EC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                TargetIndicatorColor;                                     // 0x0ECC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetIndicatorOffsetY;                                   // 0x0EDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     TeleportFillingTexture;                                   // 0x0EE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     TeleportReadyTexture;                                     // 0x0EE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     StealthFillingTexture;                                    // 0x0EF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     RoarFillingTexture;                                       // 0x0EF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     StealthEmptyTexture;                                      // 0x0F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     RoarEmptyTexture;                                         // 0x0F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     RoarReadyTexture;                                         // 0x0F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     StealthReadyTexture;                                      // 0x0F18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FemaleTeleportHUDLocationX;                               // 0x0F20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FemaleStealthHUDLocationX;                                // 0x0F24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ComboBarColor_Default;                                    // 0x0F28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ComboBarColor_Max;                                        // 0x0F38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ComboBarColor_Max_Blink;                                  // 0x0F48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 LeapHUDElementTemplate;                                   // 0x0F58(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                                     LeapFillingTexture;                                       // 0x10A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     LeapReadyTexture;                                         // 0x10B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FemaleLeapHUDLocationX;                                   // 0x10B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoRiderGlobalHUDOffsetY;                                  // 0x10BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_LionfishLionHelper.Buff_LionfishLionHelper_C");
		return ptr;
	}


	void BPActivated(class AActor** ForInstigator);
	void BPDeactivated(class AActor** ForInstigator);
	void ReceiveBeginPlay();
	void STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_LionfishLionHelper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
