#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Decorator_Mek_ShouldMove_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Decorator_Mek_ShouldMove.Decorator_Mek_ShouldMove_C
// 0x0050 (0x00E0 - 0x0090)
class UDecorator_Mek_ShouldMove_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      TargetLocationKey;                                        // 0x0090(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetActorKey;                                           // 0x00B8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Decorator_Mek_ShouldMove.Decorator_Mek_ShouldMove_C");
		return ptr;
	}


	void ReceiveExecutionStart(class AActor** OwnerActor);
	void ExecuteUbergraph_Decorator_Mek_ShouldMove(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
