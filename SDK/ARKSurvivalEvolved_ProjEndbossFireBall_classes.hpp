#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjEndbossFireBall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjEndbossFireBall.ProjEndBossFireBall_C
// 0x0000 (0x0650 - 0x0650)
class AProjEndBossFireBall_C : public AProjFireBall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjEndbossFireBall.ProjEndBossFireBall_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjEndBossFireBall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
