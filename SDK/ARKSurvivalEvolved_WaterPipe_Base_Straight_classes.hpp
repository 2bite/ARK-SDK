#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterPipe_Base_Straight_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterPipe_Base_Straight.WaterPipe_Base_Straight_C
// 0x0000 (0x0B08 - 0x0B08)
class AWaterPipe_Base_Straight_C : public AWaterPipeBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterPipe_Base_Straight.WaterPipe_Base_Straight_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WaterPipe_Base_Straight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
