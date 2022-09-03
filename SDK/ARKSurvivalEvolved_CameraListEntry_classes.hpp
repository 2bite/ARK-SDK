#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CameraListEntry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CameraListEntry.CameraListEntry_C
// 0x004D (0x0565 - 0x0518)
class UCameraListEntry_C : public UBaseSelectableButtonWidget
{
public:
	class UCustomButtonWidget*                         Button;                                                   // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  DistanceLabel;                                            // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  EntryName;                                                // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     SelectedBorder;                                           // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USecurityCameraHUD_C*                        ParentHUD;                                                // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CameraIndex;                                              // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraLocation;                                           // 0x0544(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      CameraName;                                               // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Distance;                                                 // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0564(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CameraListEntry.CameraListEntry_C");
		return ptr;
	}


	void SetSelected(bool IsSelected);
	void STATIC_InitForCamera(class USecurityCameraHUD_C* OwningHUD, const class FString& CameraName, const struct FVector& Location, int index, float Distance);
	void BndEvt__Button_K2Node_ComponentBoundEvent_304_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_CameraListEntry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
