#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Level15_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrate_Level15.SupplyCrate_Level15_C
// 0x0027 (0x1070 - 0x1049)
class ASupplyCrate_Level15_C : public ASupplyCrateBaseBP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1049(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      SkeletalMesh2;                                            // 0x1050(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x1058(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          SpawningInMaterial;                                       // 0x1060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          OrigMat;                                                  // 0x1068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrate_Level15.SupplyCrate_Level15_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrate_Level15(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
