#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0008 (0x0E48 - 0x0E40)
class ASM_Vessel_BP_C : public AStructureItemContainerBaseBP_VisualItems_C
{
public:
	class UPrimalInventoryBP_Vessel_C*                 PrimalInventoryBP_Vessel_C1;                              // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
