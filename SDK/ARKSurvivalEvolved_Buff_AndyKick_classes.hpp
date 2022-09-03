#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AndyKick_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_AndyKick.Buff_AndyKick_C
// 0x0000 (0x0978 - 0x0978)
class ABuff_AndyKick_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_AndyKick.Buff_AndyKick_C");
		return ptr;
	}


	bool BPPreventflight();
	bool PreventJump();
	bool BPPreventRunning();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_AndyKick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
