#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapElectricProd_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapElectricProd.WeapElectricProd_C
// 0x0018 (0x0DA0 - 0x0D88)
class AWeapElectricProd_C : public AWeapBaseClub_C
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0D88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TaserFXFPV;                                               // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TaserFX;                                                  // 0x0D98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapElectricProd.WeapElectricProd_C");
		return ptr;
	}


	void BPHandleMeleeAttack();
	void UserConstructionScript();
	void ReactivateParticles();
	void ExecuteUbergraph_WeapElectricProd(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
