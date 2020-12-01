#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjDart_Aggro_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjDart_Aggro.ProjDart_Aggro_C
// 0x0000 (0x0678 - 0x0678)
class AProjDart_Aggro_C : public AProjDart_Tranq_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjDart_Aggro.ProjDart_Aggro_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjDart_Aggro(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
