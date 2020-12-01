#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Spindes_Spine_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Spindes_Spine.Spindes_Spine_C
// 0x0010 (0x0460 - 0x0450)
class ASpindes_Spine_C : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TheRoot;                                                  // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Spindes_Spine.Spindes_Spine_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_Spindes_Spine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
