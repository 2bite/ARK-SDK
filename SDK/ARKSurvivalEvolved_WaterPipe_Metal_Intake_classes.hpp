#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterPipe_Metal_Intake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterPipe_Metal_Intake.WaterPipe_Metal_Intake_C
// 0x0000 (0x0B08 - 0x0B08)
class AWaterPipe_Metal_Intake_C : public AWaterPipe_Base_Intake_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterPipe_Metal_Intake.WaterPipe_Metal_Intake_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WaterPipe_Metal_Intake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
