#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_LeechBlood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_LeechBlood.PrimalItemResource_LeechBlood_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemResource_LeechBlood_C : public UPrimalItemResourceGeneric_Curing_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_LeechBlood.PrimalItemResource_LeechBlood_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_LeechBlood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
