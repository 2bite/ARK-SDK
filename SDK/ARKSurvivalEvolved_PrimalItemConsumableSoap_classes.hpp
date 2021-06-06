#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumableSoap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumableSoap.PrimalItemConsumableSoap_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemConsumableSoap_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumableSoap.PrimalItemConsumableSoap_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumableSoap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
