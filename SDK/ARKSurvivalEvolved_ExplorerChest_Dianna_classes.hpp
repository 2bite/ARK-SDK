#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplorerChest_Dianna_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplorerChest_Dianna.ExplorerChest_Dianna_C
// 0x000B (0x0590 - 0x0585)
class AExplorerChest_Dianna_C : public AExplorerChest_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0585(0x0003) MISSED OFFSET
	class USkeletalMeshComponent*                      SkeletalMesh2;                                            // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExplorerChest_Dianna.ExplorerChest_Dianna_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ExplorerChest_Dianna(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
