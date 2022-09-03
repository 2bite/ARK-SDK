#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IBossArenaActorControlInterface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IBossArenaActorControlInterface.IBossArenaActorControlInterface_C
// 0x0000 (0x0028 - 0x0028)
class UIBossArenaActorControlInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IBossArenaActorControlInterface.IBossArenaActorControlInterface_C");
		return ptr;
	}


	void ArenaShouldPreserveAtClose(class ABossArenaManager_C* ArenaManager, bool* ShouldPreserve);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
