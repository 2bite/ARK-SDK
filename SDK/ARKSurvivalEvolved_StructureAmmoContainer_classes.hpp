#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureAmmoContainer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureAmmoContainer.StructureAmmoContainer_C
// 0x000C (0x0FA8 - 0x0F9C)
class AStructureAmmoContainer_C : public AStructure_AmmoContainerBaseBP_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0F9C(0x0004) MISSED OFFSET
	class UPrimalInventoryBP_AmmoContainer_C*          PrimalInventoryBP_AmmoContainer_C1;                       // 0x0FA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureAmmoContainer.StructureAmmoContainer_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StructureAmmoContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
