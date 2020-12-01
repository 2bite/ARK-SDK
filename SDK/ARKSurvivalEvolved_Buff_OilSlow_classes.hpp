#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_OilSlow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_OilSlow.Buff_OilSlow_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_OilSlow_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_OilSlow.Buff_OilSlow_C");
		return ptr;
	}


	bool BPPreventflight();
	bool PreventJump();
	bool BPPreventRunning();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_OilSlow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
