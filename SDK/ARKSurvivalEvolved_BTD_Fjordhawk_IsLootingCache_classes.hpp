#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTD_Fjordhawk_IsLootingCache_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTD_Fjordhawk_IsLootingCache.BTD_Fjordhawk_IsLootingCache_C
// 0x0000 (0x0090 - 0x0090)
class UBTD_Fjordhawk_IsLootingCache_C : public UBTDecorator_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTD_Fjordhawk_IsLootingCache.BTD_Fjordhawk_IsLootingCache_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_BTD_Fjordhawk_IsLootingCache(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
