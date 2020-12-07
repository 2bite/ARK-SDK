#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_MetalCeilingDoorGiant_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_MetalCeilingDoorGiant_BP.SM_MetalCeilingDoorGiant_BP_C
// 0x0010 (0x0B58 - 0x0B48)
class ASM_MetalCeilingDoorGiant_BP_C : public ASM_BaseCeilingDoorGiant_BP_C
{
public:
	class UStaticMeshComponent*                        SecondDoor;                                               // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SecondDoorTransform;                                      // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM_MetalCeilingDoorGiant_BP.SM_MetalCeilingDoorGiant_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SM_MetalCeilingDoorGiant_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
