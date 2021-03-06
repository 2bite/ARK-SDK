#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplorerChest_SheWhoWaits_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplorerChest_SheWhoWaits.ExplorerChest_SheWhoWaits_C
// 0x0012 (0x0628 - 0x0616)
class AExplorerChest_SheWhoWaits_C : public AExplorerChest_Base_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0616(0x0002) MISSED OFFSET
	class UPointLightComponent*                        PointLight1;                                              // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh2;                                            // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExplorerChest_SheWhoWaits.ExplorerChest_SheWhoWaits_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ExplorerChest_SheWhoWaits(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
