#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemHorde_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemHorde_Base.DroppedItemHorde_Base_C
// 0x0024 (0x071C - 0x06F8)
class ADroppedItemHorde_Base_C : public ADroppedItem
{
public:
	class UStaticMeshComponent*                        StaticMesh1_1;                                            // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeToLand;                                               // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0704(0x0004) MISSED OFFSET
	double                                             TimeEjected;                                              // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0710(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemHorde_Base.DroppedItemHorde_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_DroppedItemHorde_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
