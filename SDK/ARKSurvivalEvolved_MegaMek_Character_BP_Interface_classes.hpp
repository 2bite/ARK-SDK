#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegaMek_Character_BP_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UMegaMek_Character_BP_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MegaMek_Character_BP_Interface.MegaMek_Character_BP_Interface_C");
		return ptr;
	}


	void StartSelfDestruct();
	void SetForceKill(bool Value);
	void SetStunned(float StunDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
