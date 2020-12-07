#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArkCreaturesPanel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ArkCreaturesPanel.ArkCreaturesPanel_C
// 0x0040 (0x0858 - 0x0818)
class UArkCreaturesPanel_C : public UInventoryArkCreaturesPanel
{
public:
	class UCustomButtonWidget*                         DownloadDinoButton;                                       // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      DownloadDinoIcon;                                         // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_5;                                                  // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_6;                                                  // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      SeparatorLineBottom;                                      // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      SeparatorLineTop;                                         // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         UploadDinoButton;                                         // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      UploadDinoIcon;                                           // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ArkCreaturesPanel.ArkCreaturesPanel_C");
		return ptr;
	}


	void ExecuteUbergraph_ArkCreaturesPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
