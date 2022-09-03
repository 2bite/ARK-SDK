#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Underwater_Base_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Underwater_Base_SM.Underwater_Base_SM_C
// 0x0038 (0x0F08 - 0x0ED0)
class AUnderwater_Base_SM_C : public APrimalStructureUnderwaterBase
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0ED0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Collision_Top;                                            // 0x0ED8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Collision_Left;                                           // 0x0EE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Collision_Right;                                          // 0x0EE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Collision_Back;                                           // 0x0EF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Collision_Front;                                          // 0x0EF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Bounds;                                                   // 0x0F00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Underwater_Base_SM.Underwater_Base_SM_C");
		return ptr;
	}


	bool BPPreventPlacingStructureOntoMe(class APlayerController** PC, class APrimalStructure** ForNewStructure, struct FHitResult* ForHitResult);
	bool BPForceConsideredEnemyFoundation(class APlayerController** PC, class APrimalStructure** ForNewStructure, struct FVector* TestAtLocation);
	void STATIC_ChangedCompartmentFloodState();
	void UserConstructionScript();
	void ExecuteUbergraph_Underwater_Base_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
