#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_MoleRatSaddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_MoleRatSaddle.PrimalItemArmor_MoleRatSaddle_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemArmor_MoleRatSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_MoleRatSaddle.PrimalItemArmor_MoleRatSaddle_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_MoleRatSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
