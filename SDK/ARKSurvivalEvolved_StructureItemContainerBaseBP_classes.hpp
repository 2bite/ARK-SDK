#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureItemContainerBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureItemContainerBaseBP.StructureItemContainerBaseBP_C
// 0x0008 (0x0E10 - 0x0E08)
class AStructureItemContainerBaseBP_C : public APrimalStructureItemContainer
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0E08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureItemContainerBaseBP.StructureItemContainerBaseBP_C");
		return ptr;
	}


	void BPOnTransferAll(class UPrimalInventoryComponent* toInventory);
	void UserConstructionScript();
	void ExecuteUbergraph_StructureItemContainerBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
