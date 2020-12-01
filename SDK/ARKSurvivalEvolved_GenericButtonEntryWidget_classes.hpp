#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GenericButtonEntryWidget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GenericButtonEntryWidget.GenericButtonEntryWidget_C
// 0x0008 (0x02F8 - 0x02F0)
class UGenericButtonEntryWidget_C : public UDataListEntryWidget
{
public:
	class UButton*                                     TraditionalButton;                                        // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GenericButtonEntryWidget.GenericButtonEntryWidget_C");
		return ptr;
	}


	void ExecuteUbergraph_GenericButtonEntryWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
