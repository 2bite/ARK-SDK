#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEnrtyWidgitAdminMangment_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListEnrtyWidgitAdminMangment.DataListEnrtyWidgitAdminMangment_C
// 0x0008 (0x02F8 - 0x02F0)
class UDataListEnrtyWidgitAdminMangment_C : public UDataListEntryWidget
{
public:
	class UAdminPlayerInfoEntryButton*                 AdminPlayerInfoEntryButton;                               // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEnrtyWidgitAdminMangment.DataListEnrtyWidgitAdminMangment_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListEnrtyWidgitAdminMangment(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
