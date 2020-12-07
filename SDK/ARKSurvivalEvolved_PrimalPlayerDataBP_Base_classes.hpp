#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x0038 (0x0508 - 0x04D0)
class UPrimalPlayerDataBP_Base_C : public UPrimalPlayerData
{
public:
	int                                                NumAscensions;                                            // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	TArray<float>                                      AscensionData;                                            // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TArray<struct FName>                               BossDinoNameTagAscensionDataMap;                          // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SavedPlayerDataVersion;                                   // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                CurrentPlayerDataVersion;                                 // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HexagonCount;                                             // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                NumChibiLevelUpsData;                                     // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C");
		return ptr;
	}


	void STATIC_BPForceDefeatedBoss(int* DifficultyIndex, struct FName* BossName, class AShooterPlayerController** PlayerController);
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
