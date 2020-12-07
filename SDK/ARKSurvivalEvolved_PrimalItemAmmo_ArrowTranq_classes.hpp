#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_ArrowTranq_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemAmmo_ArrowTranq.PrimalItemAmmo_ArrowTranq_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemAmmo_ArrowTranq_C : public UPrimalItemAmmo_ArrowBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_ArrowTranq.PrimalItemAmmo_ArrowTranq_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemAmmo_ArrowTranq(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
