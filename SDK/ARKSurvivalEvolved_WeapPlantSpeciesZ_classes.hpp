#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPlantSpeciesZ_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapPlantSpeciesZ.WeapPlantSpeciesZ_C
// 0x000F (0x0EAF - 0x0EA0)
class AWeapPlantSpeciesZ_C : public APrimalWeaponUncookGrenade
{
public:
	bool                                               bQuickFire;                                               // 0x0EA0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0EA1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x0EA2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0EA3(0x0001) MISSED OFFSET
	float                                              CallFunc_PlayWeaponAnimation_ReturnValue;                 // 0x0EA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayWeaponAnimation_ReturnValue2;                // 0x0EA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bEnabled;                              // 0x0EAC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x0EAD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x0EAE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapPlantSpeciesZ.WeapPlantSpeciesZ_C");
		return ptr;
	}


	void UserConstructionScript();
	void StartSecondaryActionEvent();
	void BPFiredWeapon();
	void ROS_UpdateQuickfire(bool bEnabled);
	void ExecuteUbergraph_WeapPlantSpeciesZ(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
