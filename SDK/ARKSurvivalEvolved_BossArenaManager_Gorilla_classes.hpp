#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossArenaManager_Gorilla_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BossArenaManager_Gorilla.BossArenaManager_Gorilla_C
// 0x0000 (0x0618 - 0x0618)
class ABossArenaManager_Gorilla_C : public ABossArenaManager_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BossArenaManager_Gorilla.BossArenaManager_Gorilla_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BossArenaManager_Gorilla(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
