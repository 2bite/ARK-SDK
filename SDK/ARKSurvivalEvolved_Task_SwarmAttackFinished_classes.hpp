#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_SwarmAttackFinished_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_SwarmAttackFinished.Task_SwarmAttackFinished_C
// 0x0000 (0x0078 - 0x0078)
class UTask_SwarmAttackFinished_C : public UBTTask_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_SwarmAttackFinished.Task_SwarmAttackFinished_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_SwarmAttackFinished(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
