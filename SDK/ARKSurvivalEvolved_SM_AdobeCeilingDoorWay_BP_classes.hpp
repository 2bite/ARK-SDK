#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_AdobeCeilingDoorWay_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_AdobeCeilingDoorWay_BP.SM_AdobeCeilingDoorWay_BP_C
// 0x0008 (0x0AB8 - 0x0AB0)
class ASM_AdobeCeilingDoorWay_BP_C : public ACeiling_Doorway_Metal_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM_AdobeCeilingDoorWay_BP.SM_AdobeCeilingDoorWay_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SM_AdobeCeilingDoorWay_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
