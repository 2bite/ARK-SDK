#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_BossTributeGeneric_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_BossTributeGeneric.PrimalItem_BossTributeGeneric_C
// 0x0018 (0x0AF8 - 0x0AE0)
class UPrimalItem_BossTributeGeneric_C : public UPrimalItem_Base_C
{
public:
	class UClass*                                      BossArenaManagerClass;                                    // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              AdditionalBossArenaManagersToCheck;                       // 0x0AE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_BossTributeGeneric.PrimalItem_BossTributeGeneric_C");
		return ptr;
	}


	class FString BPAllowCrafting(class AShooterPlayerController** ForPC);
	void ExecuteUbergraph_PrimalItem_BossTributeGeneric(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
