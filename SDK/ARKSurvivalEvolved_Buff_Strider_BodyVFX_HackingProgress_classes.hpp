#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Strider_BodyVFX_HackingProgress_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Strider_BodyVFX_HackingProgress.Buff_Strider_BodyVFX_HackingProgress_C
// 0x0000 (0x09F5 - 0x09F5)
class ABuff_Strider_BodyVFX_HackingProgress_C : public ABuff_Strider_BodyVFX_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Strider_BodyVFX_HackingProgress.Buff_Strider_BodyVFX_HackingProgress_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Strider_BodyVFX_HackingProgress(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif