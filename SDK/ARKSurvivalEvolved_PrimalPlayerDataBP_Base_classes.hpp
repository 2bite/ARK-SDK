#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalPlayerDataBP_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C
// 0x0038 (0x0518 - 0x04E0)
class UPrimalPlayerDataBP_Base_C : public UPrimalPlayerData
{
public:
	int                                                NumAscensions;                                            // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	TArray<float>                                      AscensionData;                                            // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TArray<struct FName>                               BossDinoNameTagAscensionDataMap;                          // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SavedPlayerDataVersion;                                   // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                CurrentPlayerDataVersion;                                 // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HexagonCount;                                             // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                NumChibiLevelUpsData;                                     // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C");
		return ptr;
	}


	void BPForceDefeatedBoss(int* DifficultyIndex, struct FName* BossName, class AShooterPlayerController** PlayerController);
	bool SetPlayerHexagonCount(int* NewHexagonCount);
	int GetPlayerHexagonCount();
	void BPCreatedNewPlayerData();
	void DefeatedBoss(class APrimalDinoCharacter* BossChar, int DifficultyIndex, const struct FName& TagOverride, class AShooterPlayerController* ForPC);
	void ExecuteUbergraph_PrimalPlayerDataBP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
