#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplorerChest_Leddica_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplorerChest_Leddica.ExplorerChest_Leddica_C
// 0x000A (0x05F8 - 0x05EE)
class AExplorerChest_Leddica_C : public AExplorerChest_Base_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x05EE(0x0002) MISSED OFFSET
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExplorerChest_Leddica.ExplorerChest_Leddica_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ExplorerChest_Leddica(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
