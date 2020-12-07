#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExtinctionDayCycle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExtinctionDayCycle.ExtinctionDayCycle_C
// 0x0099 (0x0632 - 0x0599)
class AExtinctionDayCycle_C : public ADayCycleManagerBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0599(0x0007) MISSED OFFSET
	class ABP_ProtoArkDome_Base_C*                     MasterDome;                                               // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MIC_NoWeather;                                            // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MIC_Weather;                                              // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Sky_material;                                             // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               hasBoundMasterDome;                                       // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05C1(0x0003) MISSED OFFSET
	int                                                CurrentSkybox;                                            // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      FZBossLoc;                                                // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              FZBossRadius;                                             // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05D4(0x0004) MISSED OFFSET
	class AActor*                                      FZLoc;                                                    // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              FZRadius;                                                 // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Boss_ElectricalStormActive;                               // 0x05E4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05E5(0x0003) MISSED OFFSET
	TArray<class AActor*>                              FZBossElementNodeLocs;                                    // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class AActor*                                      FZArenaLoc;                                               // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      IKArenaLoc;                                               // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      DKArenaLoc;                                               // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      FKArenaLoc;                                               // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class AActor*>                              ForestKaijuWyvernSpawns;                                  // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class AActor*                                      KingKLootDrop;                                            // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               K2Node_Event_Value;                                       // 0x0630(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x0631(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExtinctionDayCycle.ExtinctionDayCycle_C");
		return ptr;
	}


	void GetVar_KKArenaAscenscionLoc(class AActor** SSPoint);
	void GetVar_DKArenaLoc(class AActor** Value);
	void GetVar_IsBossElectricalStormActive(bool* Value);
	void GetVar_KKArenaLoc(class AActor** ServerPoint);
	void GetVar_FKArenaLoc(class AActor** ServerPoint);
	void GetVar_IKArenaLoc(class AActor** ServerPoint);
	void Get_Golem_MeshClass(class UClass** isScorchedEarthMesh);
	void STATIC_AttemptWeaponFiring(class AShooterWeapon** theWeapon);
	bool AllowStructureActivation(class APrimalStructure** theStructure);
	bool AllowWeaponFiring(class AActor** theWeaponOrStructure);
	void IsActorIntoBossElectricalStorm(class AActor* Actor, bool* Return);
	void SetSkyMaterial(float* Time, TArray<float>* Weather);
	void Init_Materials();
	void Bind_Master_Dome(class ABP_ProtoArkDome_Base_C* Dome, bool* newMaster);
	void UserConstructionScript();
	void SetVar_Boss_ElectricalStormActive(bool Value);
	void ExecuteUbergraph_ExtinctionDayCycle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
