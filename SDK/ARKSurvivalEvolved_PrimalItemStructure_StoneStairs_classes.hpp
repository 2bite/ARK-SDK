#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StoneStairs_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_StoneStairs.PrimalItemStructure_StoneStairs_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemStructure_StoneStairs_C : public UPrimalItemStructure_BaseWall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_StoneStairs.PrimalItemStructure_StoneStairs_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_StoneStairs(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
