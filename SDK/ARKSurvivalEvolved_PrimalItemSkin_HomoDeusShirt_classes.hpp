#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_HomoDeusShirt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_HomoDeusShirt.PrimalItemSkin_HomoDeusShirt_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemSkin_HomoDeusShirt_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_HomoDeusShirt.PrimalItemSkin_HomoDeusShirt_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_HomoDeusShirt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
