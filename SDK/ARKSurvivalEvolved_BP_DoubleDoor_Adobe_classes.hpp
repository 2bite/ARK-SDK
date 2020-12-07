#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_DoubleDoor_Adobe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DoubleDoor_Adobe.BP_DoubleDoor_Adobe_C
// 0x0010 (0x0B90 - 0x0B80)
class ABP_DoubleDoor_Adobe_C : public ABase_DoubleDoor_C
{
public:
	class UStaticMeshComponent*                        SecondDoor;                                               // 0x0B80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SecondDoorTransform;                                      // 0x0B88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DoubleDoor_Adobe.BP_DoubleDoor_Adobe_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_DoubleDoor_Adobe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
