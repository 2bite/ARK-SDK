#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CropPlotLarge_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CropPlotLarge_SM.CropPlotLarge_SM_C
// 0x0010 (0x0F10 - 0x0F00)
class ACropPlotLarge_SM_C : public ACropPlotBaseBP_C
{
public:
	class UPrimalInventoryBP_CropPlot_Large_C*         PrimalInventoryBP_CropPlot_Large_C2;                      // 0x0F00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x0F08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CropPlotLarge_SM.CropPlotLarge_SM_C");
		return ptr;
	}


	bool AllowManualMultiUseActivation(class APlayerController** ForPC);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void UserConstructionScript();
	void ExecuteUbergraph_CropPlotLarge_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
