#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ManticoreShield_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_ManticoreShield.PrimalItemSkin_ManticoreShield_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemSkin_ManticoreShield_C : public UPrimalItemSkinGeneric_Trophy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_ManticoreShield.PrimalItemSkin_ManticoreShield_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_ManticoreShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif