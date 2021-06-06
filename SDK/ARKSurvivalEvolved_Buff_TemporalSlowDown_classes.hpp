#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TemporalSlowDown_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TemporalSlowDown.Buff_TemporalSlowDown_C
// 0x0000 (0x0960 - 0x0960)
class ABuff_TemporalSlowDown_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TemporalSlowDown.Buff_TemporalSlowDown_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TemporalSlowDown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
