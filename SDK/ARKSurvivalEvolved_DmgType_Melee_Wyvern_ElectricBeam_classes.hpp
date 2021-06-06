#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Melee_Wyvern_ElectricBeam_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_Wyvern_ElectricBeam.DmgType_Melee_Wyvern_ElectricBeam_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Melee_Wyvern_ElectricBeam_C : public UShooterDamageTypeBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_Wyvern_ElectricBeam.DmgType_Melee_Wyvern_ElectricBeam_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
