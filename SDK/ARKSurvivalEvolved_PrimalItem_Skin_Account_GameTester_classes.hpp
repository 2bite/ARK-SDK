#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Skin_Account_GameTester_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_Skin_Account_GameTester.PrimalItem_Skin_Account_GameTester_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItem_Skin_Account_GameTester_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_Skin_Account_GameTester.PrimalItem_Skin_Account_GameTester_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_Skin_Account_GameTester(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
