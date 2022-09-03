#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SponsoredModsUI_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SponsoredModsUI.SponsoredModsUI_C
// 0x017E (0x0696 - 0x0518)
class USponsoredModsUI_C : public UPrimalUI
{
public:
	class UWidgetAnimation*                            Close;                                                    // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Open;                                                     // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     Button_187;                                               // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     Button_660;                                               // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     Button_665;                                               // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     Button_671;                                               // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     Button_680;                                               // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     Button_681;                                               // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     Button_682;                                               // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     Button_683;                                               // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     Button_684;                                               // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     Button_691;                                               // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     Button_693;                                               // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     Button_694;                                               // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     Button_695;                                               // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     ButtonMod0;                                               // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     ButtonMod1;                                               // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                ButtonPanel;                                              // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         CloseButton;                                              // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_1;                                                  // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_2;                                                  // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_21;                                                 // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_377;                                                // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NewVar;                                                   // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInit;                                                    // 0x05D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x05D2(0x0006) MISSED OFFSET
	class UWidget*                                     K2Node_CustomEvent_clickedWidget;                         // 0x05D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Variable;                                        // 0x05E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x05E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Left_ReturnValue;                                // 0x05E8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_NotEqual_StrStr_ReturnValue;                     // 0x05F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05F9(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x0600(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Temp_int_Variable2;                                       // 0x0610(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x0614(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FGeometry                                   K2Node_Event_MyGeometry;                                  // 0x0618(0x0034) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_InDeltaTime;                                 // 0x064C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWidget*                                     CallFunc_GetChildAt_ReturnValue;                          // 0x0650(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0658(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     K2Node_DynamicCast_AsButton;                              // 0x0668(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0670(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0671(0x0007) MISSED OFFSET
	class UWidget*                                     CallFunc_GetChildAt_ReturnValue2;                         // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UButton*                                     K2Node_DynamicCast_AsButton2;                             // 0x0680(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0688(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsWorkshopIDSubscribed_ReturnValue;              // 0x0689(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x068A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x068B(0x0001) MISSED OFFSET
	int                                                CallFunc_GetChildrenCount_ReturnValue;                    // 0x068C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue;                     // 0x0690(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x0694(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue2;                   // 0x0695(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SponsoredModsUI.SponsoredModsUI_C");
		return ptr;
	}


	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_314_OnButtonClickedEvent__DelegateSignature();
	void OnClickedObject_Event(class UWidget* clickedWidget);
	void ExecuteUbergraph_SponsoredModsUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
