#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OilVein_Base_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OilVein_Base_BP.OilVein_Base_BP_C
// 0x0000 (0x0AE0 - 0x0AE0)
class AOilVein_Base_BP_C : public AWaterPipe_Base_Straight_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OilVein_Base_BP.OilVein_Base_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_OilVein_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
