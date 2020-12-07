#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x0008 (0x0DD8 - 0x0DD0)
class AStructureItemContainerBaseBP_C : public APrimalStructureItemContainer
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureItemContainerBaseBP.StructureItemContainerBaseBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StructureItemContainerBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
