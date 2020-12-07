#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Base_SuperDisease_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Base_SuperDisease.Buff_Base_SuperDisease_C
// 0x0000 (0x0950 - 0x0950)
class ABuff_Base_SuperDisease_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Base_SuperDisease.Buff_Base_SuperDisease_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Base_SuperDisease(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
