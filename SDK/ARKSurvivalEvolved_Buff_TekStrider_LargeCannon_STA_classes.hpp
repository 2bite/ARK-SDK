#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_LargeCannon_STA_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekStrider_LargeCannon_STA.Buff_TekStrider_LargeCannon_STA_C
// 0x0000 (0x0C10 - 0x0C10)
class ABuff_TekStrider_LargeCannon_STA_C : public ABuff_TekStrider_LargeCannon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekStrider_LargeCannon_STA.Buff_TekStrider_LargeCannon_STA_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekStrider_LargeCannon_STA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
