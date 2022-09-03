#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_PlesiaSaddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_PlesiaSaddle.PrimalItemArmor_PlesiaSaddle_C
// 0x0000 (0x0AF0 - 0x0AF0)
class UPrimalItemArmor_PlesiaSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_PlesiaSaddle.PrimalItemArmor_PlesiaSaddle_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_PlesiaSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
