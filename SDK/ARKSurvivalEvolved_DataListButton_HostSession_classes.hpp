#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListButton_HostSession_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListButton_HostSession.DataListButton_HostSession_C
// 0x0028 (0x05E0 - 0x05B8)
class UDataListButton_HostSession_C : public UDataListEntryButton_HostSession
{
public:
	class UCustomButtonWidget*                         Button;                                                   // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         DeleteDedicatedServerSaveData;                            // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         DeleteSinglePlayerSaveData;                               // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_331;                                                // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_342;                                                // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListButton_HostSession.DataListButton_HostSession_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListButton_HostSession(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
