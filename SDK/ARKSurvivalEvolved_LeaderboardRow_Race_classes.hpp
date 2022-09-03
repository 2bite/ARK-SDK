#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LeaderboardRow_Race_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass LeaderboardRow_Race.LeaderboardRow_Race_C
// 0x0008 (0x05E8 - 0x05E0)
class ULeaderboardRow_Race_C : public ULeaderboardRowWidget
{
public:
	class UHorizontalBox*                              ColumnContainerWidget;                                    // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LeaderboardRow_Race.LeaderboardRow_Race_C");
		return ptr;
	}


	void ExecuteUbergraph_LeaderboardRow_Race(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
