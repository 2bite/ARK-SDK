#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x0018 (0x0D70 - 0x0D58)
class AWeapElectricProd_C : public AWeapBaseClub_C
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TaserFXFPV;                                               // 0x0D60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TaserFX;                                                  // 0x0D68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
