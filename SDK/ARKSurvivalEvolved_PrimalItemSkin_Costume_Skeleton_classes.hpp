#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Costume_Skeleton_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_Costume_Skeleton.PrimalItemSkin_Costume_Skeleton_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemSkin_Costume_Skeleton_C : public UPrimalItemSkin_FullCostumeTest_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_Costume_Skeleton.PrimalItemSkin_Costume_Skeleton_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_Costume_Skeleton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
