#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDye_Royalty_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemDye_Royalty.PrimalItemDye_Royalty_C
// 0x0000 (0x09D0 - 0x09D0)
class UPrimalItemDye_Royalty_C : public UPrimalItemDyeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemDye_Royalty.PrimalItemDye_Royalty_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemDye_Royalty(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
