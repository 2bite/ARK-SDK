#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CompanionReactionModule_Banter_SanctumA_01_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CompanionReactionModule_Banter_SanctumA_01.CompanionReactionModule_Banter_SanctumA_01_C
// 0x0000 (0x0164 - 0x0164)
class UCompanionReactionModule_Banter_SanctumA_01_C : public UMissionModule_zSubmodule_CompanionReaction_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CompanionReactionModule_Banter_SanctumA_01.CompanionReactionModule_Banter_SanctumA_01_C");
		return ptr;
	}


	void ExecuteUbergraph_CompanionReactionModule_Banter_SanctumA_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
