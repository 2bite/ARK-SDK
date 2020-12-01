#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_MarshmallowHat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_MarshmallowHat.PrimalItemSkin_MarshmallowHat_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemSkin_MarshmallowHat_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_MarshmallowHat.PrimalItemSkin_MarshmallowHat_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_MarshmallowHat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
