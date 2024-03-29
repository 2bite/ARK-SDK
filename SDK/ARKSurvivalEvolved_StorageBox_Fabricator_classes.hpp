#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_Fabricator_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StorageBox_Fabricator.StorageBox_Fabricator_C
// 0x0010 (0x0E20 - 0x0E10)
class AStorageBox_Fabricator_C : public ABaseFuelBurner_GasOnly_C
{
public:
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_Fabricator_C*             PrimalInventoryBP_Fabricator_C1;                          // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StorageBox_Fabricator.StorageBox_Fabricator_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StorageBox_Fabricator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
