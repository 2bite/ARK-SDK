#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Base_Disease_Low_Troodon_TorporPosion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Base_Disease_Low_Troodon_TorporPosion.Buff_Base_Disease_Low_Troodon_TorporPosion_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_Base_Disease_Low_Troodon_TorporPosion_C : public ABuff_Base_Disease_Low_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Base_Disease_Low_Troodon_TorporPosion.Buff_Base_Disease_Low_Troodon_TorporPosion_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Base_Disease_Low_Troodon_TorporPosion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
