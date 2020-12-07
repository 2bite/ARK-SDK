#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ProcoptodonSaddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_ProcoptodonSaddle.PrimalItemArmor_ProcoptodonSaddle_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemArmor_ProcoptodonSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_ProcoptodonSaddle.PrimalItemArmor_ProcoptodonSaddle_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_ProcoptodonSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
