#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_Vessel_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_Vessel_BP.SM_Vessel_BP_C
// 0x0008 (0x0E10 - 0x0E08)
class ASM_Vessel_BP_C : public AStructureItemContainerBaseBP_VisualItems_C
{
public:
	class UPrimalInventoryBP_Vessel_C*                 PrimalInventoryBP_Vessel_C1;                              // 0x0E08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM_Vessel_BP.SM_Vessel_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SM_Vessel_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
