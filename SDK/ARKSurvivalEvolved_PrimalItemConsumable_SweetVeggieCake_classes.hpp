#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_SweetVeggieCake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_SweetVeggieCake.PrimalItemConsumable_SweetVeggieCake_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemConsumable_SweetVeggieCake_C : public UPrimalItemConsumableEatable_BuffingSoup_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_SweetVeggieCake.PrimalItemConsumable_SweetVeggieCake_C");
		return ptr;
	}


	bool BPCanUse(bool* bIgnoreCooldown);
	void STATIC_BPPreUseItem();
	void ExecuteUbergraph_PrimalItemConsumable_SweetVeggieCake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
