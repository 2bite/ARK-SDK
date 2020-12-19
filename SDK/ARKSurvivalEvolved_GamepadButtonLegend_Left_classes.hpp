#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GamepadButtonLegend_Left_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GamepadButtonLegend_Left.GamepadButtonLegend_Left_C
// 0x0008 (0x0288 - 0x0280)
class UGamepadButtonLegend_Left_C : public UGamepadButtonLegendWidget
{
public:
	class UImage*                                      ButtonImage;                                              // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamepadButtonLegend_Left.GamepadButtonLegend_Left_C");
		return ptr;
	}


	void ExecuteUbergraph_GamepadButtonLegend_Left(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
