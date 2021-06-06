#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_LFL_MaxCombo_Victim_Debuff_Male_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_LFL_MaxCombo_Victim_Debuff_Male.Buff_LFL_MaxCombo_Victim_Debuff_Male_C
// 0x0000 (0x0960 - 0x0960)
class ABuff_LFL_MaxCombo_Victim_Debuff_Male_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_LFL_MaxCombo_Victim_Debuff_Male.Buff_LFL_MaxCombo_Victim_Debuff_Male_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_LFL_MaxCombo_Victim_Debuff_Male(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
