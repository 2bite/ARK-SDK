#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Gashed_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Gashed.Buff_Gashed_C
// 0x0000 (0x08A0 - 0x08A0)
class ABuff_Gashed_C : public ABuff_Base_Disease_Low_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Gashed.Buff_Gashed_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Gashed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
