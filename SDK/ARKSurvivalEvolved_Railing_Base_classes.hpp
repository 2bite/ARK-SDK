#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Railing_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Railing_Base.Railing_Base_C
// 0x0000 (0x0AE8 - 0x0AE8)
class ARailing_Base_C : public AWall_Base_Small_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Railing_Base.Railing_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Railing_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
