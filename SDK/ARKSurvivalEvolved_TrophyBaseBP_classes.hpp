#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TrophyBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TrophyBaseBP.TrophyBaseBP_C
// 0x0008 (0x0DE0 - 0x0DD8)
class ATrophyBaseBP_C : public AStructureItemContainerBaseBP_C
{
public:
	class UPrimalInventoryBP_TrophyBase_C*             PrimalInventoryBP_TrophyBase_C1;                          // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TrophyBaseBP.TrophyBaseBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TrophyBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
