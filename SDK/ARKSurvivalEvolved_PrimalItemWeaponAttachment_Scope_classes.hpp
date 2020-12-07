#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeaponAttachment_Scope_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemWeaponAttachment_Scope.PrimalItemWeaponAttachment_Scope_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemWeaponAttachment_Scope_C : public UPrimalItemWeaponAttachmentGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemWeaponAttachment_Scope.PrimalItemWeaponAttachment_Scope_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemWeaponAttachment_Scope(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
