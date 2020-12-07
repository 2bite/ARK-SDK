#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ContextMenuItem_Spinner_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ContextMenuItem_Spinner.ContextMenuItem_Spinner_C
// 0x0028 (0x0378 - 0x0350)
class UContextMenuItem_Spinner_C : public UContextMenuItem_Spinner
{
public:
	class UCustomButtonWidget*                         ButtonDecrease;                                           // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         ButtonIncrease;                                           // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_1;                                                  // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_2;                                                  // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableText*                               TextInput;                                                // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContextMenuItem_Spinner.ContextMenuItem_Spinner_C");
		return ptr;
	}


	void ExecuteUbergraph_ContextMenuItem_Spinner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
