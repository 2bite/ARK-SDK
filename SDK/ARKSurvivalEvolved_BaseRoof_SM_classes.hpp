#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BaseRoof_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseRoof_SM.BaseRoof_SM_C
// 0x0000 (0x0AC0 - 0x0AC0)
class ABaseRoof_SM_C : public ARamp_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseRoof_SM.BaseRoof_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BaseRoof_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
