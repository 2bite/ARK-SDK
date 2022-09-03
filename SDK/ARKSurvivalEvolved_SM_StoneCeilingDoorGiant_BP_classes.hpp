#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_StoneCeilingDoorGiant_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_StoneCeilingDoorGiant_BP.SM_StoneCeilingDoorGiant_BP_C
// 0x0010 (0x0B80 - 0x0B70)
class ASM_StoneCeilingDoorGiant_BP_C : public ASM_BaseCeilingDoorGiant_BP_C
{
public:
	class UStaticMeshComponent*                        SecondDoor;                                               // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SecondDoorTransform;                                      // 0x0B78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM_StoneCeilingDoorGiant_BP.SM_StoneCeilingDoorGiant_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SM_StoneCeilingDoorGiant_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
