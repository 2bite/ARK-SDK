#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_BossArenaManager_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EX_BossArenaManager_Interface.EX_BossArenaManager_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UEX_BossArenaManager_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EX_BossArenaManager_Interface.EX_BossArenaManager_Interface_C");
		return ptr;
	}


	void CallEvent_PlayKaijuSecondPhaseMusic(class APrimalDinoCharacter* Kaiju);
	void Call_Event_Kaiju_Despawned(class APrimalDinoCharacter* Kaiju);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
