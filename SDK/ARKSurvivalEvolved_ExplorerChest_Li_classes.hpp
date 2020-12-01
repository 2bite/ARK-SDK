#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplorerChest_Li_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplorerChest_Li.ExplorerChest_Li_C
// 0x000B (0x05A0 - 0x0595)
class AExplorerChest_Li_C : public AExplorerChest_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0595(0x0003) MISSED OFFSET
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExplorerChest_Li.ExplorerChest_Li_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ExplorerChest_Li(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
