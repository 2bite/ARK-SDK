#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_SwarmTargetSpotted_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_SwarmTargetSpotted.Task_SwarmTargetSpotted_C
// 0x0000 (0x0078 - 0x0078)
class UTask_SwarmTargetSpotted_C : public UBTTask_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_SwarmTargetSpotted.Task_SwarmTargetSpotted_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_SwarmTargetSpotted(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
