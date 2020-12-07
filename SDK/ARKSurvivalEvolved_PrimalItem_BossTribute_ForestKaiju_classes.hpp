#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_BossTribute_ForestKaiju_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_BossTribute_ForestKaiju.PrimalItem_BossTribute_ForestKaiju_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItem_BossTribute_ForestKaiju_C : public UPrimalItem_BossTributeEX_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_BossTribute_ForestKaiju.PrimalItem_BossTribute_ForestKaiju_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_BossTribute_ForestKaiju(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
