#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Berry_Azulberry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Berry_Azulberry.PrimalItemConsumable_Berry_Azulberry_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemConsumable_Berry_Azulberry_C : public UPrimalItemConsumable_Berry_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Berry_Azulberry.PrimalItemConsumable_Berry_Azulberry_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Berry_Azulberry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
