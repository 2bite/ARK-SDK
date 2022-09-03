#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_TaxidermyDermis_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_TaxidermyDermis.PrimalItem_TaxidermyDermis_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItem_TaxidermyDermis_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_TaxidermyDermis.PrimalItem_TaxidermyDermis_C");
		return ptr;
	}


	void BPInitIconMaterial();
	void ExecuteUbergraph_PrimalItem_TaxidermyDermis(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
