#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossArenaManager_Desert_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BossArenaManager_Desert.BossArenaManager_Desert_C
// 0x0000 (0x0798 - 0x0798)
class ABossArenaManager_Desert_C : public AEX_BossArenaManager_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BossArenaManager_Desert.BossArenaManager_Desert_C");
		return ptr;
	}


	void SpawnedBoss(class APrimalDinoCharacter** Boss);
	void IssueReturnWarning();
	void UserConstructionScript();
	void ExecuteUbergraph_BossArenaManager_Desert(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
