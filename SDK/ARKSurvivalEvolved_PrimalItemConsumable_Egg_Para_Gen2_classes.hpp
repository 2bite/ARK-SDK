#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Para_Gen2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Egg_Para_Gen2.PrimalItemConsumable_Egg_Para_Gen2_C
// 0x0000 (0x0AF8 - 0x0AF8)
class UPrimalItemConsumable_Egg_Para_Gen2_C : public UPrimalItemConsumable_Egg_Para_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_Para_Gen2.PrimalItemConsumable_Egg_Para_Gen2_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Egg_Para_Gen2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
