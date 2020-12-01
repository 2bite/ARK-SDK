#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TribeWarButton_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TribeWarButton.TribeWarButton_C
// 0x0008 (0x0548 - 0x0540)
class UTribeWarButton_C : public UTribeWarButtonWidget
{
public:
	class UCustomButtonWidget*                         Button;                                                   // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TribeWarButton.TribeWarButton_C");
		return ptr;
	}


	void ExecuteUbergraph_TribeWarButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
