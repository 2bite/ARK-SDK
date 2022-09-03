#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemVHBuggy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemVHBuggy.PrimalItemVHBuggy_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemVHBuggy_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemVHBuggy.PrimalItemVHBuggy_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemVHBuggy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
