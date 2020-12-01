#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossArenaManager_FZ_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BossArenaManager_FZ.BossArenaManager_FZ_C
// 0x0000 (0x0798 - 0x0798)
class ABossArenaManager_FZ_C : public AEX_BossArenaManager_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BossArenaManager_FZ.BossArenaManager_FZ_C");
		return ptr;
	}


	void SpawnedBoss(class APrimalDinoCharacter** Boss);
	void IssueReturnWarning();
	void UserConstructionScript();
	void ExecuteUbergraph_BossArenaManager_FZ(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
