#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoTekHelmet_Rex_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DinoTekHelmet_Rex.Buff_DinoTekHelmet_Rex_C
// 0x0000 (0x0B78 - 0x0B78)
class ABuff_DinoTekHelmet_Rex_C : public ABuff_DinoTekHelmet_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DinoTekHelmet_Rex.Buff_DinoTekHelmet_Rex_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_DinoTekHelmet_Rex(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif