#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Hangover_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Hangover.Buff_Hangover_C
// 0x0000 (0x0960 - 0x0960)
class ABuff_Hangover_C : public ABuff_Base_Disease_Low_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Hangover.Buff_Hangover_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Hangover(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
