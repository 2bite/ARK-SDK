#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjDart_Tranq_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjDart_Tranq.ProjDart_Tranq_C
// 0x0000 (0x0678 - 0x0678)
class AProjDart_Tranq_C : public AProjArrow_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjDart_Tranq.ProjDart_Tranq_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjDart_Tranq(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
