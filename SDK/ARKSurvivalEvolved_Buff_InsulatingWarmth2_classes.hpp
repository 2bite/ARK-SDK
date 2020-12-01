#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_InsulatingWarmth2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_InsulatingWarmth2.Buff_InsulatingWarmth2_C
// 0x0000 (0x08A0 - 0x08A0)
class ABuff_InsulatingWarmth2_C : public ABuff_CureLesser_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_InsulatingWarmth2.Buff_InsulatingWarmth2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_InsulatingWarmth2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
