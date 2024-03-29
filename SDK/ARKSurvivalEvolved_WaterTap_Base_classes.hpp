#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterTap_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterTap_Base.WaterTap_Base_C
// 0x0008 (0x0E18 - 0x0E10)
class AWaterTap_Base_C : public AStructureItemContainerBaseBP_C
{
public:
	class UPrimalInventoryBP_Tap_C*                    PrimalInventoryBP_Tap_C1;                                 // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterTap_Base.WaterTap_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WaterTap_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
