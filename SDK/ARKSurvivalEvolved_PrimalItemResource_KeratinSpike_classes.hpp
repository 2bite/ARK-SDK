#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_KeratinSpike_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_KeratinSpike.PrimalItemResource_KeratinSpike_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemResource_KeratinSpike_C : public UPrimalItemResource_Horn_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_KeratinSpike.PrimalItemResource_KeratinSpike_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_KeratinSpike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
