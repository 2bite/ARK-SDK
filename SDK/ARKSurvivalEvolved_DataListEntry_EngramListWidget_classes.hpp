#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntry_EngramListWidget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListEntry_EngramListWidget.DataListEntry_EngramListWidget_C
// 0x0028 (0x05F8 - 0x05D0)
class UDataListEntry_EngramListWidget_C : public UDataListEntryEngramList
{
public:
	class UImage*                                      ElementIcon;                                              // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      EngramRowEnd;                                             // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      EngramRowMiddle;                                          // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      EngramRowStart;                                           // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_152;                                                // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntry_EngramListWidget.DataListEntry_EngramListWidget_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListEntry_EngramListWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
