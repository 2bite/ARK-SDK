#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_LoadoutDummy_NullHotBarSlot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_LoadoutDummy_NullHotBarSlot.PrimalItem_LoadoutDummy_NullHotBarSlot_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItem_LoadoutDummy_NullHotBarSlot_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_LoadoutDummy_NullHotBarSlot.PrimalItem_LoadoutDummy_NullHotBarSlot_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_LoadoutDummy_NullHotBarSlot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
