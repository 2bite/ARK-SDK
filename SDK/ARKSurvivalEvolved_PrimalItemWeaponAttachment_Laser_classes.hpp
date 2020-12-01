#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeaponAttachment_Laser_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemWeaponAttachment_Laser.PrimalItemWeaponAttachment_Laser_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemWeaponAttachment_Laser_C : public UPrimalItemWeaponAttachmentGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemWeaponAttachment_Laser.PrimalItemWeaponAttachment_Laser_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemWeaponAttachment_Laser(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
