#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_FenceSupport_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_FenceSupport.Base_FenceSupport_C
// 0x0010 (0x0AF8 - 0x0AE8)
class ABase_FenceSupport_C : public AFenceFoundation_Base_New_C
{
public:
	class UStaticMeshComponent*                        RightTarget;                                              // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        LeftTarget;                                               // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_FenceSupport.Base_FenceSupport_C");
		return ptr;
	}


	void BPPlacedStructure(class APlayerController** ForPC);
	bool BPTreatAsFoundationForSnappedStructure(class APrimalStructure** OtherStructure, struct FPlacementData* WithPlacementData);
	void UserConstructionScript();
	void ExecuteUbergraph_Base_FenceSupport(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
