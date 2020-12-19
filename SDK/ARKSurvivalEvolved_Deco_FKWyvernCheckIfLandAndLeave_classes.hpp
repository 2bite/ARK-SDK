#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deco_FKWyvernCheckIfLandAndLeave_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Deco_FKWyvernCheckIfLandAndLeave.Deco_FKWyvernCheckIfLandAndLeave_C
// 0x0000 (0x0090 - 0x0090)
class UDeco_FKWyvernCheckIfLandAndLeave_C : public UBTDecorator_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Deco_FKWyvernCheckIfLandAndLeave.Deco_FKWyvernCheckIfLandAndLeave_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_Deco_FKWyvernCheckIfLandAndLeave(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
