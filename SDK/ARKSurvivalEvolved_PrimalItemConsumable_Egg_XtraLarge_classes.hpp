#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_XtraLarge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Egg_XtraLarge.PrimalItemConsumable_Egg_XtraLarge_C
// 0x0000 (0x0AF8 - 0x0AF8)
class UPrimalItemConsumable_Egg_XtraLarge_C : public UPrimalItemConsumable_Egg_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_XtraLarge.PrimalItemConsumable_Egg_XtraLarge_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Egg_XtraLarge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
