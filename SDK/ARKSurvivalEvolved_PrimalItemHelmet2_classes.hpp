#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemHelmet2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemHelmet2.PrimalItemHelmet2_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemHelmet2_C : public UPrimalItemArmorGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemHelmet2.PrimalItemHelmet2_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemHelmet2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
