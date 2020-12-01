#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Horde_Spline_Path_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Horde_Spline_Path.Horde_Spline_Path_C
// 0x0098 (0x04E8 - 0x0450)
class AHorde_Spline_Path_C : public AActor
{
public:
	class USplineComponent*                            Spline;                                                   // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FHorde_Spline_Path_Struct                   Struct;                                                   // 0x0460(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FHorde_Spline_Path_Struct>           Gate_Data;                                                // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     Color;                                                    // 0x04A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Random_Color;                                             // 0x04AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04AD(0x0003) MISSED OFFSET
	struct FLinearColor                                LinearColor;                                              // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               Stream;                                                   // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UDinoCharacterStatusComponent_BP_Coel_C*> Debug_Array;                                              // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NumSplinePoints;                                          // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	double                                             LastSpawnTime;                                            // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Horde_Spline_Path.Horde_Spline_Path_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void ExecuteUbergraph_Horde_Spline_Path(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
