#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Flag_SM_CIBoss_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Flag_SM_CIBoss.Flag_SM_CIBoss_C
// 0x0000 (0x0AC8 - 0x0AC8)
class AFlag_SM_CIBoss_C : public AFlag_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Flag_SM_CIBoss.Flag_SM_CIBoss_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Flag_SM_CIBoss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
