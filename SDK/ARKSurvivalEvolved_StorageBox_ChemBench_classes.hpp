#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_ChemBench_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StorageBox_ChemBench.StorageBox_ChemBench_C
// 0x0010 (0x0E20 - 0x0E10)
class AStorageBox_ChemBench_C : public ABaseFuelBurner_GasOnly_C
{
public:
	class UPrimalInventoryBP_ChemBench_C*              PrimalInventoryBP_ChemBench_C1;                           // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StorageBox_ChemBench.StorageBox_ChemBench_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StorageBox_ChemBench(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
