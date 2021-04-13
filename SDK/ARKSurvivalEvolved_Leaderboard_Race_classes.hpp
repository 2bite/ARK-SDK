#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Leaderboard_Race_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Leaderboard_Race.Leaderboard_Race_C
// 0x001C (0x0074 - 0x0058)
class ULeaderboard_Race_C : public ULeaderboard
{
public:
	class UTexture2D*                                  GoldIcon;                                                 // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  SilverIcon;                                               // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  BronzeIcon;                                               // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPlayerNameCharacterCount;                              // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Leaderboard_Race.Leaderboard_Race_C");
		return ptr;
	}


	struct FLeaderboardDisplayRow STATIC_BPFormatLeaderboardRow(struct FName* MissionTag, int* index, struct FLeaderboardRow* DatabaseRow);
	void SelectIcon(int Place, class UTexture2D** Icon);
	void ExecuteUbergraph_Leaderboard_Race(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
