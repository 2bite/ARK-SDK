#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumableEatable_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumableEatable.PrimalItemConsumableEatable_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemConsumableEatable_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumableEatable.PrimalItemConsumableEatable_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumableEatable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
