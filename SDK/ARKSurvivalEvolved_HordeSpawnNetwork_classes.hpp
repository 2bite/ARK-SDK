#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HordeSpawnNetwork_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HordeSpawnNetwork.HordeSpawnNetwork_C
// 0x0118 (0x0568 - 0x0450)
class AHordeSpawnNetwork_C : public AServerSidePoint_C
{
public:
	class USphereComponent*                            Sphere1;                                                  // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DifficultyLevel;                                          // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	TArray<struct FSpawnPointStruct>                   SpawnPoints;                                              // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NumOfPointsInRadius;                                      // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnRadius;                                              // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDistanceFromSpawn;                                     // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistanceFromSpawn;                                     // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZSpawnPointOffset;                                        // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InnerRadiusDistance;                                      // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfRings;                                            // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug;                                                   // 0x0494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0495(0x0003) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x0498(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StepTolerance;                                            // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightTolerance;                                          // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsActiveEvent;                                           // 0x04AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04AD(0x0003) MISSED OFFSET
	double                                             EventStart;                                               // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NodeSearchDistance;                                       // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PawnCheckRadius;                                          // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHordeTypeEnum>                        HordeType;                                                // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseSplinePaths;                                           // 0x04C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x04C2(0x0006) MISSED OFFSET
	TArray<class AHorde_Spline_Path_C*>                WorldSplines;                                             // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              SplineCooldown;                                           // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	class ASpherePostProcessVolume*                    PostProcessVolume;                                        // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x04E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x04EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FSpawnPointStruct                           CallFunc_Array_Get_Item;                                  // 0x04F0(0x0040) (Transient, DuplicateTransient)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0530(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0534(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x0538(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore2_RefProperty; // 0x0548(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore3_RefProperty; // 0x0558(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HordeSpawnNetwork.HordeSpawnNetwork_C");
		return ptr;
	}


	void STATIC_GetOriginSplinePoints(class AHorde_Spline_Path_C* LastSpline, struct FVector* OutLoc, class AHorde_Spline_Path_C** SplineData, float* DelayTime);
	void STATIC_DoNodeLineTrace(const struct FVector& Begin, const struct FVector& End, bool isFrontNode, bool* IsHit);
	void GetAngleBetweenVectors(const struct FVector& v1, const struct FVector& v2, float* Angle);
	void FindClosestNode(const struct FVector& MyLocation, bool bExcludeExisitingNode, const struct FSpawnPointStruct& ExistingNode, struct FSpawnPointStruct* RetNode);
	void CheckHitTolerance(const struct FHitResult& Hit, const struct FVector& OriginalVector, const struct FVector& SecondVector, class AActor* HitActor, bool FrontNode, const struct FVector& HitVector, bool* IsHit);
	void DrawDebugLines(bool bIsBlocked, const struct FVector& v1, const struct FVector& v2);
	void GetNeighborPoints();
	void STATIC_GetValidOriginPoints(int RingIndex, struct FSpawnPointStruct* RetNodes);
	void Evaluate_Points();
	void STATIC_GetNearbyPoints(const struct FSpawnPointStruct& In, int ArrayIndex, TArray<struct FSpawnPointStruct>* Points);
	void FindPaths();
	void GetPointsInRadius(int RingNum, TArray<struct FSpawnPointStruct>* RetSpawnPoints);
	void GenerateRing(float RadiusInput, int NumOfPoints, int Radiuslevel);
	void GenerateSpawnPoints();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void GenerateInitialSpawnPoints();
	void ClearAllSpawnPoints();
	void RegeneratePaths();
	void EnablePostProcess();
	void ExecuteUbergraph_HordeSpawnNetwork(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
