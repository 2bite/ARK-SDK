#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_Fjordhawk_GrabLoot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Service_Fjordhawk_GrabLoot.Service_Fjordhawk_GrabLoot_C
// 0x0000 (0x0080 - 0x0080)
class UService_Fjordhawk_GrabLoot_C : public UBTService_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Service_Fjordhawk_GrabLoot.Service_Fjordhawk_GrabLoot_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_Service_Fjordhawk_GrabLoot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
