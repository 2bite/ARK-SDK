#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetGeneric_Engram_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_Engram.DataListEntryWidgetGeneric_Engram_C
// 0x0008 (0x02F8 - 0x02F0)
class UDataListEntryWidgetGeneric_Engram_C : public UDataListEntryWidget
{
public:
	class UDataListEntryButton_CustomOverlay*          MyDataListButton;                                         // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_Engram.DataListEntryWidgetGeneric_Engram_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListEntryWidgetGeneric_Engram(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
