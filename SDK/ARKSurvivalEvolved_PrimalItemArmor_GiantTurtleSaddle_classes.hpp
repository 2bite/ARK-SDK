#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_GiantTurtleSaddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_GiantTurtleSaddle.PrimalItemArmor_GiantTurtleSaddle_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemArmor_GiantTurtleSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_GiantTurtleSaddle.PrimalItemArmor_GiantTurtleSaddle_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_GiantTurtleSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
