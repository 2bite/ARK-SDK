#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterTankBaseBP_NoInv_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterTankBaseBP_NoInv.WaterTankBaseBP_NoInv_C
// 0x0008 (0x0EF0 - 0x0EE8)
class AWaterTankBaseBP_NoInv_C : public APrimalStructureItemContainer_CropPlot_VisualItems
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0EE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterTankBaseBP_NoInv.WaterTankBaseBP_NoInv_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WaterTankBaseBP_NoInv(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
