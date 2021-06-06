#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Zipline_NonMotorized_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Zipline_NonMotorized.Buff_Zipline_NonMotorized_C
// 0x0000 (0x0CAC - 0x0CAC)
class ABuff_Zipline_NonMotorized_C : public ABuff_Zipline_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Zipline_NonMotorized.Buff_Zipline_NonMotorized_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Zipline_NonMotorized(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
