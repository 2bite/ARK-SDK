#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Gen1AvatarShirt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_Gen1AvatarShirt.PrimalItemSkin_Gen1AvatarShirt_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemSkin_Gen1AvatarShirt_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_Gen1AvatarShirt.PrimalItemSkin_Gen1AvatarShirt_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_Gen1AvatarShirt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
