#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0018 (0x0E10 - 0x0DF8)
class AWeapHarpoonTranq_C : public AShooterWeapon_Projectile
{
public:
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0DF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0E00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh3PSM;                                                 // 0x0E08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
