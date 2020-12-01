#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Level35_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrate_Level35.SupplyCrate_Level35_C
// 0x0027 (0x1030 - 0x1009)
class ASupplyCrate_Level35_C : public ASupplyCrateBaseBP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1009(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      SkeletalMesh2;                                            // 0x1010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x1018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          SpawningInMaterial;                                       // 0x1020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          OrigMat;                                                  // 0x1028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrate_Level35.SupplyCrate_Level35_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrate_Level35(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
