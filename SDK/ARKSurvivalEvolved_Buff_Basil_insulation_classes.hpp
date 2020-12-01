#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Basil_insulation_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Basil_insulation.Buff_Basil_insulation_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_Basil_insulation_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Basil_insulation.Buff_Basil_insulation_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Basil_insulation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
