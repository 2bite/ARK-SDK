#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapHarpoonTranq_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapHarpoonTranq.WeapHarpoonTranq_C
// 0x0018 (0x0E48 - 0x0E30)
class AWeapHarpoonTranq_C : public AShooterWeapon_Projectile
{
public:
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh3PSM;                                                 // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapHarpoonTranq.WeapHarpoonTranq_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapHarpoonTranq(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
