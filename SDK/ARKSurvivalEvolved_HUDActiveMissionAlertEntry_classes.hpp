#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HUDActiveMissionAlertEntry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUDActiveMissionAlertEntry.HUDActiveMissionAlertEntry_C
// 0x0020 (0x0260 - 0x0240)
class UHUDActiveMissionAlertEntry_C : public UUserWidget
{
public:
	class UTextBlock*                                  AlertContentTextBlock;                                    // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  AlertCountTextBlock;                                      // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      AlertEntryIcon;                                           // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USizeBox*                                    AlertEntryIconContainer;                                  // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDActiveMissionAlertEntry.HUDActiveMissionAlertEntry_C");
		return ptr;
	}


	void ExecuteUbergraph_HUDActiveMissionAlertEntry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
