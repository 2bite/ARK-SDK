#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekLight_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekLight.TekLight_C
// 0x0044 (0x0E54 - 0x0E10)
class ATekLight_C : public ABaseFuelBurner_GasOnly_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_TekLight_C*               PrimalInventoryBP_TekLight_C1;                            // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LightIntensityLevel;                                      // 0x0E28(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                CycleLightIntensityLevel_MultiUseIndex;                   // 0x0E2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightIntensity_Default;                                   // 0x0E30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightIntensityMult_Medium;                                // 0x0E34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightIntensityMult_Low;                                   // 0x0E38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E3C(0x0004) MISSED OFFSET
	class ULightComponent*                             CallFunc_GetLampLight_Light;                              // 0x0E40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_newPowerLevel2;                        // 0x0E48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0E4C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x0E4D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0E4E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0E4F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_newPowerLevel;                         // 0x0E50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekLight.TekLight_C");
		return ptr;
	}


	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void STATIC_BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	void GetLampLight(class ULightComponent** Light);
	void Get_Next_Cycled_LightIntensity_Level(int* nextLevel);
	void SetLampLightIntensity(int intensityLevel);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void BPRefreshedStructureColors();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Multi_SetLampLightIntensity(int newPowerLevel);
	void Client_SetLampLightIntensity(int newPowerLevel);
	void ExecuteUbergraph_TekLight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
