#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AcidHaze_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_AcidHaze.Buff_AcidHaze_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_AcidHaze_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_AcidHaze.Buff_AcidHaze_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_AcidHaze(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
