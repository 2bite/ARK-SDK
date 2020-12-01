#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ScoutToolTipWidgetTargetingInfo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ScoutToolTipWidgetTargetingInfo.ScoutToolTipWidgetTargetingInfo_C
// 0x0038 (0x0328 - 0x02F0)
class UScoutToolTipWidgetTargetingInfo_C : public UTargetingInfoToolTipWidget
{
public:
	class UProgressBar*                                HealthProgressBar;                                        // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_294;                                                // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_53;                                                 // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_8;                                                  // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_99;                                                 // 0x0310(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      ItemQualityBG;                                            // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                TorpidityProgressBar;                                     // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScoutToolTipWidgetTargetingInfo.ScoutToolTipWidgetTargetingInfo_C");
		return ptr;
	}


	void ExecuteUbergraph_ScoutToolTipWidgetTargetingInfo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
