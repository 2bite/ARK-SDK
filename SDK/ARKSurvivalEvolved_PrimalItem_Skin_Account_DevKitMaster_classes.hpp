#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Skin_Account_DevKitMaster_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_Skin_Account_DevKitMaster.PrimalItem_Skin_Account_DevKitMaster_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItem_Skin_Account_DevKitMaster_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_Skin_Account_DevKitMaster.PrimalItem_Skin_Account_DevKitMaster_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_Skin_Account_DevKitMaster(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
