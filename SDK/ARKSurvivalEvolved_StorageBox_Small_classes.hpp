#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_Small_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StorageBox_Small.StorageBox_Small_C
// 0x0008 (0x0E18 - 0x0E10)
class AStorageBox_Small_C : public AStructureItemContainerBaseBP_C
{
public:
	class UPrimalInventoryBP_StorageBox_Small_C*       PrimalInventoryBP_StorageBox_Small_C1;                    // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StorageBox_Small.StorageBox_Small_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StorageBox_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
