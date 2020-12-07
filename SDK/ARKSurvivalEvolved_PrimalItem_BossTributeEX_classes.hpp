#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_BossTributeEX_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_BossTributeEX.PrimalItem_BossTributeEX_C
// 0x0018 (0x0A00 - 0x09E8)
class UPrimalItem_BossTributeEX_C : public UPrimalItem_Base_C
{
public:
	class UClass*                                      BossArenaManagerClass;                                    // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              AdditionalBossArenaManagersToCheck;                       // 0x09F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_BossTributeEX.PrimalItem_BossTributeEX_C");
		return ptr;
	}


	class FString BPAllowCrafting(class AShooterPlayerController** ForPC);
	void ExecuteUbergraph_PrimalItem_BossTributeEX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
