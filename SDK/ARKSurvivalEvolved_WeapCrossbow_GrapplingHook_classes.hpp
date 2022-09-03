#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0028 (0x0E88 - 0x0E60)
class AWeapCrossbow_GrapplingHook_C : public APrimalWeaponGrapplingHook
{
public:
	class USceneComponent*                             CableStart3P;                                             // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      MechanismMesh3P;                                          // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ProjectileMesh1P;                                         // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CableStart1P;                                             // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      MechanismMesh1P;                                          // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
