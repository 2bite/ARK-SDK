#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LampPostOmni_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LampPostOmni.LampPostOmni_C
// 0x003C (0x0E14 - 0x0DD8)
class ALampPostOmni_C : public AStructureItemContainerBaseBP_C
{
public:
	class UPrimalInventoryBP_Light_Base_C*             PrimalInventoryBP_Light_Base_C1;                          // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LightIntensityLevel;                                      // 0x0DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                CycleLightIntensityLevel_MultiUseIndex;                   // 0x0DEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightIntensity_Default;                                   // 0x0DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightIntensityMult_Medium;                                // 0x0DF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightIntensityMult_Low;                                   // 0x0DF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0DFC(0x0004) MISSED OFFSET
	class ULightComponent*                             CallFunc_GetLampLight_light;                              // 0x0E00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_newPowerLevel2;                        // 0x0E08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0E0C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x0E0D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0E0E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0E0F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_newPowerLevel;                         // 0x0E10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LampPostOmni.LampPostOmni_C");
		return ptr;
	}


	void Get_Next_Cycled_LightIntensityLevel(int* nextLevel);
	void GetLampLight(class ULightComponent** Light);
	void SetLampLightIntensity(int intensityLevel);
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void BPRefreshedStructureColors();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Multi_SetLampLightIntensity(int newPowerLevel);
	void Client_SetLampLightIntensity(int newPowerLevel);
	void ExecuteUbergraph_LampPostOmni(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
