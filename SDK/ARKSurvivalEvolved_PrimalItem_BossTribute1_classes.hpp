#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_BossTribute1_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_BossTribute1.PrimalItem_BossTribute1_C
// 0x0000 (0x0A08 - 0x0A08)
class UPrimalItem_BossTribute1_C : public UPrimalItem_BossTributeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_BossTribute1.PrimalItem_BossTribute1_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_BossTribute1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
