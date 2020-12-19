#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterTankBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterTankBaseBP.WaterTankBaseBP_C
// 0x0010 (0x0EC8 - 0x0EB8)
class AWaterTankBaseBP_C : public APrimalStructureItemContainer_CropPlot
{
public:
	class UPrimalInventoryBP_WaterTank_C*              PrimalInventoryBP_WaterTank_C1;                           // 0x0EB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterTankBaseBP.WaterTankBaseBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WaterTankBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
