#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_HatTributePlayer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_HatTributePlayer.PrimalItem_HatTributePlayer_C
// 0x0000 (0x0A18 - 0x0A18)
class UPrimalItem_HatTributePlayer_C : public UPrimalItem_BossTributeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_HatTributePlayer.PrimalItem_HatTributePlayer_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_HatTributePlayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
