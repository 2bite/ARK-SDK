#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjDart_RefinedTranq_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjDart_RefinedTranq.ProjDart_RefinedTranq_C
// 0x0000 (0x0690 - 0x0690)
class AProjDart_RefinedTranq_C : public AProjDart_Tranq_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjDart_RefinedTranq.ProjDart_RefinedTranq_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjDart_RefinedTranq(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
