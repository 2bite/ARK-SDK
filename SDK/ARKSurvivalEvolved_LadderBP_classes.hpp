#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LadderBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LadderBP.LadderBP_C
// 0x0000 (0x0B48 - 0x0B48)
class ALadderBP_C : public ALadderBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LadderBP.LadderBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_LadderBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
