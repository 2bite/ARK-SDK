#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x000B (0x05A8 - 0x059D)
class AExplorerChest_DinoDossiers_C : public AExplorerChest_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x059D(0x0003) MISSED OFFSET
	class USkeletalMeshComponent*                      SkeletalMesh2;                                            // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
