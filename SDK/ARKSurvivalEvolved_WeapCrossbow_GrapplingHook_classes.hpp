#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCrossbow_GrapplingHook_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapCrossbow_GrapplingHook.WeapCrossbow_GrapplingHook_C
// 0x0028 (0x0E30 - 0x0E08)
class AWeapCrossbow_GrapplingHook_C : public APrimalWeaponGrapplingHook
{
public:
	class USceneComponent*                             CableStart3P;                                             // 0x0E08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      MechanismMesh3P;                                          // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ProjectileMesh1P;                                         // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CableStart1P;                                             // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      MechanismMesh1P;                                          // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapCrossbow_GrapplingHook.WeapCrossbow_GrapplingHook_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapCrossbow_GrapplingHook(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
