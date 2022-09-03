#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_AnvilBench_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StorageBox_AnvilBench.StorageBox_AnvilBench_C
// 0x0008 (0x0E18 - 0x0E10)
class AStorageBox_AnvilBench_C : public AStructureItemContainerBaseBP_C
{
public:
	class UPrimalInventoryBP_AnvilBench_C*             PrimalInventoryBP_AnvilBench_C1;                          // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StorageBox_AnvilBench.StorageBox_AnvilBench_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StorageBox_AnvilBench(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
