#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophyGeneric_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophyGeneric.PrimalItemTrophyGeneric_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemTrophyGeneric_C : public UPrimalItemTrophyGenericParent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophyGeneric.PrimalItemTrophyGeneric_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophyGeneric(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
