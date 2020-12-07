#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider.DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C
// 0x0010 (0x0748 - 0x0738)
class ADroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C : public ADroppedItemGeneric_FertilizedEgg_NoPhysics_C
{
public:
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x0738(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider.DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
