#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_ProjectileWithImpactFX_Aggro_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_ProjectileWithImpactFX_Aggro.DmgType_ProjectileWithImpactFX_Aggro_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_ProjectileWithImpactFX_Aggro_C : public UDmgType_ProjectileWithImpactFX_TranqMore_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_ProjectileWithImpactFX_Aggro.DmgType_ProjectileWithImpactFX_Aggro_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif