#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MetalRoof_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MetalRoof_SM.MetalRoof_SM_C
// 0x0000 (0x0AE8 - 0x0AE8)
class AMetalRoof_SM_C : public ABaseRoof_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MetalRoof_SM.MetalRoof_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MetalRoof_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
