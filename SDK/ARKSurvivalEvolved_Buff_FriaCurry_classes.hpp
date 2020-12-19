#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FriaCurry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_FriaCurry.Buff_FriaCurry_C
// 0x0000 (0x0950 - 0x0950)
class ABuff_FriaCurry_C : public ABuff_Base_Stew_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FriaCurry.Buff_FriaCurry_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_FriaCurry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
