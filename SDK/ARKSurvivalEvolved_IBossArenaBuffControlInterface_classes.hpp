#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IBossArenaBuffControlInterface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IBossArenaBuffControlInterface.IBossArenaBuffControlInterface_C
// 0x0000 (0x0028 - 0x0028)
class UIBossArenaBuffControlInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IBossArenaBuffControlInterface.IBossArenaBuffControlInterface_C");
		return ptr;
	}


	void BossArenaEnableBuff();
	void BossArenaDisableBuff();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
