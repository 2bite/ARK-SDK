#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_EndBoss_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_EndBoss.DinoSettings_EndBoss_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_EndBoss_C : public UPrimalDinoSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_EndBoss.DinoSettings_EndBoss_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_EndBoss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
