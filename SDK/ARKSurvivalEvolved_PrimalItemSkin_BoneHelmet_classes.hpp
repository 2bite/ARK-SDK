#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_BoneHelmet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_BoneHelmet.PrimalItemSkin_BoneHelmet_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemSkin_BoneHelmet_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_BoneHelmet.PrimalItemSkin_BoneHelmet_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_BoneHelmet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
