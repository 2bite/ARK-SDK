#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetGeneric_ExplorerNote_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_ExplorerNote.DataListEntryWidgetGeneric_ExplorerNote_C
// 0x0008 (0x02F8 - 0x02F0)
class UDataListEntryWidgetGeneric_ExplorerNote_C : public UDataListEntryWidget
{
public:
	class UDataListEntryButton*                        MyDataListButton;                                         // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_ExplorerNote.DataListEntryWidgetGeneric_ExplorerNote_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListEntryWidgetGeneric_ExplorerNote(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
