#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ManticoreShirt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_ManticoreShirt.PrimalItemSkin_ManticoreShirt_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemSkin_ManticoreShirt_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_ManticoreShirt.PrimalItemSkin_ManticoreShirt_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_ManticoreShirt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
