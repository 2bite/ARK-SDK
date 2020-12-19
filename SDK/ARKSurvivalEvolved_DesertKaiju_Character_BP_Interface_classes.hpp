#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DesertKaiju_Character_BP_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DesertKaiju_Character_BP_Interface.DesertKaiju_Character_BP_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UDesertKaiju_Character_BP_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DesertKaiju_Character_BP_Interface.DesertKaiju_Character_BP_Interface_C");
		return ptr;
	}


	void SetVar_DKArenaManager(class AActor* ArenaManager);
	void CallFunc_StunKaiju();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
