#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_RexSaddle_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_RexSaddle_Tek.PrimalItemArmor_RexSaddle_Tek_C
// 0x0000 (0x0B84 - 0x0B84)
class UPrimalItemArmor_RexSaddle_Tek_C : public UPrimalItemArmor_SaddleGeneric_Tek_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_RexSaddle_Tek.PrimalItemArmor_RexSaddle_Tek_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_RexSaddle_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
