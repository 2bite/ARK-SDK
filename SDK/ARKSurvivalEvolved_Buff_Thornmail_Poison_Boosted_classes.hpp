#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Thornmail_Poison_Boosted_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Thornmail_Poison_Boosted.Buff_Thornmail_Poison_Boosted_C
// 0x0000 (0x099C - 0x099C)
class ABuff_Thornmail_Poison_Boosted_C : public ABuff_Thornmail_Poison_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Thornmail_Poison_Boosted.Buff_Thornmail_Poison_Boosted_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Thornmail_Poison_Boosted(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
