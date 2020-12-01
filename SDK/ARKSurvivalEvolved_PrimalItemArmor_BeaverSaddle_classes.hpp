#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_BeaverSaddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_BeaverSaddle.PrimalItemArmor_BeaverSaddle_C
// 0x0000 (0x0998 - 0x0998)
class UPrimalItemArmor_BeaverSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_BeaverSaddle.PrimalItemArmor_BeaverSaddle_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_BeaverSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
