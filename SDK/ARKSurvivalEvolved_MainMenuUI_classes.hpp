#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MainMenuUI_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MainMenuUI.MainMenuUI_C
// 0x0357 (0x0A07 - 0x06B0)
class UMainMenuUI_C : public UUI_MainMenu
{
public:
	class UWidgetAnimation*                            FadeIn;                                                   // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            FadeOut;                                                  // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Close;                                                    // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Open;                                                     // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         CreditsButton;                                            // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         ExitButton;                                               // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     ExplorersPassButton;                                      // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         HelpButton;                                               // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         HostButton;                                               // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_108;                                                // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_152;                                                // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_2403;                                               // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_4094;                                               // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_4113;                                               // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_4121;                                               // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_4129;                                               // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      LinuxBackgroundImage;                                     // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         ListSessionsButton;                                       // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      ListSessionsButtonBackground;                             // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         OptionsButton;                                            // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         PatchNotesButton;                                         // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     ScorchedEarthStoreButton;                                 // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      TotalConversionImage;                                     // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     WebButton;                                                // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SponsoredModsUIClass;                                     // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMediaPlayer*                                MoviePlayer;                                              // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FButtonStyle                                AlternateCTAStyle;                                        // 0x0780(0x0248) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               CallFunc_OwnsDLC_ReturnValue;                             // 0x09C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x09C9(0x0007) MISSED OFFSET
	class AGameMode*                                   CallFunc_GetGameMode_ReturnValue;                         // 0x09D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterGame_Menu*                           K2Node_DynamicCast_AsShooterGame_Menu;                    // 0x09D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x09E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_OwnsDLC_ReturnValue2;                            // 0x09E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x09E2(0x0006) MISSED OFFSET
	class UTexture2D*                                  CallFunc_GetMainMenuBackgroundTexture_ReturnValue;        // 0x09E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x09F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_OwnsDLC_ReturnValue3;                            // 0x09F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x09F2(0x0006) MISSED OFFSET
	class UCreditsUI_C*                                CallFunc_Create_ReturnValue;                              // 0x09F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_OwnsDLC_ReturnValue4;                            // 0x0A00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_OwnsDLC_ReturnValue5;                            // 0x0A01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_OwnsDLC_ReturnValue6;                            // 0x0A02(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0A03(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0A04(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_OwnsDLC_ReturnValue7;                            // 0x0A05(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_OwnsDLC_ReturnValue8;                            // 0x0A06(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainMenuUI.MainMenuUI_C");
		return ptr;
	}


	void BndEvt__WebButton_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__ScorchedEarthStoreButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ExplorersPassButton_K2Node_ComponentBoundEvent_477_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_MainMenuUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
