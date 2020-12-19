#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalBuffPersistentData_GenericTimeRemaining_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalBuffPersistentData_GenericTimeRemaining.PrimalBuffPersistentData_GenericTimeRemaining_C
// 0x0004 (0x004C - 0x0048)
class UPrimalBuffPersistentData_GenericTimeRemaining_C : public UPrimalBuffPersistentData
{
public:
	float                                              TimeLeft;                                                 // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalBuffPersistentData_GenericTimeRemaining.PrimalBuffPersistentData_GenericTimeRemaining_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalBuffPersistentData_GenericTimeRemaining(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
