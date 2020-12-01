#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_AlloSaddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_AlloSaddle.PrimalItemArmor_AlloSaddle_C
// 0x0000 (0x09B8 - 0x09B8)
class UPrimalItemArmor_AlloSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_AlloSaddle.PrimalItemArmor_AlloSaddle_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_AlloSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
