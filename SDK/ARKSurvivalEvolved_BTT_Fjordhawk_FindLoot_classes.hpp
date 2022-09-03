#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_Fjordhawk_FindLoot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTT_Fjordhawk_FindLoot.BTT_Fjordhawk_FindLoot_C
// 0x0050 (0x00C8 - 0x0078)
class UBTT_Fjordhawk_FindLoot_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      ActorKey;                                                 // 0x0078(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      PointKey;                                                 // 0x00A0(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_Fjordhawk_FindLoot.BTT_Fjordhawk_FindLoot_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_BTT_Fjordhawk_FindLoot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
