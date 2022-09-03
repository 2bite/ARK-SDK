#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Tranq_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjArrow_Tranq.ProjArrow_Tranq_C
// 0x0000 (0x0690 - 0x0690)
class AProjArrow_Tranq_C : public AProjArrow_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjArrow_Tranq.ProjArrow_Tranq_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjArrow_Tranq(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
