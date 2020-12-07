#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramsMenu_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass EngramsMenu.EngramsMenu_C
// 0x0090 (0x06D0 - 0x0640)
class UEngramsMenu_C : public UUI_EngramsMenu
{
public:
	class UCustomButtonWidget*                         AberrationEngramsButton;                                  // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         ApplyEngramButton;                                        // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         ArkPrimeEngramsButton;                                    // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      ArkPrimeIcon;                                             // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            EngramFilter;                                             // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         ExtinctionEngramsButton;                                  // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      ExtinctionEngramsIcon;                                    // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         GenesisEngramsButton;                                     // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      GenesisEngramsIcon;                                       // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_16;                                                 // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_152;                                                // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      LearnEngramGamepadCallout;                                // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         ScorchedEarthEngramsButton;                               // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      ScorchedEarthIcon;                                        // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         TekEngramsButton;                                         // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      TekEngramsIcon;                                           // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         UnlearnedEngramsButton;                                   // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      UnlearnedEngramsIcon;                                     // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EngramsMenu.EngramsMenu_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramsMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
