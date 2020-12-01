#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GamepadButtonLegend_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GamepadButtonLegend.GamepadButtonLegend_C
// 0x0008 (0x0288 - 0x0280)
class UGamepadButtonLegend_C : public UGamepadButtonLegendWidget
{
public:
	class UImage*                                      ButtonImage;                                              // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamepadButtonLegend.GamepadButtonLegend_C");
		return ptr;
	}


	void ExecuteUbergraph_GamepadButtonLegend(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
