#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_DodorexMask_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_DodorexMask.PrimalItemSkin_DodorexMask_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemSkin_DodorexMask_C : public UPrimalItemSkinGeneric_Trophy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_DodorexMask.PrimalItemSkin_DodorexMask_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_DodorexMask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
