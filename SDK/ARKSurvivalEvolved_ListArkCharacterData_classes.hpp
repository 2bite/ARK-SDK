#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0028 (0x0818 - 0x07F0)
class UListArkCharacterData_C : public UUI_ListCharacterData
{
public:
	class UCustomButtonWidget*                         CancelButton;                                             // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         DownloadCharacterButton;                                  // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_141;                                                // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      SeparatorLineBottom;                                      // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      SeparatorLineTop;                                         // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
