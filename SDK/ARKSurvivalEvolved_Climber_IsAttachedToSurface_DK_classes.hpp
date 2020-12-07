#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Climber_IsAttachedToSurface_DK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Climber_IsAttachedToSurface_DK.Climber_IsAttachedToSurface_DK_C
// 0x0000 (0x0090 - 0x0090)
class UClimber_IsAttachedToSurface_DK_C : public UBTDecorator_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Climber_IsAttachedToSurface_DK.Climber_IsAttachedToSurface_DK_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_Climber_IsAttachedToSurface_DK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
