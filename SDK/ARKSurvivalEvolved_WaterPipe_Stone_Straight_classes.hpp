#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterPipe_Stone_Straight_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterPipe_Stone_Straight.WaterPipe_Stone_Straight_C
// 0x0000 (0x0AC0 - 0x0AC0)
class AWaterPipe_Stone_Straight_C : public AWaterPipe_Base_Straight_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterPipe_Stone_Straight.WaterPipe_Stone_Straight_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WaterPipe_Stone_Straight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif