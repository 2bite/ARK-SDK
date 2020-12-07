#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Overheat_DayCycleManager_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Overheat_DayCycleManager.Overheat_DayCycleManager_C
// 0x0000 (0x0599 - 0x0599)
class AOverheat_DayCycleManager_C : public ADayCycleManagerBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Overheat_DayCycleManager.Overheat_DayCycleManager_C");
		return ptr;
	}


	void Is_SuperheatActive(bool* NewParam);
	void UserConstructionScript();
	void ExecuteUbergraph_Overheat_DayCycleManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
