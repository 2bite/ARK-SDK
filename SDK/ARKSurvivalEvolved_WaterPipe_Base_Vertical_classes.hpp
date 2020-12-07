#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterPipe_Base_Vertical_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterPipe_Base_Vertical.WaterPipe_Base_Vertical_C
// 0x0000 (0x0AE0 - 0x0AE0)
class AWaterPipe_Base_Vertical_C : public AWaterPipeBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterPipe_Base_Vertical.WaterPipe_Base_Vertical_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WaterPipe_Base_Vertical(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
