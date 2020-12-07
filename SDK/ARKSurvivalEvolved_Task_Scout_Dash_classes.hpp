#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_Scout_Dash_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_Scout_Dash.Task_Scout_Dash_C
// 0x0008 (0x0080 - 0x0078)
class UTask_Scout_Dash_C : public UBTTask_BlueprintBase
{
public:
	double                                             ExecuteTime;                                              // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_Scout_Dash.Task_Scout_Dash_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_Scout_Dash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
