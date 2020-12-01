#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterTank_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterTank_Metal.WaterTank_Metal_C
// 0x0000 (0x0EC0 - 0x0EC0)
class AWaterTank_Metal_C : public AWaterTankBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterTank_Metal.WaterTank_Metal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WaterTank_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
