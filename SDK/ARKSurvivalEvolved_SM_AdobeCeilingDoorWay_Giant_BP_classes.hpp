#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_AdobeCeilingDoorWay_Giant_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_AdobeCeilingDoorWay_Giant_BP.SM_AdobeCeilingDoorWay_Giant_BP_C
// 0x0000 (0x0AD0 - 0x0AD0)
class ASM_AdobeCeilingDoorWay_Giant_BP_C : public ASM_BaseCeilingDoorWay_Giant_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM_AdobeCeilingDoorWay_Giant_BP.SM_AdobeCeilingDoorWay_Giant_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SM_AdobeCeilingDoorWay_Giant_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
