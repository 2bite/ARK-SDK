#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekGloves_Gen2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_TekGloves_Gen2.PrimalItemArmor_TekGloves_Gen2_C
// 0x0000 (0x0C10 - 0x0C10)
class UPrimalItemArmor_TekGloves_Gen2_C : public UPrimalItemArmor_TekGloves_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TekGloves_Gen2.PrimalItemArmor_TekGloves_Gen2_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_TekGloves_Gen2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
