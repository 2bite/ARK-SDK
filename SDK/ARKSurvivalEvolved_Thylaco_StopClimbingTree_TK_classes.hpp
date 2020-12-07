#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Thylaco_StopClimbingTree_TK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Thylaco_StopClimbingTree_TK.Thylaco_StopClimbingTree_TK_C
// 0x0000 (0x0078 - 0x0078)
class UThylaco_StopClimbingTree_TK_C : public UBTTask_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Thylaco_StopClimbingTree_TK.Thylaco_StopClimbingTree_TK_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Thylaco_StopClimbingTree_TK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
