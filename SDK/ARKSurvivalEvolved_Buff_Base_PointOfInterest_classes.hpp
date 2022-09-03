#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Base_PointOfInterest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C
// 0x0160 (0x0AD8 - 0x0978)
class ABuff_Base_PointOfInterest_C : public ABuff_Base_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0978(0x0008) MISSED OFFSET
	struct FPointOfInterestData                        PointOfInterestData;                                      // 0x0980(0x0140) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               POIInitialized;                                           // 0x0AC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               K2Node_Event_bNewUniqueState;                             // 0x0AC1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0AC2(0x0006) MISSED OFFSET
	class AActor*                                      K2Node_Event_UnviewedByActor;                             // 0x0AC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_ViewedByActor;                               // 0x0AD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C");
		return ptr;
	}


	bool CanBeViewed(class AActor* ByActor);
	class UClass* GetPointCustomData();
	struct FPointOfInterestData GetPointOfInterestData();
	void InititalizePointOfInterest();
	void UserConstructionScript();
	void SetPointTagUniqueState(bool bNewUniqueState);
	void UnviewPoint(class AActor* UnviewedByActor);
	void ViewPoint(class AActor* ViewedByActor);
	void ExecuteUbergraph_Buff_Base_PointOfInterest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
