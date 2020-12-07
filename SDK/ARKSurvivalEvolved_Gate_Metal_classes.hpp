#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gate_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gate_Metal.Gate_Metal_C
// 0x0010 (0x0B58 - 0x0B48)
class AGate_Metal_C : public ADoor_Base_SM_C
{
public:
	class UStaticMeshComponent*                        SecondDoor;                                               // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SecondDoorTransform;                                      // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gate_Metal.Gate_Metal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Gate_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
