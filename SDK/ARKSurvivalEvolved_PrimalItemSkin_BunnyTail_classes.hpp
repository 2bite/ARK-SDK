#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_BunnyTail_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_BunnyTail.PrimalItemSkin_BunnyTail_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemSkin_BunnyTail_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_BunnyTail.PrimalItemSkin_BunnyTail_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_BunnyTail(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif