#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ListArkCharacterData_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ListArkCharacterData.ListArkCharacterData_C
// 0x0028 (0x0828 - 0x0800)
class UListArkCharacterData_C : public UUI_ListCharacterData
{
public:
	class UCustomButtonWidget*                         CancelButton;                                             // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         DownloadCharacterButton;                                  // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_141;                                                // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      SeparatorLineBottom;                                      // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      SeparatorLineTop;                                         // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ListArkCharacterData.ListArkCharacterData_C");
		return ptr;
	}


	void ExecuteUbergraph_ListArkCharacterData(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
