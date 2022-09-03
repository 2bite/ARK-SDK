#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TreeSapTap_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TreeSapTap_SM.TreeSapTap_SM_C
// 0x0008 (0x0E18 - 0x0E10)
class ATreeSapTap_SM_C : public AStructureItemContainerBaseBP_C
{
public:
	class UPrimalInventoryBP_TreeSapTap_C*             PrimalInventoryBP_TreeSapTap_C1;                          // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TreeSapTap_SM.TreeSapTap_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TreeSapTap_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
