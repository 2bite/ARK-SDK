#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekBackpack_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_MekBackpack_Base.Buff_MekBackpack_Base_C
// 0x0002 (0x0952 - 0x0950)
class ABuff_MekBackpack_Base_C : public APrimalBuff
{
public:
	bool                                               InterceptMekAttacks;                                      // 0x0950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseOverrideTurnInPlaceSpeed;                              // 0x0951(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MekBackpack_Base.Buff_MekBackpack_Base_C");
		return ptr;
	}


	void OnSyncColorization();
	void NotifySetRider(class AShooterCharacter* Rider);
	void RestoreBackpackSaveData(const struct FMekBackpackData& SaveData);
	void GetBackpackSaveData(struct FMekBackpackData* Data);
	void NotifyInventoryChange(class UPrimalItem* Item, bool ItemAdded, bool ItemEquipped);
	void BPActivated(class AActor** ForInstigator);
	void SetBackpackMalfunctioned(bool IsBackpackDisabled);
	void NotifyActivateBackpack();
	void OverrideTurnInPlaceSpeed(float DefaultSpeed, float* newSpeed);
	void NotifyStopAttack();
	void NotifyStartAttack(int AttackIndex);
	void AllowHurtAnim(bool* Allow);
	void AllowTargeting(bool* Allow);
	void NotifyStopHover();
	void NotifyStartHover();
	void AllowMekHover(bool* CanHover);
	void NotifyStopTargeting();
	void NotifyStartTargeting();
	void OnAnimNotifyEvent(const struct FName& EventName);
	void AllowMekPistol(bool* Allowed);
	void AllowMekSword(bool* Allowed);
	void OnBackpackAttack();
	void BPDeactivated(class AActor** ForInstigator);
	void GetMek(bool* IsValid, class AMek_Character_BP_C** MekChar);
	void IsBackpackActive(bool* IsActive);
	void CanDeactivateBackpack(bool* CanDeactivate);
	void CanActivateBackpack(bool* CanActivate, class FString* FailureMessage);
	void OnBackpackDeactivated();
	void OnBackpackActivated();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_MekBackpack_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
