#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FocalChili_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_FocalChili.Buff_FocalChili_C
// 0x0000 (0x0950 - 0x0950)
class ABuff_FocalChili_C : public ABuff_Base_Stew_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FocalChili.Buff_FocalChili_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_FocalChili(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
