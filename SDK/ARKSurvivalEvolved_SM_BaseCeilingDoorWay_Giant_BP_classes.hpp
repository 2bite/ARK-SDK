#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_BaseCeilingDoorWay_Giant_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_BaseCeilingDoorWay_Giant_BP.SM_BaseCeilingDoorWay_Giant_BP_C
// 0x0000 (0x0AF8 - 0x0AF8)
class ASM_BaseCeilingDoorWay_Giant_BP_C : public ACeiling_Doorway_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM_BaseCeilingDoorWay_Giant_BP.SM_BaseCeilingDoorWay_Giant_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SM_BaseCeilingDoorWay_Giant_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
