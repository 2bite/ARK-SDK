#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_AmmoniteBlood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_AmmoniteBlood.PrimalItemResource_AmmoniteBlood_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemResource_AmmoniteBlood_C : public UPrimalItemResource_LeechBlood_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_AmmoniteBlood.PrimalItemResource_AmmoniteBlood_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_AmmoniteBlood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
