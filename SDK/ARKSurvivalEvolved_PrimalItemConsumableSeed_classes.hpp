#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumableSeed_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumableSeed.PrimalItemConsumableSeed_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemConsumableSeed_C : public UPrimalItemConsumableEatable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumableSeed.PrimalItemConsumableSeed_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumableSeed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
