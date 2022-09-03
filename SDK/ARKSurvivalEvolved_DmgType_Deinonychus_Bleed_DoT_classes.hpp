#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Deinonychus_Bleed_DoT_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Deinonychus_Bleed_DoT.DmgType_Deinonychus_Bleed_DoT_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Deinonychus_Bleed_DoT_C : public UDmgType_Melee_Dino_Carnivore_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Deinonychus_Bleed_DoT.DmgType_Deinonychus_Bleed_DoT_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
