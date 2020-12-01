#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceBox_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IceBox.IceBox_C
// 0x0008 (0x0DC0 - 0x0DB8)
class AIceBox_C : public AStructureItemContainerBaseBP_C
{
public:
	class UPrimalInventoryBP_IceBox_C*                 PrimalInventoryBP_Refridgerator_C1;                       // 0x0DB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IceBox.IceBox_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_IceBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
