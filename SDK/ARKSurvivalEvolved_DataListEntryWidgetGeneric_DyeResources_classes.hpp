#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetGeneric_DyeResources_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_DyeResources.DataListEntryWidgetGeneric_DyeResources_C
// 0x0008 (0x0530 - 0x0528)
class UDataListEntryWidgetGeneric_DyeResources_C : public UDataListEntryButton_DyeResources
{
public:
	class UImage*                                      ItemIcon;                                                 // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_DyeResources.DataListEntryWidgetGeneric_DyeResources_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListEntryWidgetGeneric_DyeResources(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
