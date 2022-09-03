#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_BaseCeilingDoorGiant_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_BaseCeilingDoorGiant_BP.SM_BaseCeilingDoorGiant_BP_C
// 0x0000 (0x0B70 - 0x0B70)
class ASM_BaseCeilingDoorGiant_BP_C : public ADoor_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM_BaseCeilingDoorGiant_BP.SM_BaseCeilingDoorGiant_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SM_BaseCeilingDoorGiant_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
