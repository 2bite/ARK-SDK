#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArtifactCrate_Instantaneous_Alt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArtifactCrate_Instantaneous_Alt.ArtifactCrate_Instantaneous_Alt_C
// 0x0018 (0x0ED0 - 0x0EB8)
class AArtifactCrate_Instantaneous_Alt_C : public ASupplyCrateBaseBP_Instantaneous_C
{
public:
	class UPrimalInventoryBP_ArtifactCrate_C*          PrimalInventoryBP_ArtifactCrate_C1;                       // 0x0EB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0EC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArtifactCrate_Instantaneous_Alt.ArtifactCrate_Instantaneous_Alt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ArtifactCrate_Instantaneous_Alt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
