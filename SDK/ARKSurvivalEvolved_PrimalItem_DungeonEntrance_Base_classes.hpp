#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_DungeonEntrance_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C
// 0x000C (0x09FC - 0x09F0)
class UPrimalItem_DungeonEntrance_Base_C : public UPrimalItem_Base_C
{
public:
	class UClass*                                      DungeonArenaManagerClass;                                 // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DungeonDifficultyIndex;                                   // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C");
		return ptr;
	}


	void BPCrafted();
	class FString BPAllowCrafting(class AShooterPlayerController** ForPC);
	void ExecuteUbergraph_PrimalItem_DungeonEntrance_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
