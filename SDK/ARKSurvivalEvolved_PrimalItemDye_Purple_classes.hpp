#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDye_Purple_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemDye_Purple.PrimalItemDye_Purple_C
// 0x0000 (0x0A20 - 0x0A20)
class UPrimalItemDye_Purple_C : public UPrimalItemDyeGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemDye_Purple.PrimalItemDye_Purple_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemDye_Purple(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
