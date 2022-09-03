#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTropeFlakCannon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjTropeFlakCannon.ProjTropeFlakCannon_C
// 0x0119 (0x0809 - 0x06F0)
class AProjTropeFlakCannon_C : public AProjGrenade_C
{
public:
	class UAudioComponent*                             Audio1_1;                                                 // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageDestroyRadius;                                     // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x06FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0700(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable;                 // 0x0704(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0705(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0706(0x0002) MISSED OFFSET
	struct FHitResult                                  K2Node_Event_Result;                                      // 0x0708(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0790(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x079C(0x0004) MISSED OFFSET
	TArray<struct FOverlappedFoliageElement>           CallFunc_ServerSearchFoliage_OutFoliage;                  // 0x07A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FOverlappedFoliageElement                   CallFunc_Array_Get_Item;                                  // 0x07B0(0x0038) (Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x07E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x07EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07ED(0x0003) MISSED OFFSET
	class UInstancedStaticMeshComponent*               K2Node_DynamicCast_AsInstancedStaticMeshComponent;        // 0x07F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x07F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x07F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x07FA(0x0006) MISSED OFFSET
	class AInstancedFoliageActor*                      K2Node_DynamicCast_AsInstancedFoliageActor;               // 0x0800(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0808(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjTropeFlakCannon.ProjTropeFlakCannon_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void UserConstructionScript();
	void OnExplode(struct FHitResult* Result);
	void ExecuteUbergraph_ProjTropeFlakCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
