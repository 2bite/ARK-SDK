#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoTekHelmet_Mosa_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DinoTekHelmet_Mosa.Buff_DinoTekHelmet_Mosa_C
// 0x0000 (0x0C38 - 0x0C38)
class ABuff_DinoTekHelmet_Mosa_C : public ABuff_DinoTekHelmet_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DinoTekHelmet_Mosa.Buff_DinoTekHelmet_Mosa_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_DinoTekHelmet_Mosa(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
