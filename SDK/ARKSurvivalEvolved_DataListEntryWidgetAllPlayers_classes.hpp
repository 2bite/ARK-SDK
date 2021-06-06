#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetAllPlayers_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListEntryWidgetAllPlayers.DataListEntryWidgetAllPlayers_C
// 0x0008 (0x02F8 - 0x02F0)
class UDataListEntryWidgetAllPlayers_C : public UDataListEntryWidget
{
public:
	class UAllPlayersEntryButton*                      PlayerEntryButton;                                        // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetAllPlayers.DataListEntryWidgetAllPlayers_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListEntryWidgetAllPlayers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
