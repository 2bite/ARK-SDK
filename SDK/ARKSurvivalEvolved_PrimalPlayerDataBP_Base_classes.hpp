#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0044 (0x04A4 - 0x0460)
class UPrimalPlayerDataBP_Base_C : public UPrimalPlayerData
{
public:
	int                                                NumAscensions;                                            // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	TArray<float>                                      AscensionData;                                            // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TArray<struct FName>                               BossDinoNameTagAscensionDataMap;                          // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SavedPlayerDataVersion;                                   // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                CurrentPlayerDataVersion;                                 // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class FString>                              Boss_Blueprint_Paths;                                     // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumChibiLevelUpsData;                                     // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C");
		return ptr;
	}


	void BPForceDefeatedBoss(int* DifficultyIndex, struct FName* BossName, class AShooterPlayerController** PlayerController);
	void BPCreatedNewPlayerData();
	void DefeatedBoss(class APrimalDinoCharacter* BossChar, int DifficultyIndex, const struct FName& TagOverride, class AShooterPlayerController* ForPC);
	void ExecuteUbergraph_PrimalPlayerDataBP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
