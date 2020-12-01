#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MegatheriumSit_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_MegatheriumSit.Buff_MegatheriumSit_C
// 0x0000 (0x0938 - 0x0938)
class ABuff_MegatheriumSit_C : public ABuff_ChalicoSit_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MegatheriumSit.Buff_MegatheriumSit_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_MegatheriumSit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
