#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceKaijuControlNode1_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IceKaijuControlNode1.IceKaijuControlNode1_C
// 0x0010 (0x0460 - 0x0450)
class AIceKaijuControlNode1_C : public AActor
{
public:
	class USkeletalMeshComponent*                      Node;                                                     // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Capsule1;                                                 // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IceKaijuControlNode1.IceKaijuControlNode1_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_IceKaijuControlNode1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif