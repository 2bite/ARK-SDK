#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_SetFocus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_SetFocus.Task_SetFocus_C
// 0x0028 (0x00A0 - 0x0078)
class UTask_SetFocus_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      FocusTarget;                                              // 0x0078(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_SetFocus.Task_SetFocus_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_SetFocus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
