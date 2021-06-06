#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Zipline_Anchor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Zipline_Anchor.Zipline_Anchor_C
// 0x0090 (0x0B70 - 0x0AE0)
class AZipline_Anchor_C : public APrimalStructure
{
public:
	class USphereComponent*                            UseCollision;                                             // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CableAttachPoint;                                         // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AZipline_Anchor_C*                           LinkedAnchor;                                             // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bIsSecondaryAnchor;                                       // 0x0B00(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bDebugZipline;                                            // 0x0B01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0B02(0x0006) MISSED OFFSET
	class UPrimalCableComponent*                       CableComponent;                                           // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FindLocationDistance;                                     // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FindLocationNumberOfSteps;                                // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseFindLocation;                                          // 0x0B18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseLineOfSightCheck;                                      // 0x0B19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0B1A(0x0002) MISSED OFFSET
	float                                              MaxActivationDistanceFromLine;                            // 0x0B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AnchorBreakEmitter;                                       // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LinkedAnchorStructureID;                                  // 0x0B28(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreventAddingCableComponent;                              // 0x0B2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0B2D(0x0003) MISSED OFFSET
	float                                              ZiplineBlockedCapsuleTraceScale;                          // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0B34(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0B35(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0xA];                                       // 0x0B36(0x000A) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_AddComponent_RelativeTransform_AddComponentDefaultTransform;// 0x0B40(0x0030) (Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Zipline_Anchor.Zipline_Anchor_C");
		return ptr;
	}


	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void Get_Closest_Point_on_Line_Non_Pure(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point, struct FVector* closestPoint);
	void Get_Zipline_Info_NonPure(struct FVector* DownDirection, class AZipline_Anchor_C** UpperAnchor, class AZipline_Anchor_C** LowerAnchor, struct FVector* UpperCableAttachLoc, struct FVector* LowerCableAttachLoc);
	void Get_Zipline_Buff(class AController* Controller, class UClass** Buff);
	void InitLinkedAnchorClient();
	void InitLinkedAnchor();
	void CreateCable();
	bool AllowManualMultiUseActivation(class APlayerController** ForPC);
	bool IsUpperAnchorPoint();
	void STATIC_HasLineOfSight(class APrimalCharacter* PrimalCharacter, const struct FVector& StartPoint, bool* HasLineOfSight);
	void CheckForHarness(class APlayerController* Controller, bool* Return);
	void STATIC_SpawnBreakEmitter();
	void GetBuffInfo(class UClass* ZiplineBuff, float* AttachOffset, struct FWeaponAnim* AttachAnims, class USceneComponent** HandleMeshComp, bool* Motorized, float* StartEndOffset, bool* HideWeaponEnabled, float* MaxActivationDistance);
	void Get_Zipline_Info(struct FVector* DownDirection, class AZipline_Anchor_C** UpperAnchor, class AZipline_Anchor_C** LowerAnchor, struct FVector* UpperCableAttachLoc, struct FVector* LowerCableAttachLoc);
	void IsZiplineBlocked(class APrimalCharacter* primalChar, float StartEndOffset, float AttachOffset, const struct FVector& overrideStartLocation, float overrideFindLocationDistance, const struct FVector& OverrideFindLocationDirection, bool DontUseLineOfSightCheck, struct FHitResult* HitResult, bool* HitReturn, struct FVector* StartLocation);
	void ReceiveDestroyed();
	void GetClosestPointOnLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point, struct FVector* closestPoint);
	void RideZipline(class APlayerController* PC, class UClass* ZiplineBuff);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Zipline_Anchor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
