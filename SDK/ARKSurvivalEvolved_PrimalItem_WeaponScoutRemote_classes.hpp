#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponScoutRemote_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C
// 0x0040 (0x0A30 - 0x09F0)
class UPrimalItem_WeaponScoutRemote_C : public UPrimalItemWeaponGeneric_C
{
public:
	class AScout_Character_BP_C*                       FiredScout;                                               // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      DefaultScoutStats;                                        // 0x09F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	class FString                                      BlueprintDisplayName;                                     // 0x0A08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  BlueprintIcon;                                            // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ScoutResource;                                            // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ScoutLevelToItemRatingMultCurve;                          // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponScoutRemote.PrimalItem_WeaponScoutRemote_C");
		return ptr;
	}


	void STATIC_GetScoutStats(TArray<float>* Stats);
	class UTexture2D* BPGetItemIcon(class AShooterPlayerController** ForPC);
	class FString BPGetItemName(class FString* ItemNameIn, class AShooterPlayerController** ForPC);
	void STATIC_SetScoutCharacterStatusValues(TArray<float>* Stats);
	void OnRep_ScoutStats();
	class FString BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC);
	void ScoutPossessedBySurvivor();
	void ScoutReleasedPossessingSurvivor();
	void BlueprintUnequipped();
	void Can_FireWeapon(bool* Result, TEnumAsByte<EScoutRemoteReturnCode>* FailReason);
	void BlueprintEquipped(bool* bIsFromSaveGame);
	void ExecuteUbergraph_PrimalItem_WeaponScoutRemote(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
