#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoInventoryComponent_MotorRaft_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoInventoryComponent_MotorRaft.DinoInventoryComponent_MotorRaft_C
// 0x0000 (0x0590 - 0x0590)
class UDinoInventoryComponent_MotorRaft_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoInventoryComponent_MotorRaft.DinoInventoryComponent_MotorRaft_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoInventoryComponent_MotorRaft(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
