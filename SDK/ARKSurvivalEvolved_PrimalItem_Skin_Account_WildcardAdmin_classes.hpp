#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Skin_Account_WildcardAdmin_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_Skin_Account_WildcardAdmin.PrimalItem_Skin_Account_WildcardAdmin_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItem_Skin_Account_WildcardAdmin_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_Skin_Account_WildcardAdmin.PrimalItem_Skin_Account_WildcardAdmin_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_Skin_Account_WildcardAdmin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
