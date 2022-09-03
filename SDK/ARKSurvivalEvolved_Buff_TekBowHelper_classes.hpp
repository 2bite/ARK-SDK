#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekBowHelper_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekBowHelper.Buff_TekBowHelper_C
// 0x04BC (0x0E34 - 0x0978)
class ABuff_TekBowHelper_C : public APrimalBuff
{
public:
	struct FHUDElement                                 AmmoTypeHUDElement;                                       // 0x0978(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                FuelHUDBackgroundColor_Low;                               // 0x0AC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FuelHUDBackgroundColor_Critical;                          // 0x0AD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FuelHUDBackgroundColor_Default;                           // 0x0AE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDTextColor_Default;                                     // 0x0AF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDTextColor_Critical;                                    // 0x0B08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDTextColor_Low;                                         // 0x0B18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 AmmoCostLabelHUDElement;                                  // 0x0B28(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	double                                             LastAmmoSwitchTime;                                       // 0x0C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 ModeTextHUDElement;                                       // 0x0C80(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                HUDTextColor_Mode0;                                       // 0x0DD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDTextColor_Mode1;                                       // 0x0DE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDTextColor_Mode2;                                       // 0x0DF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUDTextColor_Mode3;                                       // 0x0E00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UObject*>                             PreventedNotifySounds;                                    // 0x0E10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastAccessorySwitchTime;                                  // 0x0E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PrevIsAccessoryActive;                                    // 0x0E28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E29(0x0003) MISSED OFFSET
	struct FName                                       ConsolidatedMultiUse;                                     // 0x0E2C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekBowHelper.Buff_TekBowHelper_C");
		return ptr;
	}


	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPPreventNotifySound(class USoundBase** SoundIn);
	void STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekBowHelper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
