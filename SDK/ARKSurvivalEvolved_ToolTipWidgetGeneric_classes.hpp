#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ToolTipWidgetGeneric_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ToolTipWidgetGeneric.ToolTipWidgetGeneric_C
// 0x0008 (0x02B0 - 0x02A8)
class UToolTipWidgetGeneric_C : public UToolTipWidget
{
public:
	class UImage*                                      Image_1;                                                  // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetGeneric.ToolTipWidgetGeneric_C");
		return ptr;
	}


	void ExecuteUbergraph_ToolTipWidgetGeneric(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
