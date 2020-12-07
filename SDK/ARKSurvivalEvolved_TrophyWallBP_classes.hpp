#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TrophyWallBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TrophyWallBP.TrophyWallBP_C
// 0x0008 (0x0DE0 - 0x0DD8)
class ATrophyWallBP_C : public AStructureItemContainerBaseBP_C
{
public:
	class UPrimalInventoryBP_TrophyWall_C*             PrimalInventoryBP_TrophyWall_C1;                          // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TrophyWallBP.TrophyWallBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TrophyWallBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
