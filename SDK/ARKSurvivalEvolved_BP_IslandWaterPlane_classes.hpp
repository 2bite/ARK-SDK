#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_IslandWaterPlane_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_IslandWaterPlane.BP_IslandWaterPlane_C
// 0x0090 (0x04F8 - 0x0468)
class ABP_IslandWaterPlane_C : public AActor
{
public:
	class UStaticMeshComponent*                        Rendermesh_underside;                                     // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        RenderMeshSurface;                                        // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           SunLight;                                                 // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ADayCycleManager*                            DayCycleManager;                                          // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              Size;                                                     // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UndersideZOffset;                                         // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Master;                                                   // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	class UStaticMesh*                                 WaterPlane;                                               // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          TopMaterial;                                              // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          UndersideMaterial;                                        // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PrevFoamIntensity;                                        // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NoWaterPlane;                                             // 0x04B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoUpdateDayCycleValues;                                // 0x04B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x04B6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x04B7(0x0001) MISSED OFFSET
	struct FLinearColor                                CallFunc_Conv_ColorToLinearColor_ReturnValue;             // 0x04B8(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue;       // 0x04C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x04D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x04D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x04D2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x04D3(0x0005) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x04E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADayCycleManager*                            CallFunc_GetDayCycleManager_ReturnValue;                  // 0x04E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADirectionalLight*                           CallFunc_GetFirstDirectionalLight_ReturnValue;            // 0x04F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_IslandWaterPlane.BP_IslandWaterPlane_C");
		return ptr;
	}


	void SetFoamIntensity(float FoamIntensity);
	void UpdateSun();
	void UserConstructionScript();
	void BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_12_ActorMatineeUpdated__DelegateSignature();
	void ReceiveBeginPlay();
	void AutoUpdateValues();
	void ExecuteUbergraph_BP_IslandWaterPlane(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
