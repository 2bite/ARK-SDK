#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapLasso_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapLasso.WeapLasso_C
// 0x0018 (0x0E78 - 0x0E60)
class AWeapLasso_C : public APrimalWeaponGrapplingHook
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CableStart3P;                                             // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CableStart1P;                                             // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapLasso.WeapLasso_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	bool BPCanEquip(class AShooterCharacter** ByCharacter);
	bool BPRemainEquipped();
	void UserConstructionScript();
	void ExecuteUbergraph_WeapLasso(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
