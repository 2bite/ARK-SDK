#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_TekProjectile_Shoulder_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_TekProjectile_Shoulder_Base.DmgType_TekProjectile_Shoulder_Base_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_TekProjectile_Shoulder_Base_C : public UDmgType_Explosion_TekProjectile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_TekProjectile_Shoulder_Base.DmgType_TekProjectile_Shoulder_Base_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
