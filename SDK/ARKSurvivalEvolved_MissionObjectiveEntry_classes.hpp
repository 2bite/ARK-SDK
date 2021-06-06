#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionObjectiveEntry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MissionObjectiveEntry.MissionObjectiveEntry_C
// 0x0010 (0x0278 - 0x0268)
class UMissionObjectiveEntry_C : public UMissionObjectiveEntryWidget
{
public:
	class UImage*                                      MissionObjectiveCompletionIcon;                           // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                MissionObjectiveProgressBar;                              // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionObjectiveEntry.MissionObjectiveEntry_C");
		return ptr;
	}


	void ExecuteUbergraph_MissionObjectiveEntry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
