#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekHelmet_Gen2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_TekHelmet_Gen2.PrimalItemArmor_TekHelmet_Gen2_C
// 0x0000 (0x0C01 - 0x0C01)
class UPrimalItemArmor_TekHelmet_Gen2_C : public UPrimalItemArmor_TekHelmet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TekHelmet_Gen2.PrimalItemArmor_TekHelmet_Gen2_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_TekHelmet_Gen2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
