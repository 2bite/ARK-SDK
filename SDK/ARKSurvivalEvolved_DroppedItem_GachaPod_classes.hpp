#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItem_GachaPod_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItem_GachaPod.DroppedItem_GachaPod_C
// 0x008C (0x078C - 0x0700)
class ADroppedItem_GachaPod_C : public ADroppedItemGeneric_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasItem;                                                  // 0x0708(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0709(0x0003) MISSED OFFSET
	float                                              ItemQuality;                                              // 0x070C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ItemColor;                                                // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BaseColor;                                                // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material;                                                 // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             ActivationTime;                                           // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ColorBlendTime;                                           // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0744(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0748(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_TimeSince_Network_ReturnValue;                   // 0x0750(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x0754(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x0758(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0759(0x0003) MISSED OFFSET
	struct FLinearColor                                CallFunc_MakeColor_ReturnValue;                           // 0x075C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_LinearColorLerp_ReturnValue;                     // 0x076C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_MakeColor_ReturnValue2;                          // 0x077C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItem_GachaPod.DroppedItem_GachaPod_C");
		return ptr;
	}


	void UpdateItemName();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void OnRep_ItemQuality();
	void ReceiveBeginPlay();
	void CheckForItem();
	void ActivateFX();
	void UserConstructionScript();
	void ColorShift();
	void ExecuteUbergraph_DroppedItem_GachaPod(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
