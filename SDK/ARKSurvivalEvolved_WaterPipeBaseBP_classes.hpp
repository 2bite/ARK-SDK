#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterPipeBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterPipeBaseBP.WaterPipeBaseBP_C
// 0x0000 (0x0AC0 - 0x0AC0)
class AWaterPipeBaseBP_C : public ACableBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterPipeBaseBP.WaterPipeBaseBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WaterPipeBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
