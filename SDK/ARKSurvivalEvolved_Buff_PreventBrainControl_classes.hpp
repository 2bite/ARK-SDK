#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventBrainControl_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PreventBrainControl.Buff_PreventBrainControl_C
// 0x0008 (0x0980 - 0x0978)
class ABuff_PreventBrainControl_C : public APrimalBuff
{
public:
	float                                              DeactivateAfterTimeTamed;                                 // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeactivateAfterTimeHuman;                                 // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PreventBrainControl.Buff_PreventBrainControl_C");
		return ptr;
	}


	void BPPreSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PreventBrainControl(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
