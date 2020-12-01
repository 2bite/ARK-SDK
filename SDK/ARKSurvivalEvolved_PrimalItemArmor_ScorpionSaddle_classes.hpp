#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ScorpionSaddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_ScorpionSaddle.PrimalItemArmor_ScorpionSaddle_C
// 0x0000 (0x0998 - 0x0998)
class UPrimalItemArmor_ScorpionSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_ScorpionSaddle.PrimalItemArmor_ScorpionSaddle_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_ScorpionSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
