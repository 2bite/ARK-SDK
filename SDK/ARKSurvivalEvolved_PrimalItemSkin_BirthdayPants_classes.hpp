#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_BirthdayPants_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_BirthdayPants.PrimalItemSkin_BirthdayPants_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemSkin_BirthdayPants_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_BirthdayPants.PrimalItemSkin_BirthdayPants_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_BirthdayPants(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
