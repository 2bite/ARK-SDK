#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ParaSaddle_Launch_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_ParaSaddle_Launch.PrimalItemArmor_ParaSaddle_Launch_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemArmor_ParaSaddle_Launch_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_ParaSaddle_Launch.PrimalItemArmor_ParaSaddle_Launch_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_ParaSaddle_Launch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
