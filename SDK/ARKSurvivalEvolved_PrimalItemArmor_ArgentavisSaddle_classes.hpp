#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ArgentavisSaddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_ArgentavisSaddle.PrimalItemArmor_ArgentavisSaddle_C
// 0x0000 (0x0AF0 - 0x0AF0)
class UPrimalItemArmor_ArgentavisSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_ArgentavisSaddle.PrimalItemArmor_ArgentavisSaddle_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_ArgentavisSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
