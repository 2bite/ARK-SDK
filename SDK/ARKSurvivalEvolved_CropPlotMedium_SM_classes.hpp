#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CropPlotMedium_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CropPlotMedium_SM.CropPlotMedium_SM_C
// 0x0010 (0x0ED0 - 0x0EC0)
class ACropPlotMedium_SM_C : public ACropPlotBaseBP_C
{
public:
	class UBoxComponent*                               Box1;                                                     // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_CropPlot_Medium_C*        PrimalInventoryBP_CropPlot_Medium_C1;                     // 0x0EC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CropPlotMedium_SM.CropPlotMedium_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CropPlotMedium_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
