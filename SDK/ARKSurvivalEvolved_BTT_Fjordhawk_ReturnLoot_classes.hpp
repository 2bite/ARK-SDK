#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_Fjordhawk_ReturnLoot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C
// 0x0080 (0x00F8 - 0x0078)
class UBTT_Fjordhawk_ReturnLoot_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      ActorKey;                                                 // 0x0078(0x0028) (Edit, BlueprintVisible)
	float                                              DropLootDistance;                                         // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      OnLandKey;                                                // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      NavPointKey;                                              // 0x00D0(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_Fjordhawk_ReturnLoot.BTT_Fjordhawk_ReturnLoot_C");
		return ptr;
	}


	void GetHorizontalDistance(class AActor* Actor1, class AActor* Actor2, float* Distance);
	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_BTT_Fjordhawk_ReturnLoot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
