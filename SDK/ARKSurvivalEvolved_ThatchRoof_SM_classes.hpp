#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ThatchRoof_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ThatchRoof_SM.ThatchRoof_SM_C
// 0x0000 (0x0AE8 - 0x0AE8)
class AThatchRoof_SM_C : public ABaseRoof_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ThatchRoof_SM.ThatchRoof_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ThatchRoof_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
