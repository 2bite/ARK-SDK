#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureItemContainerAutoGenerateItemsBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureItemContainerAutoGenerateItemsBaseBP.StructureItemContainerAutoGenerateItemsBaseBP_C
// 0x0004 (0x0E14 - 0x0E10)
class AStructureItemContainerAutoGenerateItemsBaseBP_C : public AStructureItemContainerBaseBP_C
{
public:
	float                                              AutoGenerateItemsMultiplier;                              // 0x0E10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureItemContainerAutoGenerateItemsBaseBP.StructureItemContainerAutoGenerateItemsBaseBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StructureItemContainerAutoGenerateItemsBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
