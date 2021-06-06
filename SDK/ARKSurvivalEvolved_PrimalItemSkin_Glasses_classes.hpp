#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Glasses_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_Glasses.PrimalItemSkin_Glasses_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemSkin_Glasses_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_Glasses.PrimalItemSkin_Glasses_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_Glasses(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
