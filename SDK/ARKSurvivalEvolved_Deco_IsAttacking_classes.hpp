#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deco_IsAttacking_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Deco_IsAttacking.Deco_IsAttacking_C
// 0x0000 (0x0090 - 0x0090)
class UDeco_IsAttacking_C : public UBTDecorator_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Deco_IsAttacking.Deco_IsAttacking_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_Deco_IsAttacking(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
