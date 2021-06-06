#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionTimeRemainingWidget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MissionTimeRemainingWidget.MissionTimeRemainingWidget_C
// 0x0018 (0x0268 - 0x0250)
class UMissionTimeRemainingWidget_C : public UMissionTimerWidget
{
public:
	class UProgressBar*                                TimeRemainingProgressBar;                                 // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  TimeRemainingText;                                        // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  TimerLabelText;                                           // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionTimeRemainingWidget.MissionTimeRemainingWidget_C");
		return ptr;
	}


	void ExecuteUbergraph_MissionTimeRemainingWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
