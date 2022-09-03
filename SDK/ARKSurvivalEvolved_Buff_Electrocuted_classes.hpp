#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Electrocuted_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Electrocuted.Buff_Electrocuted_C
// 0x0000 (0x0990 - 0x0990)
class ABuff_Electrocuted_C : public ABuff_Stunned_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Electrocuted.Buff_Electrocuted_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Electrocuted(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
