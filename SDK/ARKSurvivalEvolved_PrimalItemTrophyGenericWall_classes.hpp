#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophyGenericWall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophyGenericWall.PrimalItemTrophyGenericWall_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemTrophyGenericWall_C : public UPrimalItemTrophyGenericParent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophyGenericWall.PrimalItemTrophyGenericWall_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophyGenericWall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
