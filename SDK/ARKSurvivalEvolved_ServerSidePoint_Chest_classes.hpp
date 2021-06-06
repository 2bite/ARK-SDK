#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ServerSidePoint_Chest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ServerSidePoint_Chest.ServerSidePoint_Chest_C
// 0x0008 (0x0470 - 0x0468)
class AServerSidePoint_Chest_C : public ANote
{
public:
	class USkeletalMeshComponent*                      Chest_Mesh;                                               // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ServerSidePoint_Chest.ServerSidePoint_Chest_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ServerSidePoint_Chest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
