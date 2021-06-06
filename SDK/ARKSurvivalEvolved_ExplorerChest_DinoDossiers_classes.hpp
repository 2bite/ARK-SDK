#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplorerChest_DinoDossiers_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplorerChest_DinoDossiers.ExplorerChest_DinoDossiers_C
// 0x000A (0x0620 - 0x0616)
class AExplorerChest_DinoDossiers_C : public AExplorerChest_Base_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0616(0x0002) MISSED OFFSET
	class USkeletalMeshComponent*                      SkeletalMesh2;                                            // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExplorerChest_DinoDossiers.ExplorerChest_DinoDossiers_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ExplorerChest_DinoDossiers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
