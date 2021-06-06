#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_OceanInstant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrate_OceanInstant.SupplyCrate_OceanInstant_C
// 0x0018 (0x0ED0 - 0x0EB8)
class ASupplyCrate_OceanInstant_C : public ASupplyCrateBaseBP_Instantaneous_C
{
public:
	class UPrimalInventoryBP_SupplyCrate_C*            PrimalInventoryBP_SupplyCrate_C1;                         // 0x0EB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0EC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrate_OceanInstant.SupplyCrate_OceanInstant_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrate_OceanInstant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
