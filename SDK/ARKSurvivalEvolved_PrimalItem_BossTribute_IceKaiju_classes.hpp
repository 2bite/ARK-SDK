#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_BossTribute_IceKaiju_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_BossTribute_IceKaiju.PrimalItem_BossTribute_IceKaiju_C
// 0x0000 (0x09A8 - 0x09A8)
class UPrimalItem_BossTribute_IceKaiju_C : public UPrimalItem_BossTributeEX_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_BossTribute_IceKaiju.PrimalItem_BossTribute_IceKaiju_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_BossTribute_IceKaiju(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif