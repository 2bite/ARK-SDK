#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Railing_Wood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Railing_Wood.Railing_Wood_C
// 0x0000 (0x0AE8 - 0x0AE8)
class ARailing_Wood_C : public ARailing_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Railing_Wood.Railing_Wood_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Railing_Wood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
