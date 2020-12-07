#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DeathItemCache_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DeathItemCache.DeathItemCache_C
// 0x0008 (0x0DE0 - 0x0DD8)
class ADeathItemCache_C : public AStructureItemContainerBaseBP_C
{
public:
	class UPrimalInventoryBP_DeathItemCache_C*         PrimalInventoryBP_DeathItemCache_C1;                      // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DeathItemCache.DeathItemCache_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DeathItemCache(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
