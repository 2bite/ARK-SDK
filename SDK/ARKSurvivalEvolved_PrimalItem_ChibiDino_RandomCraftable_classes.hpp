#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_ChibiDino_RandomCraftable_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_ChibiDino_RandomCraftable.PrimalItem_ChibiDino_RandomCraftable_C
// 0x0010 (0x0AF0 - 0x0AE0)
class UPrimalItem_ChibiDino_RandomCraftable_C : public UPrimalItemResourceGeneric_C
{
public:
	TArray<struct FSupplyCrateItemSet>                 ChibiTable;                                               // 0x0AE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_ChibiDino_RandomCraftable.PrimalItem_ChibiDino_RandomCraftable_C");
		return ptr;
	}


	void BPCrafted();
	void ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
