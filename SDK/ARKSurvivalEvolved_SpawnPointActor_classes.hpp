#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpawnPointActor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpawnPointActor.SpawnPointActor_C
// 0x0001 (0x0451 - 0x0450)
class ASpawnPointActor_C : public AServerSidePoint_C
{
public:
	bool                                               bDisablePoint;                                            // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnPointActor.SpawnPointActor_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SpawnPointActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif