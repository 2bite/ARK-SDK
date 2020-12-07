#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PettedBuff_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PettedBuff.Buff_PettedBuff_C
// 0x0000 (0x0950 - 0x0950)
class ABuff_PettedBuff_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PettedBuff.Buff_PettedBuff_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PettedBuff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
