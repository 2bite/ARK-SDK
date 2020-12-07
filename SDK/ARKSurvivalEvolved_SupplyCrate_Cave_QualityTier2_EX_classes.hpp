#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Cave_QualityTier2_EX_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrate_Cave_QualityTier2_EX.SupplyCrate_Cave_QualityTier2_EX_C
// 0x0018 (0x0E98 - 0x0E80)
class ASupplyCrate_Cave_QualityTier2_EX_C : public ASupplyCrateBaseBP_Instantaneous_C
{
public:
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_SupplyCrate_C*            PrimalInventoryBP_SupplyCrate_C1_1;                       // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrate_Cave_QualityTier2_EX.SupplyCrate_Cave_QualityTier2_EX_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrate_Cave_QualityTier2_EX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
