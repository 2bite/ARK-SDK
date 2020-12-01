#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CropPlotBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CropPlotBaseBP.CropPlotBaseBP_C
// 0x0008 (0x0EB8 - 0x0EB0)
class ACropPlotBaseBP_C : public APrimalStructureItemContainer_CropPlot
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0EB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CropPlotBaseBP.CropPlotBaseBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CropPlotBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
