#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CryoFridge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CryoFridge.CryoFridge_C
// 0x0008 (0x0E18 - 0x0E10)
class ACryoFridge_C : public AStructureItemContainerBaseBP_C
{
public:
	class UPrimalInventoryBP_CryoFridge_C*             PrimalInventoryBP_CryoFridge_C1;                          // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CryoFridge.CryoFridge_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CryoFridge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
