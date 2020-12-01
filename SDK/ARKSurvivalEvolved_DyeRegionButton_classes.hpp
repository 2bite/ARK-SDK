#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DyeRegionButton_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DyeRegionButton.DyeRegionButton_C
// 0x0008 (0x0560 - 0x0558)
class UDyeRegionButton_C : public UDyeRegionButtonWidget
{
public:
	class UCustomButtonWidget*                         Button;                                                   // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DyeRegionButton.DyeRegionButton_C");
		return ptr;
	}


	void ExecuteUbergraph_DyeRegionButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
