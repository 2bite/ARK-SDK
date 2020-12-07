#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Explosion_Mek_SelfDestruct_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Explosion_Mek_SelfDestruct.DmgType_Explosion_Mek_SelfDestruct_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Explosion_Mek_SelfDestruct_C : public UShooterDamageTypeBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Explosion_Mek_SelfDestruct.DmgType_Explosion_Mek_SelfDestruct_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
