#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_SetFlockAttackFormation_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C
// 0x0000 (0x0080 - 0x0080)
class UService_SetFlockAttackFormation_C : public UBTService_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Service_SetFlockAttackFormation.Service_SetFlockAttackFormation_C");
		return ptr;
	}


	void ReceiveDeactivation(class AActor** OwnerActor);
	void ReceiveActivation(class AActor** OwnerActor);
	void ExecuteUbergraph_Service_SetFlockAttackFormation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
