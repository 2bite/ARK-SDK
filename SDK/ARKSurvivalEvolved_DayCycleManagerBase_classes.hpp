#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DayCycleManagerBase_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DayCycleManagerBase.DayCycleManagerBase_C
// 0x0009 (0x0549 - 0x0540)
class ADayCycleManagerBase_C : public ADayCycleManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventNocturnalLogic;                                   // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DayCycleManagerBase.DayCycleManagerBase_C");
		return ptr;
	}


	void HandleGrappleHookImpacted(class APrimalProjectileGrapplingHook* GrapHookProj, struct FHitResult* HitInfo);
	void GetWeatherEventWarning(int* WeatherEventWarningType);
	void Get_Golem_MeshClass(class UClass** isScorchedEarthMesh);
	void GetBaseTemperatureModified(float* ModifiedBaseTemperature);
	void ActivatedStructureUpdated(class APrimalStructureItemContainer* ActiveStructure);
	void UserConstructionScript();
	void ExecuteUbergraph_DayCycleManagerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
