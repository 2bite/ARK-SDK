#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_HatTributeDino_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_HatTributeDino.PrimalItem_HatTributeDino_C
// 0x0000 (0x09C8 - 0x09C8)
class UPrimalItem_HatTributeDino_C : public UPrimalItem_BossTributeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_HatTributeDino.PrimalItem_HatTributeDino_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_HatTributeDino(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
