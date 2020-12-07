#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TutorialUI_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TutorialUI.TutorialUI_C
// 0x0028 (0x0570 - 0x0548)
class UTutorialUI_C : public UUI_Tutorial
{
public:
	class UWidgetAnimation*                            Close;                                                    // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Open;                                                     // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_2;                                                  // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_5;                                                  // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      TutorialImage;                                            // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialUI.TutorialUI_C");
		return ptr;
	}


	void ExecuteUbergraph_TutorialUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
