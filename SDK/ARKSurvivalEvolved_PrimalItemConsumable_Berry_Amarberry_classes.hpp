#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Berry_Amarberry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Berry_Amarberry.PrimalItemConsumable_Berry_Amarberry_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemConsumable_Berry_Amarberry_C : public UPrimalItemConsumable_Berry_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Berry_Amarberry.PrimalItemConsumable_Berry_Amarberry_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Berry_Amarberry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
