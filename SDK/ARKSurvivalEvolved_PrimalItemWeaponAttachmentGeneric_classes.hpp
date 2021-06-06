#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeaponAttachmentGeneric_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemWeaponAttachmentGeneric.PrimalItemWeaponAttachmentGeneric_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemWeaponAttachmentGeneric_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemWeaponAttachmentGeneric.PrimalItemWeaponAttachmentGeneric_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemWeaponAttachmentGeneric(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
