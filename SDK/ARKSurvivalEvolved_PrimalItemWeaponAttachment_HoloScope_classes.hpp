#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeaponAttachment_HoloScope_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemWeaponAttachment_HoloScope.PrimalItemWeaponAttachment_HoloScope_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemWeaponAttachment_HoloScope_C : public UPrimalItemWeaponAttachmentGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemWeaponAttachment_HoloScope.PrimalItemWeaponAttachment_HoloScope_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemWeaponAttachment_HoloScope(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
