#pragma once

// ARKSurvivalEvolved (329.9) SDK

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
// 0x0000 (0x0B00 - 0x0B00)
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
