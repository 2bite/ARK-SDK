#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_DoubleDoor_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DoubleDoor_Tek.BP_DoubleDoor_Tek_C
// 0x0020 (0x0D40 - 0x0D20)
class ABP_DoubleDoor_Tek_C : public ABase_TekDoor_C
{
public:
	class USphereComponent*                            Sphere1;                                                  // 0x0D20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0D28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SecondDoor;                                               // 0x0D30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SecondDoorTransform;                                      // 0x0D38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DoubleDoor_Tek.BP_DoubleDoor_Tek_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_DoubleDoor_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
