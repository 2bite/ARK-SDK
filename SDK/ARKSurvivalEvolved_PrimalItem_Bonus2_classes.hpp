#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Bonus2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_Bonus2.PrimalItem_Bonus2_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItem_Bonus2_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_Bonus2.PrimalItem_Bonus2_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_Bonus2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
