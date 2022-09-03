#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetAllPaintings_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListEntryWidgetAllPaintings.DataListEntryWidgetAllPaintings_C
// 0x0008 (0x02F8 - 0x02F0)
class UDataListEntryWidgetAllPaintings_C : public UDataListEntryWidget
{
public:
	class UAllPaintingsEntryButton*                    PaintingEntryButton;                                      // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetAllPaintings.DataListEntryWidgetAllPaintings_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListEntryWidgetAllPaintings(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
