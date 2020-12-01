#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListButton_ListSession_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListButton_ListSession.DataListButton_ListSession_C
// 0x0020 (0x07C8 - 0x07A8)
class UDataListButton_ListSession_C : public UDataListEntryButton_ListSession
{
public:
	class UCustomButtonWidget*                         Button;                                                   // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_130;                                                // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_138;                                                // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_1458;                                               // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListButton_ListSession.DataListButton_ListSession_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListButton_ListSession(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
