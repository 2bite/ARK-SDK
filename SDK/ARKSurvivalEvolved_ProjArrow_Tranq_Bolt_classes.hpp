#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Tranq_Bolt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjArrow_Tranq_Bolt.ProjArrow_Tranq_Bolt_C
// 0x0000 (0x0690 - 0x0690)
class AProjArrow_Tranq_Bolt_C : public AProjArrow_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjArrow_Tranq_Bolt.ProjArrow_Tranq_Bolt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjArrow_Tranq_Bolt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
