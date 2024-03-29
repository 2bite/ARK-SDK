#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Mutagen_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C
// 0x003C (0x0B24 - 0x0AE8)
class UPrimalItemConsumable_Mutagen_C : public UPrimalItemConsumableGeneric_C
{
public:
	float                                              MinimumMutationCost;                                      // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumMutationCost;                                      // 0x0AEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            PreviousStriderClientValue;                               // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            ServerStriderToHack;                                      // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       StriderCustomTag;                                         // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Required_Mutagen_Per_Level_Curve;                         // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               use_curve_for_finding_mutagen_amount,_if_false_use_multiplier_and_power;// 0x0B10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B11(0x0003) MISSED OFFSET
	float                                              required_mutagen_multiplier;                              // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              required_mutagen_power;                                   // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                saved_current_mutagen_in_inv;                             // 0x0B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                saved_amount_of_mutagen_needed;                           // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Mutagen.PrimalItemConsumable_Mutagen_C");
		return ptr;
	}


	void BPPreUseItem();
	void BPServerHandleItemNetExecCommand(class AShooterPlayerController** ForPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void STATIC_find_strider(bool Backup, class APrimalDinoCharacter** strider);
	void GetAmountInInventory(int* NewParam);
	int CalculateAmountNeeded();
	class FString BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC);
	void STATIC_BlueprintUsed();
	bool STATIC_BPCanUse(bool* bIgnoreCooldown);
	void ExecuteUbergraph_PrimalItemConsumable_Mutagen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
